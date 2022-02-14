
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct req_pkt {int dummy; } ;
struct info_control {void* numasyncmsgs; void* numctlbadop; void* numctldatatooshort; void* numctlbadversion; void* numctlbadoffset; void* numctlinputerr; void* numctlinputfrag; void* numctlinputresp; void* numctltooshort; void* numctlerrors; void* numctlfrags; void* numctlresponses; void* numctlbadpkts; void* numctlreq; void* ctltimereset; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_3 (int *,int *,struct req_pkt*,int) ;

__attribute__((used)) static void
FUNC_4(
 sockaddr_u *VAR_16,
 endpt *VAR_17,
 struct req_pkt *VAR_18
 )
{
 register struct info_control *VAR_19;

 VAR_19 = (struct info_control *)FUNC_3(VAR_16, VAR_17, VAR_18,
      sizeof(struct info_control));

 VAR_19->ctltimereset = FUNC_1((u_int32)(VAR_1 - VAR_0));
 VAR_19->numctlreq = FUNC_1((u_int32)VAR_13);
 VAR_19->numctlbadpkts = FUNC_1((u_int32)VAR_5);
 VAR_19->numctlresponses = FUNC_1((u_int32)VAR_14);
 VAR_19->numctlfrags = FUNC_1((u_int32)VAR_9);
 VAR_19->numctlerrors = FUNC_1((u_int32)VAR_8);
 VAR_19->numctltooshort = FUNC_1((u_int32)VAR_15);
 VAR_19->numctlinputresp = FUNC_1((u_int32)VAR_12);
 VAR_19->numctlinputfrag = FUNC_1((u_int32)VAR_11);
 VAR_19->numctlinputerr = FUNC_1((u_int32)VAR_10);
 VAR_19->numctlbadoffset = FUNC_1((u_int32)VAR_3);
 VAR_19->numctlbadversion = FUNC_1((u_int32)VAR_6);
 VAR_19->numctldatatooshort = FUNC_1((u_int32)VAR_7);
 VAR_19->numctlbadop = FUNC_1((u_int32)VAR_4);
 VAR_19->numasyncmsgs = FUNC_1((u_int32)VAR_2);

 (void) FUNC_2();
 FUNC_0();
}
