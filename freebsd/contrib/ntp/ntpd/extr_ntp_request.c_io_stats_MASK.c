
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int32 ;
struct req_pkt {int dummy; } ;
struct info_io_stats {void* int_received; void* interrupts; void* notsent; void* sent; void* received; void* ignored; void* dropped; void* lowwater; void* fullrecvbufs; void* freerecvbufs; void* totalrecvbufs; void* timereset; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (int *,int *,struct req_pkt*,int) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(
 sockaddr_u *VAR_9,
 endpt *VAR_10,
 struct req_pkt *VAR_11
 )
{
 struct info_io_stats *VAR_12;

 VAR_12 = (struct info_io_stats *)FUNC_7(VAR_9, VAR_10, VAR_11,
       sizeof(struct info_io_stats));

 VAR_12->timereset = FUNC_3((u_int32)(VAR_0 - VAR_3));
 VAR_12->totalrecvbufs = FUNC_4((u_short) FUNC_8());
 VAR_12->freerecvbufs = FUNC_4((u_short) FUNC_1());
 VAR_12->fullrecvbufs = FUNC_4((u_short) FUNC_2());
 VAR_12->lowwater = FUNC_4((u_short) FUNC_5());
 VAR_12->dropped = FUNC_3((u_int32)VAR_4);
 VAR_12->ignored = FUNC_3((u_int32)VAR_5);
 VAR_12->received = FUNC_3((u_int32)VAR_7);
 VAR_12->sent = FUNC_3((u_int32)VAR_8);
 VAR_12->notsent = FUNC_3((u_int32)VAR_6);
 VAR_12->interrupts = FUNC_3((u_int32)VAR_1);
 VAR_12->int_received = FUNC_3((u_int32)VAR_2);

 (void) FUNC_6();
 FUNC_0();
}
