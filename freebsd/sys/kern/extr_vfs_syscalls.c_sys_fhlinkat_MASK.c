
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct fhlinkat_args {int fhp; int to; int tofd; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1, struct fhlinkat_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->tofd, VAR_2->to, VAR_0, VAR_2->fhp));
}
