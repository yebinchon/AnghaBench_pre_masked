
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* kex; } ;
struct TYPE_2__ {int ** newkeys; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct ssh *VAR_0, int VAR_1)
{
 if (VAR_0->kex && VAR_0->kex->newkeys[VAR_1]) {
  FUNC_0(VAR_0->kex->newkeys[VAR_1]);
  VAR_0->kex->newkeys[VAR_1] = ((void*)0);
 }
}
