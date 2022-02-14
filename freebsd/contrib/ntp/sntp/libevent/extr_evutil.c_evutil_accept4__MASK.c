
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

evutil_socket_t
FUNC_5(evutil_socket_t VAR_5, struct sockaddr *VAR_6,
    ev_socklen_t *VAR_7, int VAR_8)
{
 evutil_socket_t VAR_9;
 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 & VAR_2) {
  if (FUNC_3(VAR_9) < 0) {
   FUNC_2(VAR_9);
   return -1;
  }
 }
 if (VAR_8 & VAR_3) {
  if (FUNC_4(VAR_9) < 0) {
   FUNC_2(VAR_9);
   return -1;
  }
 }
 return VAR_9;
}
