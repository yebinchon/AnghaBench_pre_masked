
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct thread {int dummy; } ;
struct image_args {int dummy; } ;
struct execve_args {int envv; int argv; int fname; } ;


 int VAR_0 ;
 int FUNC_0 (struct image_args*,int ,int ,int ,int ) ;
 int FUNC_1 (struct thread*,struct image_args*,int *) ;
 int FUNC_2 (struct thread*,int,struct vmspace*) ;
 int FUNC_3 (struct thread*,struct vmspace**) ;

int
FUNC_4(struct thread *VAR_1, struct execve_args *VAR_2)
{
 struct image_args VAR_3;
 struct vmspace *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_0(&VAR_3, VAR_2->fname, VAR_0,
     VAR_2->argv, VAR_2->envv);
 if (VAR_5 == 0)
  VAR_5 = FUNC_1(VAR_1, &VAR_3, ((void*)0));
 FUNC_2(VAR_1, VAR_5, VAR_4);
 return (VAR_5);
}
