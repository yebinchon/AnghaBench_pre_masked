
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_device {int page_size; } ;
struct mlx4_buf {int buf; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct mlx4_buf*,int ,int ) ;

int FUNC_3(struct mlx4_device *VAR_0, struct mlx4_buf *VAR_1, int VAR_2,
        int VAR_3)
{
 if (FUNC_2(VAR_1, FUNC_0(VAR_2 * VAR_3, VAR_0->page_size),
      VAR_0->page_size))
  return -1;
 FUNC_1(VAR_1->buf, 0, VAR_2 * VAR_3);

 return 0;
}
