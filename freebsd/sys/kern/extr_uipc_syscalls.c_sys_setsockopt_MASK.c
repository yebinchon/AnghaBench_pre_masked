
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct setsockopt_args {int valsize; int val; int name; int level; int s; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1, struct setsockopt_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->s, VAR_2->level, VAR_2->name,
     VAR_2->val, VAR_0, VAR_2->valsize));
}
