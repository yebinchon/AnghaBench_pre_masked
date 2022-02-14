
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ driver_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int * FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_0, device_t VAR_1)
{

 if (FUNC_2(VAR_1) == ((void*)0))
  return;

 if (FUNC_1(VAR_1, VAR_0->name, -1) == ((void*)0))
  FUNC_0(VAR_1, 0, VAR_0->name, 0);
}
