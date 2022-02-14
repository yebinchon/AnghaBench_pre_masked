
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ driver_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_1, device_t VAR_2)
{


 if (FUNC_1(VAR_2, VAR_1->name, -1) != ((void*)0))
  return;

 if (FUNC_3(VAR_2) == VAR_0) {
  if (FUNC_0(VAR_2, VAR_1->name, -1) == ((void*)0))
   FUNC_2(VAR_2, "Could not add glxiic child\n");
 }
}
