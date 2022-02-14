
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int classid; } ;
struct qfq_class {struct Qdisc* qdisc; TYPE_1__ common; } ;
struct Qdisc {int dev_queue; } ;


 struct Qdisc VAR_0 ;
 int VAR_1 ;
 struct Qdisc* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct qfq_class*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_2, unsigned long VAR_3,
      struct Qdisc *VAR_4, struct Qdisc **VAR_5)
{
 struct qfq_class *VAR_6 = (struct qfq_class *)VAR_3;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(FUNC_1(VAR_2), VAR_2->dev_queue,
     &VAR_1, VAR_6->common.classid);
  if (VAR_4 == ((void*)0))
   VAR_4 = &VAR_0;
 }

 FUNC_3(VAR_2);
 FUNC_2(VAR_6);
 *VAR_5 = VAR_6->qdisc;
 VAR_6->qdisc = VAR_4;
 FUNC_4(VAR_2);
 return 0;
}
