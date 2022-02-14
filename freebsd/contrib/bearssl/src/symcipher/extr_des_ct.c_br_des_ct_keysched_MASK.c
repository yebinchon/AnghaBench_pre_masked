
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char const*) ;
 int FUNC_2 (int *,int *,int) ;

unsigned
FUNC_3(uint32_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 switch (VAR_2) {
 case 8:
  FUNC_1(VAR_0, VAR_1);
  return 1;
 case 16:
  FUNC_1(VAR_0, VAR_1);
  FUNC_1(VAR_0 + 32, (const unsigned char *)VAR_1 + 8);
  FUNC_0(VAR_0 + 32);
  FUNC_2(VAR_0 + 64, VAR_0, 32 * sizeof *VAR_0);
  return 3;
 default:
  FUNC_1(VAR_0, VAR_1);
  FUNC_1(VAR_0 + 32, (const unsigned char *)VAR_1 + 8);
  FUNC_0(VAR_0 + 32);
  FUNC_1(VAR_0 + 64, (const unsigned char *)VAR_1 + 16);
  return 3;
 }
}
