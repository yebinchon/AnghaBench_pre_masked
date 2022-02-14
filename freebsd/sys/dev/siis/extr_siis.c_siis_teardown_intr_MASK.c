
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siis_controller {TYPE_1__* interrupt; } ;
struct resource {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int * argument; int * function; } ;


 int FUNC_0 (int ) ;
 struct siis_controller* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, struct resource *VAR_2,
        void *VAR_3)
{
 struct siis_controller *VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = (intptr_t)FUNC_0(VAR_1);

 VAR_4->interrupt[VAR_5].function = ((void*)0);
 VAR_4->interrupt[VAR_5].argument = ((void*)0);
 return (0);
}
