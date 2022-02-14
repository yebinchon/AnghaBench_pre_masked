
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct delegpt_addr {struct delegpt_addr* next_target; int addr; int addrlen; } ;
struct delegpt {struct delegpt_addr* target_list; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ,int *,int ) ;

struct delegpt_addr*
FUNC_1(struct delegpt* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2)
{
 struct delegpt_addr* VAR_3 = VAR_0->target_list;
 while(VAR_3) {
  if(FUNC_0(VAR_1, VAR_2, &VAR_3->addr, VAR_3->addrlen)==0
   && ((struct sockaddr_in*)VAR_1)->sin_port ==
      ((struct sockaddr_in*)&VAR_3->addr)->sin_port) {
   return VAR_3;
  }
  VAR_3 = VAR_3->next_target;
 }
 return ((void*)0);
}
