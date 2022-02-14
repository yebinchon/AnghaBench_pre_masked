
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 char FUNC_0 (int) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;

void FUNC_3(FILE * VAR_0, char *VAR_1, void *VAR_2, int VAR_3)
{

 uint8_t *VAR_4 = VAR_2;
 int VAR_5;

 if (VAR_1)
  FUNC_2(VAR_1, VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3;) {
  FUNC_1(((*VAR_4 >> 4) < 10 ? '0' + (*VAR_4 >> 4) : 'a' + ((*VAR_4 >> 4) -10)), VAR_0);
  FUNC_1(((*VAR_4 & 0xf) < 10 ? '0' + (*VAR_4 & 0xf) : 'a' + ((*VAR_4 & 0xf) -10)), VAR_0);
  if (++VAR_5 >= VAR_3)
   break;
  FUNC_1(((VAR_4[1] >> 4) < 10 ? '0' + (VAR_4[1] >> 4) : 'a' + ((VAR_4[1] >> 4) -10)), VAR_0);
  FUNC_1(((VAR_4[1] & 0xf) < 10 ? '0' + (VAR_4[1] & 0xf) : 'a' + ((VAR_4[1] & 0xf) -10)), VAR_0);
  if ((++VAR_5) % 16)
   FUNC_1(' ', VAR_0);
  else
   FUNC_1('\n', VAR_0);
  VAR_4 += 2;
 }
 if (VAR_5 % 16)
  FUNC_1('\n', VAR_0);
}
