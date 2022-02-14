
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct outside_network {int udp_buff; int base; int tcp_mss; } ;
struct TYPE_2__ {int addr; int addrlen; } ;
struct comm_point {int buffer; TYPE_1__ repinfo; } ;
typedef int socklen_t ;
typedef int comm_point_callback_type ;


 int FUNC_0 (int) ;
 struct comm_point* FUNC_1 (int ,int,int *,void*,int ) ;
 int FUNC_2 (struct comm_point*) ;
 int FUNC_3 (struct comm_point*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,struct sockaddr_storage*,int ) ;
 int FUNC_7 (struct sockaddr_storage*,int ,int ) ;
 int FUNC_8 (int,struct sockaddr_storage*,int ) ;
 int FUNC_9 (struct comm_point*,struct outside_network*,int,char*) ;
 int FUNC_10 (int ,char*,char*) ;

struct comm_point*
FUNC_11(struct outside_network* VAR_0,
 comm_point_callback_type* VAR_1, void* VAR_2,
 struct sockaddr_storage* VAR_3, socklen_t VAR_4, int VAR_5,
 int VAR_6, char* VAR_7, char* VAR_8)
{

 struct comm_point* VAR_9;
 int VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_0->tcp_mss);
 if(VAR_10 == -1) {
  return 0;
 }
 FUNC_4(VAR_10);
 if(!FUNC_8(VAR_10, VAR_3, VAR_4)) {

  return 0;
 }
 VAR_9 = FUNC_1(VAR_0->base, 65552, VAR_1, VAR_2,
  VAR_0->udp_buff);
 if(!VAR_9) {
  FUNC_5("malloc failure");
  FUNC_0(VAR_10);
  return 0;
 }
 VAR_9->repinfo.addrlen = VAR_4;
 FUNC_6(&VAR_9->repinfo.addr, VAR_3, VAR_4);


 if(VAR_6) {
  if(!FUNC_9(VAR_9, VAR_0, VAR_10, VAR_7)) {
   FUNC_5("cannot setup https");
   FUNC_2(VAR_9);
   return ((void*)0);
  }
 }


 FUNC_3(VAR_9, VAR_10, VAR_5);


 if(!FUNC_10(VAR_9->buffer, VAR_7, VAR_8)) {
  FUNC_5("error setting up http request");
  FUNC_2(VAR_9);
  return ((void*)0);
 }
 return VAR_9;
}
