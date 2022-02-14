
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct parse {int dummy; } ;
struct info_io_stats {int int_received; int interrupts; int notsent; int sent; int received; int ignored; int dropped; int lowwater; int fullrecvbufs; int freerecvbufs; int totalrecvbufs; int timereset; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,int *,size_t*,size_t*,void*,int ,int) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(
 struct parse *VAR_5,
 FILE *VAR_6
 )
{
 struct info_io_stats *VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 int VAR_10;

again:
 VAR_10 = FUNC_2(VAR_4, VAR_3, 0, 0, 0, ((void*)0), &VAR_8,
        &VAR_9, (void *)&VAR_7, 0, sizeof(*VAR_7));

 if (VAR_10 == VAR_2 && VAR_4 == VAR_0) {
  VAR_4 = VAR_1;
  goto again;
 }

 if (VAR_10 != 0)
  return;

 if (!FUNC_0(VAR_8, VAR_6))
  return;

 if (!FUNC_1(VAR_9, sizeof(*VAR_7)))
  return;

 FUNC_3(VAR_6, "time since reset:     %lu\n",
  (u_long)FUNC_4(VAR_7->timereset));
 FUNC_3(VAR_6, "receive buffers:      %u\n",
  (u_int)FUNC_5(VAR_7->totalrecvbufs));
 FUNC_3(VAR_6, "free receive buffers: %u\n",
  (u_int)FUNC_5(VAR_7->freerecvbufs));
 FUNC_3(VAR_6, "used receive buffers: %u\n",
  (u_int)FUNC_5(VAR_7->fullrecvbufs));
 FUNC_3(VAR_6, "low water refills:    %u\n",
  (u_int)FUNC_5(VAR_7->lowwater));
 FUNC_3(VAR_6, "dropped packets:      %lu\n",
  (u_long)FUNC_4(VAR_7->dropped));
 FUNC_3(VAR_6, "ignored packets:      %lu\n",
  (u_long)FUNC_4(VAR_7->ignored));
 FUNC_3(VAR_6, "received packets:     %lu\n",
  (u_long)FUNC_4(VAR_7->received));
 FUNC_3(VAR_6, "packets sent:         %lu\n",
  (u_long)FUNC_4(VAR_7->sent));
 FUNC_3(VAR_6, "packets not sent:     %lu\n",
  (u_long)FUNC_4(VAR_7->notsent));
 FUNC_3(VAR_6, "interrupts handled:   %lu\n",
  (u_long)FUNC_4(VAR_7->interrupts));
 FUNC_3(VAR_6, "received by int:      %lu\n",
  (u_long)FUNC_4(VAR_7->int_received));
}
