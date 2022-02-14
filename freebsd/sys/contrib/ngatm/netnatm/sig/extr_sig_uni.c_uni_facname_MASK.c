
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum uni_verb { ____Placeholder_uni_verb } uni_verb ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 char const** VAR_1 ;

const char *
FUNC_1(enum uni_verb VAR_2)
{
 static char VAR_3[40];

 if (VAR_2 >= VAR_0) {
  FUNC_0(VAR_3, "FAC%u", VAR_2);
  return (VAR_3);
 }
 return (VAR_1[VAR_2]);
}
