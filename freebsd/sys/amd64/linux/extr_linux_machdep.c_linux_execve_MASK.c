
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_execve_args {int envp; int argp; int path; } ;
struct image_args {int dummy; } ;


 int FUNC_0 (struct thread*,int ,char**) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct image_args*,char*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct thread*,struct image_args*) ;

int
FUNC_5(struct thread *VAR_3, struct linux_execve_args *VAR_4)
{
 struct image_args VAR_5;
 char *VAR_6;
 int VAR_7;

 FUNC_0(VAR_3, VAR_4->path, &VAR_6);

 FUNC_1(VAR_2);

 VAR_7 = FUNC_2(&VAR_5, VAR_6, VAR_1, VAR_4->argp,
     VAR_4->envp);
 FUNC_3(VAR_6, VAR_0);
 if (VAR_7 == 0)
  VAR_7 = FUNC_4(VAR_3, &VAR_5);
 return (VAR_7);
}
