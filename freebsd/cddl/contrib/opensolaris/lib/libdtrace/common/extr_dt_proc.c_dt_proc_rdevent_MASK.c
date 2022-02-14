
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int state; } ;
struct TYPE_14__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ rd_event_msg_t ;
typedef int rd_err_e ;
struct TYPE_15__ {int dt_procs; } ;
typedef TYPE_3__ dtrace_hdl_t ;
struct TYPE_16__ {int dpr_proc; int dpr_errmsg; scalar_t__ dpr_pid; int dpr_rtld; } ;
typedef TYPE_4__ dt_proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

 int VAR_3 ;


 int FUNC_1 (char*,int,char const*,int,...) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(dtrace_hdl_t *VAR_4, dt_proc_t *VAR_5, const char *VAR_6)
{
 rd_event_msg_t VAR_7;
 rd_err_e VAR_8;

 if ((VAR_8 = FUNC_6(VAR_5->dpr_rtld, &VAR_7)) != VAR_3) {
  FUNC_1("pid %d: failed to get %s event message: %s\n",
      (int)VAR_5->dpr_pid, VAR_6, FUNC_5(VAR_8));
  return;
 }

 FUNC_1("pid %d: rtld event %s type=%d state %d\n",
     (int)VAR_5->dpr_pid, VAR_6, VAR_7.type, VAR_7.u.state);

 switch (VAR_7.type) {
 case 130:
  if (VAR_7.u.state != VAR_2)
   break;

  FUNC_0(VAR_5->dpr_proc);
  if (FUNC_2(VAR_4, VAR_5) != 0)
   FUNC_3(VAR_4, VAR_4->dt_procs, VAR_5,
       VAR_5->dpr_errmsg);

  break;
 case 128:
  FUNC_0(VAR_5->dpr_proc);
  FUNC_4(VAR_5, VAR_1);
  break;
 case 129:
  FUNC_0(VAR_5->dpr_proc);
  FUNC_4(VAR_5, VAR_0);
  break;
 }
}
