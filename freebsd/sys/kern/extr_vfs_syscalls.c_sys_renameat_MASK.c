
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct renameat_args {int new; int newfd; int old; int oldfd; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_1, struct renameat_args *VAR_2)
{

 return (FUNC_0(VAR_1, VAR_2->oldfd, VAR_2->old, VAR_2->newfd, VAR_2->new,
     VAR_0));
}
