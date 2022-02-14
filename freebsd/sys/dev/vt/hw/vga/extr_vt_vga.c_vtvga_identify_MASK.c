
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ driver_t ;
typedef int device_t ;
struct TYPE_5__ {int vga_enabled; } ;


 int * FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(driver_t *VAR_1, device_t VAR_2)
{

 if (!VAR_0.vga_enabled)
  return;

 if (FUNC_0(VAR_2, 0, VAR_1->name, 0) == ((void*)0))
  FUNC_1("Unable to attach vt_vga console");
}
