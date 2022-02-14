
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,unsigned char) ;

char *
FUNC_2(unsigned char *VAR_0, size_t VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 size_t VAR_4;

 VAR_2 = FUNC_0(2 * VAR_1 + 1);
 if (VAR_2 != ((void*)0)) {
  for (VAR_4 = 0, VAR_3 = VAR_2; VAR_4 < VAR_1; VAR_4++) {
   FUNC_1(&VAR_3[VAR_4*2], 3, "%02X", VAR_0[VAR_4]);
  }
 }
 return (VAR_2);
}
