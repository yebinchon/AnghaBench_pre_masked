
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int,int ,int ,void*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_9, int VAR_10)
{



 (void)VAR_9;

 if(VAR_10 == VAR_1) {
  FUNC_0("no IPV6_RECVPKTINFO and no IPV6_PKTINFO option, please "
   "disable interface-automatic or do-ip6 in config");
  return 0;


 } else if(VAR_10 == VAR_0) {
  FUNC_0("no IP_SENDSRCADDR or IP_PKTINFO option, please disable "
   "interface-automatic or do-ip4 in config");
  return 0;


 }
 return 1;
}
