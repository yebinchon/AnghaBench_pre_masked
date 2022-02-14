
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,int,char const*) ;

double
FUNC_1(const char *VAR_0)
{
 union {
  double d;
  uint32_t bits[2];
 } VAR_1;

 FUNC_0(VAR_1.bits, 2, VAR_0);

 VAR_1.bits[1] |= 0x7ff80000;



 return (VAR_1.d);
}
