
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int FUNC_0 (char*) ;

void FUNC_1(unsigned char *VAR_0, int VAR_1)
{
 boolean_t VAR_2 = 0;

 FUNC_0("IN\n");

 for (; VAR_1 > 0; (--VAR_1, ++VAR_0)) {
  if (*VAR_0 == 0)
   VAR_2 = 1;
  if (VAR_2 || *VAR_0 < 0x20 || *VAR_0 > 0x7e)
   *VAR_0 = ' ';
 }

 FUNC_0("OUT\n");
}
