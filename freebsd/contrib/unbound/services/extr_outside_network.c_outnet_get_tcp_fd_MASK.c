
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcp_mss ;
struct sockaddr_storage {int dummy; } ;
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
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct sockaddr_storage*,int ) ;
 int VAR_8 ;
 int FUNC_2 (char*,int ,struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ,void*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct sockaddr_storage* VAR_9, socklen_t VAR_10, int VAR_11)
{
 int VAR_12;
  VAR_12 = FUNC_4(VAR_1, VAR_3, VAR_0);
 if(VAR_12 == -1) {

  FUNC_2("outgoing tcp: socket", FUNC_5(VAR_8),
   VAR_9, VAR_10);




  return -1;
 }
 if(VAR_11 > 0) {







  FUNC_6(VAR_7, "outgoing tcp:"
   " setsockopt(TCP_MAXSEG) unsupported");

 }

 return VAR_12;
}
