
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_type; } ;
struct file {struct socket* f_data; int * f_ops; } ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct socket*,int,int) ;
 int * FUNC_2 (int ,struct socket*,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int * FUNC_4 (int ,struct socket*,int ,int ) ;

int
FUNC_5(struct file *VAR_7)
{
 int VAR_8;
 struct socket *VAR_9;
 int VAR_10;
 SVCXPRT *VAR_11;

 VAR_9 = VAR_7->f_data;

 VAR_8 = VAR_6;
 VAR_10 = FUNC_1(VAR_9, VAR_8, VAR_8);
 if (VAR_10)
  return (VAR_10);





 if (VAR_9->so_type == VAR_2)
  VAR_11 = FUNC_2(VAR_5, VAR_9, 0, 0);
 else
  VAR_11 = FUNC_4(VAR_5, VAR_9, 0, 0);
 if (VAR_11) {
  VAR_7->f_ops = &VAR_3;
  VAR_7->f_data = ((void*)0);
  FUNC_3(VAR_11, VAR_1, VAR_0, VAR_4,
      ((void*)0));
  FUNC_0(VAR_11);
 }

 return (0);
}
