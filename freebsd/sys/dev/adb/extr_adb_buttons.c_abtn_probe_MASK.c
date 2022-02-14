
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 uint8_t VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 != VAR_0)
  return (VAR_1);

 FUNC_1(VAR_2, "ADB Brightness/Volume/Eject Buttons");
 return (0);
}
