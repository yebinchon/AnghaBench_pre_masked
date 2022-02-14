
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_2__ {int * qs; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (struct adapter*,int *,struct mbuf*) ;

int
FUNC_1(struct adapter *VAR_0, struct mbuf *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_0->sge.qs[0], VAR_1);
}
