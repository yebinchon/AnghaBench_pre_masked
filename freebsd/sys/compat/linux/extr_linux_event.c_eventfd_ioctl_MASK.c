
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {scalar_t__ f_type; int f_flag; int * f_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_5, u_long VAR_6, void *VAR_7,
    struct ucred *VAR_8, struct thread *VAR_9)
{

 if (VAR_5->f_data == ((void*)0) || (VAR_5->f_type != VAR_0 &&
     VAR_5->f_type != VAR_1))
  return (VAR_2);

 switch (VAR_6)
 {
 case 128:
  if ((*(int *)VAR_7))
   FUNC_1(&VAR_5->f_flag, VAR_4);
  else
   FUNC_0(&VAR_5->f_flag, VAR_4);
 case 129:
  return (0);
 default:
  return (VAR_3);
 }
}
