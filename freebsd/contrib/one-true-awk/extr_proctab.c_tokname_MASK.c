
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,char*,int) ;

char *FUNC_1(int VAR_3)
{
 static char VAR_4[100];

 if (VAR_3 < VAR_0 || VAR_3 > VAR_1) {
  FUNC_0(VAR_4, "token %d", VAR_3);
  return VAR_4;
 }
 return VAR_2[VAR_3-VAR_0];
}
