
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsmark_qdisc_data {int mask; int q; int filter_list; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct Qdisc*,struct dsmark_qdisc_data*) ;
 int FUNC_2 (int ) ;
 struct dsmark_qdisc_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0)
{
 struct dsmark_qdisc_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_1("dsmark_destroy(sch %p,[qdisc %p])\n", VAR_0, VAR_1);

 FUNC_4(&VAR_1->filter_list);
 FUNC_2(VAR_1->q);
 FUNC_0(VAR_1->mask);
}
