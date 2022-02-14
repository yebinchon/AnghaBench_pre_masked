
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 const char *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 == ((void*)0) || FUNC_3(VAR_3, "clocks") != 0)
  return (VAR_1);

 if (FUNC_0()->ocd_data == 0)
  return (VAR_1);

 FUNC_1(VAR_2, "Allwinner Clock Control Unit");
 return (VAR_0);
}
