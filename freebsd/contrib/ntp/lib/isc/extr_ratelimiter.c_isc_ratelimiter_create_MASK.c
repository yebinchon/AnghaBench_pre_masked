
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_timermgr_t ;
typedef int isc_task_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_8__ {int refs; int pertic; int lock; int shutdownevent; int * timer; int * task; int pending; int state; int interval; int * mctx; } ;
typedef TYPE_1__ isc_ratelimiter_t ;
typedef int isc_mem_t ;
typedef int isc_event_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ,int *,int ,int ,TYPE_1__*,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int *,int ,int *,int *,int *,int ,TYPE_1__*,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

isc_result_t
FUNC_9(isc_mem_t *VAR_7, isc_timermgr_t *VAR_8,
         isc_task_t *VAR_9, isc_ratelimiter_t **VAR_10)
{
 isc_result_t VAR_11;
 isc_ratelimiter_t *VAR_12;
 FUNC_1(VAR_10 != ((void*)0) && *VAR_10 == ((void*)0));

 VAR_12 = FUNC_5(VAR_7, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0))
  return VAR_1;
 VAR_12->mctx = VAR_7;
 VAR_12->refs = 1;
 VAR_12->task = VAR_9;
 FUNC_4(&VAR_12->interval, 0, 0);
 VAR_12->timer = ((void*)0);
 VAR_12->pertic = 1;
 VAR_12->state = VAR_3;
 FUNC_3(VAR_12->pending);

 VAR_11 = FUNC_7(&VAR_12->lock);
 if (VAR_11 != VAR_2)
  goto free_mem;
 VAR_11 = FUNC_8(VAR_8, VAR_4,
      ((void*)0), ((void*)0), VAR_12->task, VAR_6,
      VAR_12, &VAR_12->timer);
 if (VAR_11 != VAR_2)
  goto free_mutex;





 VAR_12->refs++;

 FUNC_2(&VAR_12->shutdownevent,
         sizeof(isc_event_t),
         0, ((void*)0), VAR_0,
         VAR_5, VAR_12, VAR_12, ((void*)0), ((void*)0));

 *VAR_10 = VAR_12;
 return (VAR_2);

free_mutex:
 FUNC_0(&VAR_12->lock);
free_mem:
 FUNC_6(VAR_7, VAR_12, sizeof(*VAR_12));
 return (VAR_11);
}
