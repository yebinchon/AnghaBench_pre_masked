
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_renameat_args {int newname; int newdfd; int oldname; int olddfd; } ;
struct linux_renameat2_args {int flags; int newname; int newdfd; int oldname; int olddfd; } ;


 int FUNC_0 (struct thread*,struct linux_renameat2_args*) ;

int
FUNC_1(struct thread *VAR_0, struct linux_renameat_args *VAR_1)
{
 struct linux_renameat2_args VAR_2 = {
     .olddfd = VAR_1->olddfd,
     .oldname = VAR_1->oldname,
     .newdfd = VAR_1->newdfd,
     .newname = VAR_1->newname,
     .flags = 0
 };

 return (FUNC_0(VAR_0, &VAR_2));
}
