
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int ,int,int*) ;

const char *
FUNC_2(int VAR_1) {
 int VAR_2;
 const char *VAR_3;
 static char VAR_4[20];

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_2);
 if (VAR_2)
  return (VAR_3);
 if (VAR_1 < 0 || VAR_1 > 0xffff)
  return ("BADTYPE");
 FUNC_0(VAR_4, "TYPE%d", VAR_1);
 return (VAR_4);
}
