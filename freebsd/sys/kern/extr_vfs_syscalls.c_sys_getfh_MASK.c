
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct getfh_args {int fhp; int fname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_2, struct getfh_args *VAR_3)
{

 return (FUNC_0(VAR_2, 0, VAR_0, VAR_3->fname, VAR_1,
     VAR_3->fhp));
}
