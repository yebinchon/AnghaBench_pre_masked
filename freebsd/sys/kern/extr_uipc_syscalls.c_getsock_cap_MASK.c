
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct filecaps {int dummy; } ;
struct file {scalar_t__ f_type; int f_flag; } ;
typedef int cap_rights_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct thread*,int,int *,struct file**,struct filecaps*) ;
 int FUNC_2 (struct filecaps*) ;

int
FUNC_3(struct thread *VAR_2, int VAR_3, cap_rights_t *VAR_4,
    struct file **VAR_5, u_int *VAR_6, struct filecaps *VAR_7)
{
 struct file *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_8, VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);
 if (VAR_8->f_type != VAR_0) {
  FUNC_0(VAR_8, VAR_2);
  if (VAR_7 != ((void*)0))
   FUNC_2(VAR_7);
  return (VAR_1);
 }
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8->f_flag;
 *VAR_5 = VAR_8;
 return (0);
}
