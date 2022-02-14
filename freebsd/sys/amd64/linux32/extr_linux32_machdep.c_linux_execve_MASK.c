
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_execve_args {int envp; int argp; int path; } ;
struct image_args {int dummy; } ;


 int FUNC_0 (struct thread*,int ,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct image_args*,char*,int ,int ,int ) ;
 int FUNC_3 (struct thread*,struct image_args*) ;

int
FUNC_4(struct thread *VAR_2, struct linux_execve_args *VAR_3)
{
 struct image_args VAR_4;
 char *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, VAR_3->path, &VAR_5);

 VAR_6 = FUNC_2(&VAR_4, VAR_5, VAR_1,
     VAR_3->argp, VAR_3->envp);
 FUNC_1(VAR_5, VAR_0);
 if (VAR_6 == 0)
  VAR_6 = FUNC_3(VAR_2, &VAR_4);
 return (VAR_6);
}
