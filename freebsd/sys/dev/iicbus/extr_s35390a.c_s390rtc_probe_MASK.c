
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 if (FUNC_2(VAR_4) != VAR_2) {
  if (VAR_3)
   FUNC_0(VAR_4, "slave address mismatch. "
       "(%02x != %02x)\n", FUNC_2(VAR_4),
       VAR_2);
  return (VAR_1);
 }

 FUNC_1(VAR_4, "Seiko Instruments S-35390A RTC");

 return (VAR_0);
}
