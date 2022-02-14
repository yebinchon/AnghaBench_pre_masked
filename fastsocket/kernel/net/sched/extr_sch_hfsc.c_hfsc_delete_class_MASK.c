
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {scalar_t__ level; scalar_t__ filter_cnt; scalar_t__ refcnt; int cl_common; int cl_parent; int siblings; } ;
struct hfsc_sched {int clhash; struct hfsc_class root; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct Qdisc*,struct hfsc_class*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 struct hfsc_sched* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_8(struct Qdisc *VAR_1, unsigned long VAR_2)
{
 struct hfsc_sched *VAR_3 = FUNC_5(VAR_1);
 struct hfsc_class *VAR_4 = (struct hfsc_class *)VAR_2;

 if (VAR_4->level > 0 || VAR_4->filter_cnt > 0 || VAR_4 == &VAR_3->root)
  return -VAR_0;

 FUNC_6(VAR_1);

 FUNC_3(&VAR_4->siblings);
 FUNC_1(VAR_4->cl_parent);

 FUNC_2(VAR_1, VAR_4);
 FUNC_4(&VAR_3->clhash, &VAR_4->cl_common);

 FUNC_0(--VAR_4->refcnt == 0);





 FUNC_7(VAR_1);
 return 0;
}
