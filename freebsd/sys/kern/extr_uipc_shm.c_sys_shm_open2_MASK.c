
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct shm_open2_args {int name; int shmflags; int mode; int flags; int path; } ;


 int FUNC_0 (struct thread*,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_0, struct shm_open2_args *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->path, VAR_1->flags, VAR_1->mode,
     VAR_1->shmflags, VAR_1->name));
}
