
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, uint8_t VAR_4)
{
 uint8_t VAR_5;

 FUNC_2(VAR_3, VAR_0, VAR_4);
 if (FUNC_3(VAR_3, VAR_2) < 0) {
  FUNC_0(VAR_3, "read: Timeout waiting for TIP clear.\n");
  return (-1);
 }
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 return (VAR_5);
}
