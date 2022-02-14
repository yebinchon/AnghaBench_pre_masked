
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_symlinkat_args {int newdfd; int newname; int oldname; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,char**) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct thread*,char*,int,char*,int ) ;
 int FUNC_3 (struct thread*,int ,int ,char**,int,int) ;

int
FUNC_4(struct thread *VAR_4, struct linux_symlinkat_args *VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = (VAR_5->newdfd == VAR_1) ? VAR_0 : VAR_5->newdfd;
 FUNC_0(VAR_4, VAR_5->oldname, &VAR_6);

 VAR_8 = FUNC_3(VAR_4, VAR_5->newname, VAR_3, &VAR_7, 1, VAR_9);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_6);
  return (VAR_8);
 }

 VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_9, VAR_7, VAR_2);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 return (VAR_8);
}
