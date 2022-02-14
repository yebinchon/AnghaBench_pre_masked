
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct regional {int dummy; } ;
struct delegpt_addr {int * tls_auth_name; scalar_t__ dnsseclame; void* lame; void* bogus; scalar_t__ attempts; int addrlen; int addr; struct delegpt_addr* next_usable; scalar_t__ next_result; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* usable_list; struct delegpt_addr* target_list; int dp_type_mlc; } ;
typedef int socklen_t ;


 struct delegpt_addr* FUNC_0 (struct delegpt*,struct sockaddr_storage*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_3 (struct regional*,int) ;
 int * FUNC_4 (struct regional*,char*) ;

int
FUNC_5(struct delegpt* VAR_0, struct regional* VAR_1,
 struct sockaddr_storage* VAR_2, socklen_t VAR_3, uint8_t VAR_4,
 uint8_t VAR_5, char* VAR_6)
{
 struct delegpt_addr* VAR_7;
 FUNC_1(!VAR_0->dp_type_mlc);

 if((VAR_7 = FUNC_0(VAR_0, VAR_2, VAR_3))) {
  if(VAR_4)
   VAR_7->bogus = VAR_4;
  if(!VAR_5)
   VAR_7->lame = 0;
  return 1;
 }

 VAR_7 = (struct delegpt_addr*)FUNC_3(VAR_1,
  sizeof(struct delegpt_addr));
 if(!VAR_7)
  return 0;
 VAR_7->next_target = VAR_0->target_list;
 VAR_0->target_list = VAR_7;
 VAR_7->next_result = 0;
 VAR_7->next_usable = VAR_0->usable_list;
 VAR_0->usable_list = VAR_7;
 FUNC_2(&VAR_7->addr, VAR_2, VAR_3);
 VAR_7->addrlen = VAR_3;
 VAR_7->attempts = 0;
 VAR_7->bogus = VAR_4;
 VAR_7->lame = VAR_5;
 VAR_7->dnsseclame = 0;
 if(VAR_6) {
  VAR_7->tls_auth_name = FUNC_4(VAR_1, VAR_6);
  if(!VAR_7->tls_auth_name)
   return 0;
 } else {
  VAR_7->tls_auth_name = ((void*)0);
 }
 return 1;
}
