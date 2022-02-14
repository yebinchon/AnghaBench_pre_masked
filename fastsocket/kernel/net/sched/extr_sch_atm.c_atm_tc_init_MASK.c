
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {int ref; int * next; int classid; int * sock; int * vcc; int * filter_list; int * q; } ;
struct atm_qdisc_data {int task; TYPE_1__ link; TYPE_1__* flows; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct Qdisc*) ;
 struct atm_qdisc_data* FUNC_3 (struct Qdisc*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_3, struct nlattr *VAR_4)
{
 struct atm_qdisc_data *VAR_5 = FUNC_3(VAR_3);

 FUNC_0("atm_tc_init(sch %p,[qdisc %p],opt %p)\n", VAR_3, VAR_5, VAR_4);
 VAR_5->flows = &VAR_5->link;
 VAR_5->link.q = FUNC_1(FUNC_2(VAR_3), VAR_3->dev_queue,
          &VAR_1, VAR_3->handle);
 if (!VAR_5->link.q)
  VAR_5->link.q = &VAR_0;
 FUNC_0("atm_tc_init: link (%p) qdisc %p\n", &VAR_5->link, VAR_5->link.q);
 VAR_5->link.filter_list = ((void*)0);
 VAR_5->link.vcc = ((void*)0);
 VAR_5->link.sock = ((void*)0);
 VAR_5->link.classid = VAR_3->handle;
 VAR_5->link.ref = 1;
 VAR_5->link.next = ((void*)0);
 FUNC_4(&VAR_5->task, VAR_2, (unsigned long)VAR_3);
 return 0;
}
