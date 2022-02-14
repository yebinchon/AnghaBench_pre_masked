
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct sock_list {int dummy; } ;
struct module_env {int dummy; } ;
struct iter_env {int dummy; } ;
struct delegpt_addr {int sel_rtt; int addrlen; int addr; struct delegpt_addr* next_result; } ;
struct delegpt {struct delegpt_addr* result_list; scalar_t__ bogus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iter_env*,struct module_env*,int *,size_t,int ,int ,struct delegpt_addr*) ;
 scalar_t__ FUNC_1 (struct sock_list*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct iter_env* VAR_1, struct module_env* VAR_2,
 uint8_t* VAR_3, size_t VAR_4, uint16_t VAR_5, time_t VAR_6,
 struct delegpt* VAR_7, int* VAR_8, struct sock_list* VAR_9,
 size_t* VAR_10)
{
 int VAR_11 = 0;
 struct delegpt_addr* VAR_12;
 *VAR_10 = 0;

 if(VAR_7->bogus)
  return 0;
 for(VAR_12=VAR_7->result_list; VAR_12; VAR_12 = VAR_12->next_result) {
  VAR_12->sel_rtt = FUNC_0(VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_12);
  if(VAR_12->sel_rtt != -1) {
   if(FUNC_1(VAR_9, &VAR_12->addr, VAR_12->addrlen))
    VAR_12->sel_rtt += VAR_0;

   if(!VAR_11) {
    *VAR_8 = VAR_12->sel_rtt;
    VAR_11 = 1;
   } else if(VAR_12->sel_rtt < *VAR_8) {
    *VAR_8 = VAR_12->sel_rtt;
   }
   (*VAR_10)++;
  }
 }
 return VAR_11;
}
