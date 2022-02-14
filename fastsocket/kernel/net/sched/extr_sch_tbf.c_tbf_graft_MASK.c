
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbf_sched_data {struct Qdisc* qdisc; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 struct Qdisc VAR_0 ;
 struct tbf_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*,int ) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_1, unsigned long VAR_2, struct Qdisc *VAR_3,
       struct Qdisc **VAR_4)
{
 struct tbf_sched_data *VAR_5 = FUNC_0(VAR_1);

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_0;

 FUNC_3(VAR_1);
 *VAR_4 = VAR_5->qdisc;
 VAR_5->qdisc = VAR_3;
 FUNC_2(*VAR_4, (*VAR_4)->q.qlen);
 FUNC_1(*VAR_4);
 FUNC_4(VAR_1);

 return 0;
}
