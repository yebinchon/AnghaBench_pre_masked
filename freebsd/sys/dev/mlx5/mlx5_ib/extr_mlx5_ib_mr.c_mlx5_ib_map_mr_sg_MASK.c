
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mlx5_ib_mr {int desc_size; int max_descs; scalar_t__ access_mode; int desc_map; scalar_t__ ndescs; } ;
struct ib_mr {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct ib_mr*,struct scatterlist*,int,unsigned int*,int ) ;
 int FUNC_3 (struct mlx5_ib_mr*,struct scatterlist*,int,unsigned int*) ;
 int VAR_2 ;
 struct mlx5_ib_mr* FUNC_4 (struct ib_mr*) ;

int FUNC_5(struct ib_mr *VAR_3, struct scatterlist *VAR_4, int VAR_5,
        unsigned int *VAR_6)
{
 struct mlx5_ib_mr *VAR_7 = FUNC_4(VAR_3);
 int VAR_8;

 VAR_7->ndescs = 0;

 FUNC_0(VAR_3->device, VAR_7->desc_map,
       VAR_7->desc_size * VAR_7->max_descs,
       VAR_0);

 if (VAR_7->access_mode == VAR_1)
  VAR_8 = FUNC_3(VAR_7, VAR_4, VAR_5, VAR_6);
 else
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_2);

 FUNC_1(VAR_3->device, VAR_7->desc_map,
          VAR_7->desc_size * VAR_7->max_descs,
          VAR_0);

 return VAR_8;
}
