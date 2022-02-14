
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int rc_count; } ;
struct TYPE_8__ {int rr_lock; int * rr_writer; TYPE_2__ rr_anon_rcount; TYPE_2__ rr_linked_rcount; scalar_t__ rr_track_all; scalar_t__ rr_writer_wanted; int rr_cv; } ;
typedef TYPE_1__ rrwlock_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 int * FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(rrwlock_t *VAR_2, boolean_t VAR_3, void *VAR_4)
{
 FUNC_3(&VAR_2->rr_lock);
 FUNC_0(VAR_2->rr_writer != VAR_0);
 FUNC_0(FUNC_8(&VAR_2->rr_anon_rcount) >= 0);

 while (VAR_2->rr_writer != ((void*)0) || (VAR_2->rr_writer_wanted &&
     FUNC_9(&VAR_2->rr_anon_rcount) && !VAR_3 &&
     FUNC_6(VAR_2) == ((void*)0)))
  FUNC_2(&VAR_2->rr_cv, &VAR_2->rr_lock);

 if (VAR_2->rr_writer_wanted || VAR_2->rr_track_all) {

  FUNC_5(VAR_2, VAR_4);
  (void) FUNC_7(&VAR_2->rr_linked_rcount, VAR_4);
 } else {
  (void) FUNC_7(&VAR_2->rr_anon_rcount, VAR_4);
 }
 FUNC_0(VAR_2->rr_writer == ((void*)0));
 FUNC_4(&VAR_2->rr_lock);
}
