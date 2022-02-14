
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
struct req_pkt {int dummy; } ;
struct info_loop {void* watchdog_timer; void* compliance; int drift_comp; int last_offset; } ;
typedef int sockaddr_u ;
typedef int l_fp ;
typedef int endpt ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *,struct req_pkt*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(
 sockaddr_u *VAR_5,
 endpt *VAR_6,
 struct req_pkt *VAR_7
 )
{
 struct info_loop *VAR_8;
 l_fp VAR_9;

 VAR_8 = (struct info_loop *)FUNC_5(VAR_5, VAR_6, VAR_7,
     sizeof(struct info_loop));

 FUNC_0(VAR_2, &VAR_9);
 FUNC_1(&VAR_9, &VAR_8->last_offset);
 FUNC_0(VAR_1 * 1e6, &VAR_9);
 FUNC_1(&VAR_9, &VAR_8->drift_comp);
 VAR_8->compliance = FUNC_3((u_int32)(VAR_4));
 VAR_8->watchdog_timer = FUNC_3((u_int32)(VAR_0 - VAR_3));

 (void) FUNC_4();
 FUNC_2();
}
