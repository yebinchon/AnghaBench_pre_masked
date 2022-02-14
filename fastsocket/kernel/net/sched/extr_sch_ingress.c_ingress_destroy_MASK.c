
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingress_qdisc_data {int filter_list; } ;
struct Qdisc {int dummy; } ;


 struct ingress_qdisc_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0)
{
 struct ingress_qdisc_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->filter_list);
}
