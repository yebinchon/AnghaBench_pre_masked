
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int,char*) ;
 int FUNC_1 (int,char*,int,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
 char VAR_5[64];
 char *VAR_6 = VAR_0;
 int VAR_7, VAR_8;

 for (VAR_8 = VAR_3; VAR_8 < VAR_4 && VAR_1 > 0; VAR_8++) {
  FUNC_0(VAR_2, VAR_8, VAR_5);
  if (!FUNC_1(VAR_8, VAR_6, VAR_1-1, VAR_5))
   return -1;
  VAR_7 = FUNC_2(VAR_6);
  VAR_6 += VAR_7;
  *VAR_6++ = '\n';
  *VAR_6 = 0;
  VAR_7++;
  VAR_1 -= VAR_7;
 }

 return (int)(VAR_6 - VAR_0);
}
