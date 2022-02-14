
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct filecaps {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct thread*,struct file**) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,struct file*,int*,int,struct filecaps*) ;

int
FUNC_3(struct thread *VAR_0, struct file **VAR_1, int *VAR_2, int VAR_3,
    struct filecaps *VAR_4)
{
 struct file *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_0, &VAR_5);
 if (VAR_6)
  return (VAR_6);

 VAR_6 = FUNC_2(VAR_0, VAR_5, &VAR_7, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_5, VAR_0);
  return (VAR_6);
 }

 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_5;
 else
  FUNC_1(VAR_5, VAR_0);

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_7;

 return (0);
}
