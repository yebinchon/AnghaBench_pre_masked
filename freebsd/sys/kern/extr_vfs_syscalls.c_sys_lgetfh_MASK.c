
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct lgetfh_args {int fhp; int fname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_3, struct lgetfh_args *VAR_4)
{

 return (FUNC_0(VAR_3, VAR_1, VAR_0, VAR_4->fname,
     VAR_2, VAR_4->fhp));
}
