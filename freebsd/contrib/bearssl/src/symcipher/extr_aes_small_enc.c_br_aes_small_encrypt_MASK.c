
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned int*,int const*) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (unsigned int*) ;

void
FUNC_4(unsigned VAR_0, const uint32_t *VAR_1, void *VAR_2)
{
 unsigned char *VAR_3;
 unsigned VAR_4[16];
 unsigned VAR_5;

 VAR_3 = VAR_2;
 for (VAR_5 = 0; VAR_5 < 16; VAR_5 ++) {
  VAR_4[VAR_5] = VAR_3[VAR_5];
 }
 FUNC_0(VAR_4, VAR_1);
 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5 ++) {
  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
  FUNC_1(VAR_4);
  FUNC_0(VAR_4, VAR_1 + (VAR_5 << 2));
 }
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 FUNC_0(VAR_4, VAR_1 + (VAR_0 << 2));
 for (VAR_5 = 0; VAR_5 < 16; VAR_5 ++) {
  VAR_3[VAR_5] = VAR_4[VAR_5];
 }
}
