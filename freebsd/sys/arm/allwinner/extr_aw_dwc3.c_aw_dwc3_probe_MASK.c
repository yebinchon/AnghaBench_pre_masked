
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 phandle_t VAR_4;

 if (!FUNC_4(VAR_3))
  return (VAR_1);

 if (FUNC_3(VAR_3, VAR_2)->ocd_data == 0)
  return (VAR_1);


 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_4) <= 0)
  return (VAR_1);

 FUNC_1(VAR_3, "Allwinner H6 DWC3");
 return (VAR_0);
}
