
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct dup2_args {scalar_t__ to; scalar_t__ from; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int,int) ;

int
FUNC_1(struct thread *VAR_1, struct dup2_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_0, 0, (int)VAR_2->from, (int)VAR_2->to));
}
