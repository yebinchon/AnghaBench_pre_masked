
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_ns {struct delegpt_ns* name; struct delegpt_ns* tls_auth_name; struct delegpt_ns* next_target; struct delegpt_ns* target_list; struct delegpt_ns* next; struct delegpt_ns* nslist; int dp_type_mlc; } ;
struct delegpt_addr {struct delegpt_addr* name; struct delegpt_addr* tls_auth_name; struct delegpt_addr* next_target; struct delegpt_addr* target_list; struct delegpt_addr* next; struct delegpt_addr* nslist; int dp_type_mlc; } ;
struct delegpt {struct delegpt* name; struct delegpt* tls_auth_name; struct delegpt* next_target; struct delegpt* target_list; struct delegpt* next; struct delegpt* nslist; int dp_type_mlc; } ;


 int FUNC_0 (struct delegpt_ns*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct delegpt* VAR_0)
{
 struct delegpt_ns* VAR_1, *VAR_2;
 struct delegpt_addr* VAR_3, *VAR_4;
 if(!VAR_0) return;
 FUNC_1(VAR_0->dp_type_mlc);
 VAR_1 = VAR_0->nslist;
 while(VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 VAR_3 = VAR_0->target_list;
 while(VAR_3) {
  VAR_4 = VAR_3->next_target;
  FUNC_0(VAR_3->tls_auth_name);
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0);
}
