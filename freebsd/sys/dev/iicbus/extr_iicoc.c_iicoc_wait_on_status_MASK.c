
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, uint8_t VAR_3)
{
 int VAR_4 = VAR_0;
 uint8_t VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_2, VAR_1);
 } while ((VAR_5 & VAR_3) != 0 && --VAR_4 > 0);

 return (VAR_4 == 0 ? -1: 0);
}
