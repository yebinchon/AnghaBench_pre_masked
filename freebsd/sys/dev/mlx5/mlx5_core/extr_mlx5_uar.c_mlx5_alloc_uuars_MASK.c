
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int num_uars; struct mlx5_bf* uars; struct mlx5_bf* bfs; struct mlx5_bf* bitmap; struct mlx5_bf* count; int lock; int num_low_latency_uuars; } ;
struct mlx5_core_dev {int pdev; } ;
struct mlx5_bf {int buf_size; int uuarn; scalar_t__ index; int map; int lock32; int lock; int need_lock; scalar_t__ offset; int * reg; int regreg; struct mlx5_bf* uar; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct mlx5_bf*) ;
 int VAR_8 ;
 int FUNC_6 (struct mlx5_core_dev*,scalar_t__*) ;
 int FUNC_7 (struct mlx5_core_dev*,scalar_t__) ;
 int FUNC_8 (struct mlx5_core_dev*,char*,scalar_t__,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct mlx5_core_dev *VAR_9, struct mlx5_uuar_info *VAR_10)
{
 int VAR_11 = VAR_4 * VAR_3;
 struct mlx5_bf *VAR_12;
 phys_addr_t VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_10->num_uars = VAR_4;
 VAR_10->num_low_latency_uuars = VAR_5;

 FUNC_9(&VAR_10->lock);
 VAR_10->uars = FUNC_4(VAR_10->num_uars, sizeof(*VAR_10->uars), VAR_1);

 VAR_10->bfs = FUNC_4(VAR_11, sizeof(*VAR_10->bfs), VAR_1);

 VAR_10->bitmap = FUNC_4(FUNC_0(VAR_11), sizeof(*VAR_10->bitmap),
    VAR_1);

 VAR_10->count = FUNC_4(VAR_11, sizeof(*VAR_10->count), VAR_1);

 for (VAR_15 = 0; VAR_15 < VAR_10->num_uars; VAR_15++) {
  VAR_14 = FUNC_6(VAR_9, &VAR_10->uars[VAR_15].index);
  if (VAR_14)
   goto out_count;

  VAR_13 = FUNC_11(VAR_9->pdev, 0) +
         ((phys_addr_t)(VAR_10->uars[VAR_15].index) << VAR_6);
  VAR_10->uars[VAR_15].map = FUNC_2(VAR_13, VAR_7);
  if (!VAR_10->uars[VAR_15].map) {
   FUNC_7(VAR_9, VAR_10->uars[VAR_15].index);
   VAR_14 = -VAR_0;
   goto out_count;
  }
  FUNC_8(VAR_9, "allocated uar index 0x%x, mmaped at %p\n",
         VAR_10->uars[VAR_15].index, VAR_10->uars[VAR_15].map);
 }

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  VAR_12 = &VAR_10->bfs[VAR_15];

  VAR_12->buf_size = (1 << FUNC_1(VAR_9, VAR_8)) / 2;
  VAR_12->uar = &VAR_10->uars[VAR_15 / VAR_3];
  VAR_12->regreg = VAR_10->uars[VAR_15 / VAR_3].map;
  VAR_12->reg = ((void*)0);
  VAR_12->offset = (VAR_15 % VAR_3) *
        (1 << FUNC_1(VAR_9, VAR_8)) +
        VAR_2;
  VAR_12->need_lock = FUNC_10(VAR_15);
  FUNC_12(&VAR_12->lock);
  FUNC_12(&VAR_12->lock32);
  VAR_12->uuarn = VAR_15;
 }

 return 0;

out_count:
 for (VAR_15--; VAR_15 >= 0; VAR_15--) {
  FUNC_3(VAR_10->uars[VAR_15].map);
  FUNC_7(VAR_9, VAR_10->uars[VAR_15].index);
 }
 FUNC_5(VAR_10->count);

 FUNC_5(VAR_10->bitmap);

 FUNC_5(VAR_10->bfs);

 FUNC_5(VAR_10->uars);
 return VAR_14;
}
