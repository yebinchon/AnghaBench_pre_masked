
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int overactions; } ;
struct cbq_class {TYPE_4__ xstats; TYPE_3__* qdisc; TYPE_5__* q; } ;
struct TYPE_10__ {TYPE_1__* ops; } ;
struct TYPE_7__ {int qlen; } ;
struct TYPE_8__ {TYPE_2__ q; } ;
struct TYPE_6__ {scalar_t__ (* drop ) (TYPE_5__*) ;} ;


 int FUNC_0 (struct cbq_class*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_2(struct cbq_class *VAR_0)
{
 if (VAR_0->q->ops->drop)
  if (VAR_0->q->ops->drop(VAR_0->q))
   VAR_0->qdisc->q.qlen--;
 VAR_0->xstats.overactions++;
 FUNC_0(VAR_0);
}
