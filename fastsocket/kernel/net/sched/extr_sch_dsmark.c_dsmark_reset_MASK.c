
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsmark_qdisc_data {int q; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 (char*,struct Qdisc*,struct dsmark_qdisc_data*) ;
 struct dsmark_qdisc_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0)
{
 struct dsmark_qdisc_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("dsmark_reset(sch %p,[qdisc %p])\n", VAR_0, VAR_1);
 FUNC_2(VAR_1->q);
 VAR_0->q.qlen = 0;
}
