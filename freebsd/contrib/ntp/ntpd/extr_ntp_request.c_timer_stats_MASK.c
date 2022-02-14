
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_int32 ;
struct req_pkt {int dummy; } ;
struct info_timer_stats {void* xmtcalls; void* overflows; void* timereset; void* alarms; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,struct req_pkt*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_4(
 sockaddr_u * VAR_4,
 endpt * VAR_5,
 struct req_pkt * VAR_6
 )
{
 struct info_timer_stats * VAR_7;
 u_long VAR_8;

 VAR_7 = (struct info_timer_stats *)FUNC_3(VAR_4, VAR_5,
          VAR_6, sizeof(*VAR_7));

 VAR_8 = VAR_1 - VAR_2;
 VAR_7->timereset = FUNC_1((u_int32)VAR_8);
 VAR_7->alarms = VAR_7->timereset;
 VAR_7->overflows = FUNC_1((u_int32)VAR_0);
 VAR_7->xmtcalls = FUNC_1((u_int32)VAR_3);

 (void) FUNC_2();
 FUNC_0();
}
