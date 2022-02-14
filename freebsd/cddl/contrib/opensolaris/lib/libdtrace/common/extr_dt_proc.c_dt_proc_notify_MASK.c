
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_7__ {scalar_t__ dpr_pid; } ;
typedef TYPE_1__ dt_proc_t ;
struct TYPE_8__ {char* dprn_errmsg; struct TYPE_8__* dprn_next; TYPE_1__* dprn_dpr; } ;
typedef TYPE_2__ dt_proc_notify_t ;
struct TYPE_9__ {int dph_lock; int dph_cv; TYPE_2__* dph_notify; } ;
typedef TYPE_3__ dt_proc_hash_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_6(dtrace_hdl_t *VAR_0, dt_proc_hash_t *VAR_1, dt_proc_t *VAR_2,
    const char *VAR_3)
{
 dt_proc_notify_t *VAR_4 = FUNC_0(VAR_0, sizeof (dt_proc_notify_t));

 if (VAR_4 == ((void*)0)) {
  FUNC_1("failed to allocate notification for %d %s\n",
      (int)VAR_2->dpr_pid, VAR_3);
 } else {
  VAR_4->dprn_dpr = VAR_2;
  if (VAR_3 == ((void*)0))
   VAR_4->dprn_errmsg[0] = '\0';
  else
   (void) FUNC_5(VAR_4->dprn_errmsg, VAR_3,
       sizeof (VAR_4->dprn_errmsg));

  (void) FUNC_3(&VAR_1->dph_lock);

  VAR_4->dprn_next = VAR_1->dph_notify;
  VAR_1->dph_notify = VAR_4;

  (void) FUNC_2(&VAR_1->dph_cv);
  (void) FUNC_4(&VAR_1->dph_lock);
 }
}
