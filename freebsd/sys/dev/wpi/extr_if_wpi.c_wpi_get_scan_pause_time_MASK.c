
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t VAR_2, uint16_t VAR_3)
{
 uint32_t VAR_4 = (VAR_2 % VAR_3) * VAR_0;
 uint32_t VAR_5 = VAR_2 / VAR_3;

 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;

 return FUNC_0(VAR_5, VAR_4);
}
