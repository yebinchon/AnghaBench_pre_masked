
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(uint8_t VAR_2)
{
 int VAR_3 = VAR_0;
 uint8_t VAR_4;

 do {
  VAR_4 = FUNC_0(VAR_1);
 } while ((VAR_4 & VAR_2) != 0 && --VAR_3 > 0);

 return (VAR_3 == 0 ? -1: 0);
}
