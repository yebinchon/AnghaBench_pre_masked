
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_hfsc_qopt {int defcls; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int classid; } ;
struct TYPE_3__ {int refcnt; TYPE_2__ cl_common; void* cf_tree; void* vt_tree; int children; int * qdisc; struct hfsc_sched* sched; } ;
struct hfsc_sched {int watchdog; int clhash; TYPE_1__ root; int droplist; void* eligible; int defcls; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* VAR_1 ;
 struct tc_hfsc_qopt* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct Qdisc*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int * FUNC_6 (int ,int ,int *,int ) ;
 int FUNC_7 (struct Qdisc*) ;
 struct hfsc_sched* FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (int *,struct Qdisc*) ;

__attribute__((used)) static int
FUNC_10(struct Qdisc *VAR_4, struct nlattr *VAR_5)
{
 struct hfsc_sched *VAR_6 = FUNC_8(VAR_4);
 struct tc_hfsc_qopt *VAR_7;
 int VAR_8;

 if (VAR_5 == ((void*)0) || FUNC_2(VAR_5) < sizeof(*VAR_7))
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_5);

 VAR_6->defcls = VAR_7->defcls;
 VAR_8 = FUNC_4(&VAR_6->clhash);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_6->eligible = VAR_1;
 FUNC_0(&VAR_6->droplist);

 VAR_6->root.cl_common.classid = VAR_4->handle;
 VAR_6->root.refcnt = 1;
 VAR_6->root.sched = VAR_6;
 VAR_6->root.qdisc = FUNC_6(FUNC_7(VAR_4), VAR_4->dev_queue,
       &VAR_3,
       VAR_4->handle);
 if (VAR_6->root.qdisc == ((void*)0))
  VAR_6->root.qdisc = &VAR_2;
 FUNC_0(&VAR_6->root.children);
 VAR_6->root.vt_tree = VAR_1;
 VAR_6->root.cf_tree = VAR_1;

 FUNC_5(&VAR_6->clhash, &VAR_6->root.cl_common);
 FUNC_3(VAR_4, &VAR_6->clhash);

 FUNC_9(&VAR_6->watchdog, VAR_4);

 return 0;
}
