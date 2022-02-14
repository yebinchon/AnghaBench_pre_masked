
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* q; } ;
struct TYPE_8__ {TYPE_3__ leaf; } ;
struct htb_class {TYPE_4__ un; } ;
struct Qdisc {int dummy; } ;
struct TYPE_5__ {scalar_t__ qlen; } ;
struct TYPE_6__ {TYPE_1__ q; } ;


 int FUNC_0 (int ,struct htb_class*) ;
 int FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct htb_class *VAR_2 = (struct htb_class *)VAR_1;

 if (VAR_2->un.leaf.q->q.qlen == 0)
  FUNC_0(FUNC_1(VAR_0), VAR_2);
}
