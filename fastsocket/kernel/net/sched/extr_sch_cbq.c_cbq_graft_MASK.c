
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int classid; } ;
struct cbq_class {scalar_t__ police; struct Qdisc* q; TYPE_1__ common; } ;
struct TYPE_4__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; int reshape_fail; int dev_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Qdisc* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,int ) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_4, unsigned long VAR_5, struct Qdisc *VAR_6,
       struct Qdisc **VAR_7)
{
 struct cbq_class *VAR_8 = (struct cbq_class*)VAR_5;

 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_0(FUNC_1(VAR_4), VAR_4->dev_queue,
     &VAR_3, VAR_8->common.classid);
  if (VAR_6 == ((void*)0))
   return -VAR_0;
 } else {




 }
 FUNC_4(VAR_4);
 *VAR_7 = VAR_8->q;
 VAR_8->q = VAR_6;
 FUNC_3(*VAR_7, (*VAR_7)->q.qlen);
 FUNC_2(*VAR_7);
 FUNC_5(VAR_4);

 return 0;
}
