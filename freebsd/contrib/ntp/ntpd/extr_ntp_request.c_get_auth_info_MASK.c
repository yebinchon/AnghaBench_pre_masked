
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct req_pkt {int dummy; } ;
struct info_auth {void* timereset; void* expired; void* keyuncached; void* decryptions; void* encryptions; void* keynotfound; void* keylookups; void* numfreekeys; void* numkeys; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,struct req_pkt*,int) ;

__attribute__((used)) static void
FUNC_4(
 sockaddr_u *VAR_10,
 endpt *VAR_11,
 struct req_pkt *VAR_12
 )
{
 register struct info_auth *VAR_13;

 VAR_13 = (struct info_auth *)FUNC_3(VAR_10, VAR_11, VAR_12,
          sizeof(struct info_auth));

 VAR_13->numkeys = FUNC_1((u_int32)VAR_8);
 VAR_13->numfreekeys = FUNC_1((u_int32)VAR_7);
 VAR_13->keylookups = FUNC_1((u_int32)VAR_4);
 VAR_13->keynotfound = FUNC_1((u_int32)VAR_5);
 VAR_13->encryptions = FUNC_1((u_int32)VAR_2);
 VAR_13->decryptions = FUNC_1((u_int32)VAR_1);
 VAR_13->keyuncached = FUNC_1((u_int32)VAR_6);
 VAR_13->expired = FUNC_1((u_int32)VAR_3);
 VAR_13->timereset = FUNC_1((u_int32)(VAR_9 - VAR_0));

 (void) FUNC_2();
 FUNC_0();
}
