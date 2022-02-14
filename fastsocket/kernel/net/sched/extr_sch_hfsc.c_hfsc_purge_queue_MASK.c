
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hfsc_class {TYPE_2__* qdisc; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {unsigned int qlen; } ;
struct TYPE_5__ {TYPE_1__ q; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct Qdisc *VAR_0, struct hfsc_class *VAR_1)
{
 unsigned int VAR_2 = VAR_1->qdisc->q.qlen;

 FUNC_0(VAR_1->qdisc);
 FUNC_1(VAR_1->qdisc, VAR_2);
}
