
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef size_t u_int ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_1(const uint32_t VAR_1, uint8_t *VAR_2, u_int VAR_3, u_int VAR_4)
{
 u_int VAR_5;

 for (VAR_5 = VAR_4; VAR_5 < FUNC_0(VAR_3, 4 + VAR_4); VAR_5++)
  VAR_2[VAR_5] = (VAR_1 >> ((VAR_5 - VAR_4) * VAR_0)) & 0xff;
}
