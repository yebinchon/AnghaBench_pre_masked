
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int classid; } ;
struct hfsc_class {scalar_t__ level; struct Qdisc* qdisc; TYPE_1__ cl_common; } ;
struct Qdisc {int dev_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*,struct hfsc_class*) ;
 struct Qdisc VAR_1 ;
 int VAR_2 ;
 struct Qdisc* FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_5(struct Qdisc *VAR_3, unsigned long VAR_4, struct Qdisc *VAR_5,
   struct Qdisc **VAR_6)
{
 struct hfsc_class *VAR_7 = (struct hfsc_class *)VAR_4;

 if (VAR_7->level > 0)
  return -VAR_0;
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_1(FUNC_2(VAR_3), VAR_3->dev_queue,
     &VAR_2,
     VAR_7->cl_common.classid);
  if (VAR_5 == ((void*)0))
   VAR_5 = &VAR_1;
 }

 FUNC_3(VAR_3);
 FUNC_0(VAR_3, VAR_7);
 *VAR_6 = VAR_7->qdisc;
 VAR_7->qdisc = VAR_5;
 FUNC_4(VAR_3);
 return 0;
}
