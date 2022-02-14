
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 size_t FUNC_0 (char const**) ;
 int FUNC_1 (char*,int,char*,int) ;
 char const** VAR_0 ;

const char *
FUNC_2(
 int VAR_1
 )
{
 static char VAR_2[32];

 if ((size_t)VAR_1 < FUNC_0(VAR_0))
  return VAR_0[VAR_1];
 FUNC_1(VAR_2, sizeof(VAR_2), "TIME-#%d", VAR_1);
 return VAR_2;
}
