
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vport {int upcall_pid; int port_no; struct datapath* dp; } ;
struct sw_flow_key {int dummy; } ;
struct sw_flow {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dp_upcall_info {int pid; int * userdata; struct sw_flow_key* key; int cmd; } ;
struct dp_stats_percpu {int sync; int n_hit; int n_missed; } ;
struct datapath {int table; int stats_percpu; } ;
struct TYPE_2__ {struct sw_flow* flow; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct datapath*,struct sk_buff*,struct dp_upcall_info*) ;
 int FUNC_4 (struct datapath*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,struct sw_flow_key*,int*) ;
 struct sw_flow* FUNC_6 (int ,struct sw_flow_key*,int) ;
 int FUNC_7 (struct sw_flow*,struct sk_buff*) ;
 int FUNC_8 (int ) ;
 struct dp_stats_percpu* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

void FUNC_13(struct vport *VAR_1, struct sk_buff *VAR_2)
{
 struct datapath *VAR_3 = VAR_1->dp;
 struct sw_flow *VAR_4;
 struct dp_stats_percpu *VAR_5;
 struct sw_flow_key VAR_6;
 u64 *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = FUNC_9(VAR_3->stats_percpu);


 VAR_8 = FUNC_5(VAR_2, VAR_1->port_no, &VAR_6, &VAR_9);
 if (FUNC_12(VAR_8)) {
  FUNC_2(VAR_2);
  return;
 }


 VAR_4 = FUNC_6(FUNC_8(VAR_3->table), &VAR_6, VAR_9);
 if (FUNC_12(!VAR_4)) {
  struct dp_upcall_info VAR_10;

  VAR_10.cmd = VAR_0;
  VAR_10.key = &VAR_6;
  VAR_10.userdata = ((void*)0);
  VAR_10.pid = VAR_1->upcall_pid;
  FUNC_3(VAR_3, VAR_2, &VAR_10);
  FUNC_1(VAR_2);
  VAR_7 = &VAR_5->n_missed;
  goto out;
 }

 FUNC_0(VAR_2)->flow = VAR_4;

 VAR_7 = &VAR_5->n_hit;
 FUNC_7(FUNC_0(VAR_2)->flow, VAR_2);
 FUNC_4(VAR_3, VAR_2);

out:

 FUNC_10(&VAR_5->sync);
 (*VAR_7)++;
 FUNC_11(&VAR_5->sync);
}
