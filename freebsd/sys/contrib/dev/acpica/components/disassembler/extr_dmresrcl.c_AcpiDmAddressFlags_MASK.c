
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ResourceType; int SpecificFlags; } ;
struct TYPE_5__ {TYPE_1__ Address; } ;
typedef TYPE_2__ AML_RESOURCE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (
    AML_RESOURCE *VAR_2)
{

    if (VAR_2->Address.ResourceType == VAR_0)
    {
        FUNC_0 (VAR_2->Address.SpecificFlags);
    }
    else if (VAR_2->Address.ResourceType == VAR_1)
    {
        FUNC_1 (VAR_2->Address.SpecificFlags);
    }
}
