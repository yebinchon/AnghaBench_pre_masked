
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_l2cap {int l2cap_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef TYPE_1__* sdp_session_p ;
typedef int sa ;
typedef int int32_t ;
typedef int bdaddr_t ;
struct TYPE_2__ {int flags; scalar_t__ error; int s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;

int32_t
FUNC_2(void *VAR_3, bdaddr_t *VAR_4)
{
 sdp_session_p VAR_5 = (sdp_session_p) VAR_3;
 struct sockaddr_l2cap VAR_6;
 socklen_t VAR_7;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_5->flags & VAR_1) {
  VAR_5->error = VAR_0;
  goto fail;
 }

 VAR_7 = sizeof(VAR_6);
 if (FUNC_1(VAR_5->s, (struct sockaddr *)&VAR_6, &VAR_7) == 0) {
  FUNC_0(VAR_4, &VAR_6.l2cap_bdaddr);
  VAR_5->error = 0;
 } else
  VAR_5->error = VAR_2;
fail:
 return ((VAR_5->error == 0) ? 0 : -1);
}
