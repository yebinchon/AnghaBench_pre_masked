
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int32 ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct req_pkt {int dummy; } ;
struct info_mem_stats {scalar_t__* hashcount; void* demobilizations; void* allocations; void* findpeer_calls; void* freepeermem; void* totalpeermem; void* timereset; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int *,int *,struct req_pkt*,int) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_6(
 sockaddr_u *VAR_10,
 endpt *VAR_11,
 struct req_pkt *VAR_12
 )
{
 register struct info_mem_stats *VAR_13;
 register int VAR_14;

 VAR_13 = (struct info_mem_stats *)FUNC_5(VAR_10, VAR_11, VAR_12,
        sizeof(struct info_mem_stats));

 VAR_13->timereset = FUNC_1((u_int32)(VAR_2 - VAR_8));
 VAR_13->totalpeermem = FUNC_2((u_short)VAR_9);
 VAR_13->freepeermem = FUNC_2((u_short)VAR_6);
 VAR_13->findpeer_calls = FUNC_1((u_int32)VAR_3);
 VAR_13->allocations = FUNC_1((u_int32)VAR_4);
 VAR_13->demobilizations = FUNC_1((u_int32)VAR_5);

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
  VAR_13->hashcount[VAR_14] = (u_char)
      FUNC_3((u_int)VAR_7[VAR_14], VAR_1);

 (void) FUNC_4();
 FUNC_0();
}
