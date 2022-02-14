
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_buf {int npages; int * page_list; } ;
typedef int __be64 ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct mlx5_buf *VAR_0, __be64 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 != VAR_0->npages; VAR_2++)
  VAR_1[VAR_2] = FUNC_0(VAR_0->page_list[VAR_2]);
}
