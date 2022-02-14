
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drr_class {TYPE_2__* qdisc; } ;
struct TYPE_4__ {unsigned int qlen; } ;
struct TYPE_5__ {TYPE_1__ q; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct drr_class *VAR_0)
{
 unsigned int VAR_1 = VAR_0->qdisc->q.qlen;

 FUNC_0(VAR_0->qdisc);
 FUNC_1(VAR_0->qdisc, VAR_1);
}
