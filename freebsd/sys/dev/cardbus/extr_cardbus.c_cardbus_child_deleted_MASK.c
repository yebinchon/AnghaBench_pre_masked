
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dev; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;
struct cardbus_devinfo {TYPE_2__ pci; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (struct cardbus_devinfo*) ;
 struct cardbus_devinfo* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct cardbus_devinfo *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->pci.cfg.dev != VAR_1)
  FUNC_2(VAR_0, "devinfo dev mismatch\n");
 FUNC_0(VAR_2);
 FUNC_3(VAR_0, VAR_1);
}
