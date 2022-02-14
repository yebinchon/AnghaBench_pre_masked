
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,char*,int) ;

void FUNC_1(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 uint8_t *VAR_4 = VAR_2, *VAR_5;
 char *VAR_6 = VAR_0;

 if (VAR_1 < VAR_3 * 2)
  VAR_3 = VAR_1 / 2;

 for (VAR_4 = VAR_2, VAR_5 = VAR_4 + VAR_3; VAR_4 < VAR_5; VAR_4++, VAR_6 += 2)
  FUNC_0(VAR_6, "%02x", *VAR_4);
}
