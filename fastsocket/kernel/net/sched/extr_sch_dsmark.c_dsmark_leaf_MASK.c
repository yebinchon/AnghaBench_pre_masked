
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsmark_qdisc_data {struct Qdisc* q; } ;
struct Qdisc {int dummy; } ;


 struct dsmark_qdisc_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct Qdisc *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct dsmark_qdisc_data *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->q;
}
