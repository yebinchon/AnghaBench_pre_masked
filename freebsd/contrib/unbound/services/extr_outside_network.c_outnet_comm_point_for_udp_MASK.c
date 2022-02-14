
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct outside_network {int udp_buff; int base; } ;
struct comm_point {int dummy; } ;
typedef int socklen_t ;
typedef int comm_point_callback_type ;


 int FUNC_0 (int) ;
 struct comm_point* FUNC_1 (int ,int,int ,int *,void*) ;
 int FUNC_2 (struct outside_network*,struct sockaddr_storage*,int ) ;
 int FUNC_3 (char*) ;

struct comm_point*
FUNC_4(struct outside_network* VAR_0,
 comm_point_callback_type* VAR_1, void* VAR_2,
 struct sockaddr_storage* VAR_3, socklen_t VAR_4)
{
 struct comm_point* VAR_5;
 int VAR_6 = FUNC_2(VAR_0, VAR_3, VAR_4);
 if(VAR_6 == -1) {
  return ((void*)0);
 }
 VAR_5 = FUNC_1(VAR_0->base, VAR_6, VAR_0->udp_buff,
  VAR_1, VAR_2);
 if(!VAR_5) {
  FUNC_3("malloc failure");
  FUNC_0(VAR_6);
  return ((void*)0);
 }
 return VAR_5;
}
