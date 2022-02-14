
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_ib_mr {int * pages; int page_map; int page_map_size; } ;
struct ib_device {int dma_device; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(struct ib_device *VAR_4,
        struct mlx4_ib_mr *VAR_5,
        int VAR_6)
{
 int VAR_7;






 VAR_5->page_map_size = FUNC_4(VAR_6 * sizeof(u64),
        VAR_3);


 VAR_5->pages = (__be64 *)FUNC_3(VAR_2);
 if (!VAR_5->pages)
  return -VAR_1;

 VAR_5->page_map = FUNC_0(VAR_4->dma_device, VAR_5->pages,
          VAR_5->page_map_size, VAR_0);

 if (FUNC_1(VAR_4->dma_device, VAR_5->page_map)) {
  VAR_7 = -VAR_1;
  goto err;
 }

 return 0;

err:
 FUNC_2((unsigned long)VAR_5->pages);
 return VAR_7;
}
