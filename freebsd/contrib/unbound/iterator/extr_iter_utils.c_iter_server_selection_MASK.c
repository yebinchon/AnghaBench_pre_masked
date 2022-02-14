
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct sock_list {int dummy; } ;
struct module_env {int rnd; int * now; } ;
struct iter_env {int dummy; } ;
struct delegpt_addr {scalar_t__ attempts; struct delegpt_addr* next_result; } ;
struct delegpt {struct delegpt_addr* result_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iter_env*,struct module_env*,int *,size_t,int ,int ,struct delegpt*,int*,int,struct sock_list*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,...) ;

struct delegpt_addr*
FUNC_4(struct iter_env* VAR_4,
 struct module_env* VAR_5, struct delegpt* VAR_6,
 uint8_t* VAR_7, size_t VAR_8, uint16_t VAR_9, int* VAR_10,
 int* VAR_11, int VAR_12, struct sock_list* VAR_13,
 time_t VAR_14)
{
 int VAR_15;
 int VAR_16;
 struct delegpt_addr* VAR_17, *VAR_18;
 int VAR_19 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8, VAR_9,
  *VAR_5->now, VAR_6, &VAR_16, VAR_12, VAR_13, VAR_14);

 if(VAR_19 == 0)
  return ((void*)0);
 FUNC_3(VAR_3, "selrtt %d", VAR_16);
 if(VAR_16 > VAR_0) {
  if(VAR_16-VAR_0 > VAR_2*3) {
   FUNC_3(VAR_3, "chase to "
    "blacklisted recursion lame server");
   *VAR_11 = 1;
  }
  if(VAR_16-VAR_0 > VAR_2*2) {
   FUNC_3(VAR_3, "chase to "
    "blacklisted dnssec lame server");
   *VAR_10 = 1;
  }
 } else {
  if(VAR_16 > VAR_2*3) {
   FUNC_3(VAR_3, "chase to recursion lame server");
   *VAR_11 = 1;
  }
  if(VAR_16 > VAR_2*2) {
   FUNC_3(VAR_3, "chase to dnssec lame server");
   *VAR_10 = 1;
  }
  if(VAR_16 == VAR_2) {
   FUNC_3(VAR_3, "chase to blacklisted lame server");
   return ((void*)0);
  }
 }

 if(VAR_19 == 1) {
  VAR_17 = VAR_6->result_list;
  if(++VAR_17->attempts < VAR_1)
   return VAR_17;
  VAR_6->result_list = VAR_17->next_result;
  return VAR_17;
 }


 FUNC_1(VAR_19 > 1);


 VAR_15 = FUNC_2(VAR_5->rnd, VAR_19);
 VAR_17 = VAR_6->result_list;
 VAR_18 = ((void*)0);
 while(VAR_15 > 0 && VAR_17) {
  VAR_18 = VAR_17;
  VAR_17 = VAR_17->next_result;
  VAR_15--;
 }
 if(!VAR_17)
  return ((void*)0);
 if(++VAR_17->attempts < VAR_1)
  return VAR_17;

 if(VAR_18)
  VAR_18->next_result = VAR_17->next_result;
 else VAR_6->result_list = VAR_17->next_result;
 return VAR_17;
}
