
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dsl_scan_t ;
typedef int dmu_tx_t ;
struct TYPE_2__ {int * dp_scan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, dmu_tx_t *VAR_2)
{
 dsl_scan_t *VAR_3 = FUNC_1(VAR_2)->dp_scan;

 if (FUNC_2(VAR_3))
  return (FUNC_0(VAR_0));

 return (0);
}
