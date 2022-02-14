
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;

void
FUNC_2(uint8_t** VAR_0, size_t* VAR_1)
{
 size_t VAR_2;
 FUNC_1(VAR_0 && *VAR_0 && VAR_1);
 VAR_2 = (*VAR_0)[0];
 FUNC_1(!FUNC_0(VAR_2));
 FUNC_1(*VAR_1 > VAR_2);
 if(VAR_2 == 0)
  return;
 *VAR_1 -= VAR_2+1;
 *VAR_0 += VAR_2+1;
}
