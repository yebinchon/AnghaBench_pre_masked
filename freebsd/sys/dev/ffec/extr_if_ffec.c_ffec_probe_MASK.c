
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {uintptr_t ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5)
{
 uintptr_t VAR_6;

 if (!FUNC_2(VAR_5))
  return (VAR_1);

 VAR_6 = FUNC_1(VAR_5, VAR_4)->ocd_data;
 if (VAR_6 == VAR_3)
  return (VAR_1);

 FUNC_0(VAR_5, (VAR_6 & VAR_2) ?
     "Freescale Gigabit Ethernet Controller" :
     "Freescale Fast Ethernet Controller");

 return (VAR_0);
}
