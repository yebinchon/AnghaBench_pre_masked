
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct turnstile {int dummy; } ;
struct TYPE_2__ {int lo_flags; } ;
struct rmlock {TYPE_1__ lock_object; int rm_activeReaders; void* rm_writecpus; int rm_lock_mtx; int rm_lock_sx; } ;
struct rm_priotracker {int rmp_flags; int rmp_thread; } ;
typedef void* cpuset_t ;


 scalar_t__ FUNC_0 (void**,void**) ;
 int FUNC_1 (void**,void**) ;
 struct rm_priotracker* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rmlock*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (void*,int ,int (*) (struct rmlock*),int ,struct rmlock*) ;
 int FUNC_9 (int *) ;
 struct turnstile* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct turnstile*,int ,int ) ;

void
FUNC_12(struct rmlock *VAR_7)
{
 struct rm_priotracker *VAR_8;
 struct turnstile *VAR_9;
 cpuset_t VAR_10;

 if (FUNC_3())
  return;

 if (VAR_7->lock_object.lo_flags & VAR_0)
  FUNC_9(&VAR_7->rm_lock_sx);
 else
  FUNC_4(&VAR_7->rm_lock_mtx);

 if (FUNC_0(&VAR_7->rm_writecpus, &VAR_4)) {

  VAR_10 = VAR_4;
  FUNC_1(&VAR_10, &VAR_7->rm_writecpus);
  VAR_7->rm_writecpus = VAR_4;
  FUNC_7(VAR_7);


  FUNC_5(&VAR_5);
  while ((VAR_8 = FUNC_2(&VAR_7->rm_activeReaders)) != ((void*)0)) {
   VAR_9 = FUNC_10(&VAR_7->lock_object);
   VAR_8->rmp_flags = VAR_1 | VAR_2;
   FUNC_6(&VAR_5);
   FUNC_11(VAR_9, VAR_8->rmp_thread,
       VAR_3);
   FUNC_5(&VAR_5);
  }
  FUNC_6(&VAR_5);
 }
}
