
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_9__ {scalar_t__ timeout; int * param; int lineno; int func; } ;
typedef TYPE_2__ mbreg_t ;
struct TYPE_8__ {int mbox_sleep_ok; int mbox_sleeping; int mboxcmd_done; } ;
struct TYPE_10__ {TYPE_1__ isp_osinfo; int isp_lastmbxcmd; int isp_lock; } ;
typedef TYPE_3__ ispsoftc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ,char*,char*,int ,int,int ,int ) ;
 int FUNC_3 (int*,int *,int ,char*,int,int ,int ) ;

void
FUNC_4(ispsoftc_t *VAR_5, mbreg_t *VAR_6)
{
 u_int VAR_7, VAR_8;

 VAR_8 = (VAR_6->timeout == 0) ? VAR_1 : VAR_6->timeout;
 if (VAR_5->isp_osinfo.mbox_sleep_ok) {
  VAR_5->isp_osinfo.mbox_sleep_ok = 0;
  VAR_5->isp_osinfo.mbox_sleeping = 1;
  FUNC_3(&VAR_5->isp_osinfo.mboxcmd_done, &VAR_5->isp_lock,
      VAR_3, "ispmbx_sleep", VAR_8 * VAR_4, 0, 0);
  VAR_5->isp_osinfo.mbox_sleep_ok = 1;
  VAR_5->isp_osinfo.mbox_sleeping = 0;
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 += 100) {
   if (VAR_5->isp_osinfo.mboxcmd_done)
    break;
   FUNC_1(VAR_5);
   if (VAR_5->isp_osinfo.mboxcmd_done)
    break;
   FUNC_0(100);
  }
 }
 if (VAR_5->isp_osinfo.mboxcmd_done == 0) {
  FUNC_2(VAR_5, VAR_0, "%s Mailbox Command (0x%x) Timeout (%uus) (%s:%d)",
      VAR_5->isp_osinfo.mbox_sleep_ok? "Interrupting" : "Polled",
      VAR_5->isp_lastmbxcmd, VAR_8, VAR_6->func, VAR_6->lineno);
  VAR_6->param[0] = VAR_2;
  VAR_5->isp_osinfo.mboxcmd_done = 1;
 }
}
