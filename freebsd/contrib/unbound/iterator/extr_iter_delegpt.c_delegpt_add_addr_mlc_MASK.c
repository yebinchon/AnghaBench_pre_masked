
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct delegpt_addr {int * tls_auth_name; scalar_t__ dnsseclame; void* lame; void* bogus; scalar_t__ attempts; int addrlen; int addr; struct delegpt_addr* next_usable; scalar_t__ next_result; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* usable_list; struct delegpt_addr* target_list; int dp_type_mlc; } ;
typedef int socklen_t ;


 struct delegpt_addr* FUNC_0 (struct delegpt*,struct sockaddr_storage*,int ) ;
 int FUNC_1 (struct delegpt_addr*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,struct sockaddr_storage*,int ) ;
 int * FUNC_5 (char*) ;

int FUNC_6(struct delegpt* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2, uint8_t VAR_3, uint8_t VAR_4, char* VAR_5)
{
 struct delegpt_addr* VAR_6;
 FUNC_2(VAR_0->dp_type_mlc);

 if((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2))) {
  if(VAR_3)
   VAR_6->bogus = VAR_3;
  if(!VAR_4)
   VAR_6->lame = 0;
  return 1;
 }

 VAR_6 = (struct delegpt_addr*)FUNC_3(sizeof(struct delegpt_addr));
 if(!VAR_6)
  return 0;
 VAR_6->next_target = VAR_0->target_list;
 VAR_0->target_list = VAR_6;
 VAR_6->next_result = 0;
 VAR_6->next_usable = VAR_0->usable_list;
 VAR_0->usable_list = VAR_6;
 FUNC_4(&VAR_6->addr, VAR_1, VAR_2);
 VAR_6->addrlen = VAR_2;
 VAR_6->attempts = 0;
 VAR_6->bogus = VAR_3;
 VAR_6->lame = VAR_4;
 VAR_6->dnsseclame = 0;
 if(VAR_5) {
  VAR_6->tls_auth_name = FUNC_5(VAR_5);
  if(!VAR_6->tls_auth_name) {
   FUNC_1(VAR_6);
   return 0;
  }
 } else {
  VAR_6->tls_auth_name = ((void*)0);
 }
 return 1;
}
