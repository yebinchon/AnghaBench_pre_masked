
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(uint32_t VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{

 uint32_t VAR_4, VAR_5;


 for (VAR_4 = 31; VAR_4 > 0; VAR_4--)
  if (VAR_1 & (1 << VAR_4))
   break;
 FUNC_0(VAR_4 != 0, ("exp"));
 VAR_4 = 14 - (VAR_4 - 24);


 VAR_5 = VAR_1 + (1 << (24 - VAR_4 - 1));

 *VAR_3 = VAR_5 >> (24 - VAR_4);
 *VAR_2 = VAR_4 - 16;

}
