
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_buf {scalar_t__ buf; int length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t,int) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (int *,int ,int,int,int,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

int FUNC_4(struct mlx4_buf *VAR_6, size_t VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_6->length = FUNC_0(VAR_7, VAR_8);
 VAR_6->buf = FUNC_2(((void*)0), VAR_6->length, VAR_3 | VAR_4,
   VAR_2 | VAR_0, -1, 0);
 if (VAR_6->buf == VAR_1)
  return VAR_5;

 VAR_9 = FUNC_1(VAR_6->buf, VAR_7);
 if (VAR_9)
  FUNC_3(VAR_6->buf, VAR_6->length);

 return VAR_9;
}
