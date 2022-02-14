
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{

 if (!FUNC_2(VAR_3))
  return (VAR_1);
 switch (FUNC_1(VAR_3, VAR_2)->ocd_data) {
 case 129:
  FUNC_0(VAR_3, "Allwinner A10 Watchdog");
  return (VAR_0);
 case 128:
  FUNC_0(VAR_3, "Allwinner A31 Watchdog");
  return (VAR_0);
 }
 return (VAR_1);
}
