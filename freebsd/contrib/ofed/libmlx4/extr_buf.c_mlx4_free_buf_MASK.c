
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_buf {scalar_t__ length; int buf; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct mlx4_buf *VAR_0)
{
 if (VAR_0->length) {
  FUNC_0(VAR_0->buf, VAR_0->length);
  FUNC_1(VAR_0->buf, VAR_0->length);
 }
}
