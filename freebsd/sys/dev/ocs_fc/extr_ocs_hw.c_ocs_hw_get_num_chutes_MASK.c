
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int sli; } ;
typedef TYPE_1__ ocs_hw_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static uint32_t
FUNC_2(ocs_hw_t *VAR_0)
{
 uint32_t VAR_1 = 1;

 if (FUNC_0(&VAR_0->sli) &&
     FUNC_1(&VAR_0->sli, 0) &&
     FUNC_1(&VAR_0->sli, 1)) {
  VAR_1 = 2;
 }
 return VAR_1;
}
