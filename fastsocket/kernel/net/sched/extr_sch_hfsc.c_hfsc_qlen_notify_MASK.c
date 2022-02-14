
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hfsc_class {TYPE_2__* qdisc; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct TYPE_4__ {TYPE_1__ q; } ;


 int FUNC_0 (struct hfsc_class*) ;
 int FUNC_1 (struct hfsc_class*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct hfsc_class *VAR_2 = (struct hfsc_class *)VAR_1;

 if (VAR_2->qdisc->q.qlen == 0) {
  FUNC_1(VAR_2, 0, 0);
  FUNC_0(VAR_2);
 }
}
