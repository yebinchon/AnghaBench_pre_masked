
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ebuf ;


 int FUNC_0 (char*,int,char*,int) ;

char *
FUNC_1(
 int VAR_0
 )
{
 extern int VAR_1;
 extern char *VAR_2[];
 static char VAR_3[20];

 if ((unsigned int)VAR_0 < VAR_1)
  return VAR_2[VAR_0];
 FUNC_0(VAR_3, sizeof(VAR_3), "Unknown error: %d", VAR_0);

 return VAR_3;
}
