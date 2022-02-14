
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_chdir_args {int path; } ;


 int FUNC_0 (struct thread*,int ,char**) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct thread*,char*,int ) ;

int
FUNC_3(struct thread *VAR_1, struct linux_chdir_args *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1, VAR_2->path, &VAR_3);

 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_0);
 FUNC_1(VAR_3);
 return (VAR_4);
}
