
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct sock_list {int dummy; } ;
struct module_env {TYPE_1__* cfg; int rnd; } ;
struct iter_env {int dummy; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct delegpt_addr {int sel_rtt; int attempts; struct delegpt_addr* next_result; TYPE_2__ addr; } ;
struct delegpt {struct delegpt_addr* result_list; } ;
struct TYPE_3__ {scalar_t__ fast_server_permil; size_t fast_server_num; scalar_t__ prefer_ip6; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct delegpt*) ;
 int FUNC_1 (struct iter_env*,struct module_env*,int *,size_t,int ,scalar_t__,struct delegpt*,int*,struct sock_list*,size_t*) ;
 int FUNC_2 (struct delegpt_addr*,size_t,size_t) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct iter_env* VAR_4, struct module_env* VAR_5,
 uint8_t* VAR_6, size_t VAR_7, uint16_t VAR_8, time_t VAR_9,
 struct delegpt* VAR_10, int* VAR_11, int VAR_12,
 struct sock_list* VAR_13, time_t VAR_14)
{
 int VAR_15 = 0, VAR_16 = 0, VAR_17, VAR_18 = VAR_1, VAR_19;
 size_t VAR_20;
 struct delegpt_addr* VAR_21, *VAR_22, *VAR_23=((void*)0);


 VAR_15 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
  &VAR_16, VAR_13, &VAR_20);
 if(VAR_15 == 0)
  return 0;
 if(VAR_16 >= VAR_2 &&
  (FUNC_0(VAR_10) > 0 || VAR_12 > 0)) {
  FUNC_4(VAR_3, "Bad choices, trying to get more choice");
  return 0;

 }

 if(VAR_5->cfg->fast_server_permil != 0 && VAR_14 == 0 &&
  VAR_20 > VAR_5->cfg->fast_server_num &&
  FUNC_3(VAR_5->rnd, 1000) < VAR_5->cfg->fast_server_permil) {



  VAR_19 = FUNC_2(VAR_10->result_list, VAR_20,
   VAR_5->cfg->fast_server_num);
  if(VAR_19 > 0) {
   VAR_18 = VAR_19 - VAR_16;
   if(VAR_18 > VAR_1)
    VAR_18 = VAR_1;
  }
 }

 VAR_15 = 0;
 VAR_21 = VAR_10->result_list;
 while(VAR_21) {

  if(VAR_21->sel_rtt == -1) {
   VAR_23 = VAR_21;
   VAR_21 = VAR_21->next_result;
   continue;
  }

  VAR_17 = 0;
  if(VAR_21->sel_rtt >= VAR_16 && VAR_21->sel_rtt - VAR_16 <= VAR_18) {
   VAR_15++;
   VAR_17 = 1;
  } else if(VAR_21->sel_rtt<VAR_16 && VAR_16-VAR_21->sel_rtt<=VAR_18) {
   VAR_15++;
   VAR_17 = 1;
  }

  if(VAR_17 && VAR_23) {
   VAR_22 = VAR_21->next_result;
   VAR_23->next_result = VAR_22;
   VAR_21->next_result = VAR_10->result_list;
   VAR_10->result_list = VAR_21;
   VAR_21 = VAR_22;
  } else {
   VAR_23 = VAR_21;
   VAR_21 = VAR_21->next_result;
  }
 }
 *VAR_11 = VAR_16;

 if (VAR_5->cfg->prefer_ip6) {
  int VAR_24 = 0;
  int VAR_25 = 0;
  int VAR_26;
  int VAR_27 = -1;


  int VAR_28 = 0;
  int VAR_29 = 0;
  VAR_23 = ((void*)0);
  VAR_21 = VAR_10->result_list;
  for(VAR_26 = 0; VAR_26 < VAR_15; VAR_26++) {
   VAR_17 = 0;
   if(VAR_21->addr.ss_family != VAR_0 && VAR_27 == -1) {



    VAR_27 = VAR_21->attempts;
    VAR_28++;
    VAR_29 = VAR_21->sel_rtt;
   } else if(VAR_21->addr.ss_family != VAR_0 && VAR_27 == VAR_21->attempts) {
    VAR_28++;
    if(VAR_29 == 0 || VAR_21->sel_rtt < VAR_29) {
     VAR_29 = VAR_21->sel_rtt;
    }
   }
   if(VAR_21->addr.ss_family == VAR_0) {
    if(VAR_27 == -1) {
     VAR_27 = VAR_21->attempts;
    } else if(VAR_21->attempts > VAR_27) {
     break;
    }
    VAR_24++;
    VAR_17 = 1;
    if(VAR_25 == 0 || VAR_21->sel_rtt < VAR_25) {
     VAR_25 = VAR_21->sel_rtt;
    }
   }

   if(VAR_17 && VAR_23) {
    VAR_22 = VAR_21->next_result;
    VAR_23->next_result = VAR_22;
    VAR_21->next_result = VAR_10->result_list;
    VAR_10->result_list = VAR_21;
    VAR_21 = VAR_22;
   } else {
    VAR_23 = VAR_21;
    VAR_21 = VAR_21->next_result;
   }
  }
  if(VAR_24 > 0) {
   VAR_15 = VAR_24;
   *VAR_11 = VAR_25;
  } else if(VAR_28 > 0) {
   VAR_15 = VAR_28;
   *VAR_11 = VAR_29;
  }
 }
 return VAR_15;
}
