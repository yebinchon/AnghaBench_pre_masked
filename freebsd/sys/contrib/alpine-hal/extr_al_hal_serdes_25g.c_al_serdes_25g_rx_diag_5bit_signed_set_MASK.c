
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(uint8_t VAR_2, int8_t *VAR_3)
{
 uint8_t VAR_4, VAR_5;

 VAR_4 = VAR_2 & VAR_0;
 VAR_5 = (VAR_2 & FUNC_0(VAR_1)) >>
   VAR_1;
 if (VAR_5)
  *VAR_3 = VAR_4;
 else
  *VAR_3 = 0 - VAR_4;
}
