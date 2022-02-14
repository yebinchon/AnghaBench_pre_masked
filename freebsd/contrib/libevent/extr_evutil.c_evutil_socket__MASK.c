
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,int) ;

evutil_socket_t
FUNC_4(int VAR_5, int VAR_6, int VAR_7)
{
 evutil_socket_t VAR_8;
 VAR_8 = FUNC_3(VAR_5, VAR_6 & (~(VAR_1|VAR_0)), VAR_7);
 if (VAR_8 < 0)
  return -1;
 if (VAR_6 & VAR_1) {
  if (FUNC_2(VAR_8) < 0) {
   FUNC_0(VAR_8);
   return -1;
  }
 }
 if (VAR_6 & VAR_0) {
  if (FUNC_1(VAR_8) < 0) {
   FUNC_0(VAR_8);
   return -1;
  }
 }
 return VAR_8;
}
