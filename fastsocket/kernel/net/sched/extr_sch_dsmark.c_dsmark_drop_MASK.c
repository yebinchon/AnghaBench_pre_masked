
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dsmark_qdisc_data {TYPE_3__* q; } ;
struct TYPE_5__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_4__ {unsigned int (* drop ) (TYPE_3__*) ;} ;


 int FUNC_0 (char*,struct Qdisc*,struct dsmark_qdisc_data*) ;
 struct dsmark_qdisc_data* FUNC_1 (struct Qdisc*) ;
 unsigned int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static unsigned int FUNC_3(struct Qdisc *VAR_0)
{
 struct dsmark_qdisc_data *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 FUNC_0("dsmark_reset(sch %p,[qdisc %p])\n", VAR_0, VAR_1);

 if (VAR_1->q->ops->drop == ((void*)0))
  return 0;

 VAR_2 = VAR_1->q->ops->drop(VAR_1->q);
 if (VAR_2)
  VAR_0->q.qlen--;

 return VAR_2;
}
