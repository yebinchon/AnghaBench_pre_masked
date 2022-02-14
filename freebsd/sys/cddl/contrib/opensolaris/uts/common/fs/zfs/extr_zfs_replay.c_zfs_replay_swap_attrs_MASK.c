
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int lr_attr_masksize; } ;
typedef TYPE_1__ lr_attr_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(lr_attr_t *VAR_0)
{

 FUNC_0(VAR_0, sizeof (*VAR_0));

 FUNC_0(VAR_0 + 1, (VAR_0->lr_attr_masksize - 1) *
     sizeof (uint32_t));

 FUNC_1((caddr_t)(VAR_0 + 1) + (sizeof (uint32_t) *
     (VAR_0->lr_attr_masksize - 1)), 3 * sizeof (uint64_t));
}
