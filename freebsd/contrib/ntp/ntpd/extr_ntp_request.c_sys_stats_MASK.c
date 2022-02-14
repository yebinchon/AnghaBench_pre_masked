
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct req_pkt {int dummy; } ;
struct info_sys_stats {void* tsrounding; void* lamport; void* received; void* limitrejected; void* badauth; void* processed; void* badlength; void* unknownversion; void* newversionpkt; void* oldversionpkt; void* denied; void* timereset; void* timeup; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,struct req_pkt*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_4(
 sockaddr_u *VAR_13,
 endpt *VAR_14,
 struct req_pkt *VAR_15
 )
{
 register struct info_sys_stats *VAR_16;

 VAR_16 = (struct info_sys_stats *)FUNC_3(VAR_13, VAR_14, VAR_15,
  sizeof(struct info_sys_stats));
 VAR_16->timeup = FUNC_1((u_int32)VAR_0);
 VAR_16->timereset = FUNC_1((u_int32)(VAR_0 - VAR_11));
 VAR_16->denied = FUNC_1((u_int32)VAR_10);
 VAR_16->oldversionpkt = FUNC_1((u_int32)VAR_7);
 VAR_16->newversionpkt = FUNC_1((u_int32)VAR_6);
 VAR_16->unknownversion = FUNC_1((u_int32)VAR_3);
 VAR_16->badlength = FUNC_1((u_int32)VAR_2);
 VAR_16->processed = FUNC_1((u_int32)VAR_8);
 VAR_16->badauth = FUNC_1((u_int32)VAR_1);
 VAR_16->limitrejected = FUNC_1((u_int32)VAR_5);
 VAR_16->received = FUNC_1((u_int32)VAR_9);
 VAR_16->lamport = FUNC_1((u_int32)VAR_4);
 VAR_16->tsrounding = FUNC_1((u_int32)VAR_12);
 (void) FUNC_2();
 FUNC_0();
}
