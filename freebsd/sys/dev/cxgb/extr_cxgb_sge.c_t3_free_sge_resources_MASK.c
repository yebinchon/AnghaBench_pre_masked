
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * qs; } ;
struct TYPE_6__ {TYPE_1__ sge; } ;
typedef TYPE_2__ adapter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

void
FUNC_2(adapter_t *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  FUNC_0(&VAR_0->sge.qs[VAR_2]);
  FUNC_1(VAR_0, &VAR_0->sge.qs[VAR_2]);
 }
}
