
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,char*) ;
 size_t FUNC_1 (char*,char*,size_t) ;

int
FUNC_2(int VAR_5, char *VAR_6, size_t VAR_7)
{
 char VAR_8[VAR_1];

 if (FUNC_0(VAR_5, VAR_0, VAR_8) == -1)
  return (-1);
 if (VAR_8[0] == '\0') {
  VAR_4 = VAR_3;
  return (-1);
 }
 if (FUNC_1(VAR_6, VAR_8, VAR_7) >= VAR_7) {
  VAR_4 = VAR_2;
  return (-1);
 }
 return (0);
}
