
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_buf {int length; int type; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int,int) ;

int FUNC_4(struct mlx5_buf *VAR_1, size_t VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 VAR_4 = FUNC_3(&VAR_1->buf, VAR_3, VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1->buf, VAR_5);
 if (VAR_4)
  FUNC_1(VAR_1->buf);

 if (!VAR_4) {
  VAR_1->length = VAR_5;
  VAR_1->type = VAR_0;
 }

 return VAR_4;
}
