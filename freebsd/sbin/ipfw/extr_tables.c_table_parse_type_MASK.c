
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int ,char*,char**,int*,int*) ;
 int VAR_1 ;

int
FUNC_2(uint8_t VAR_2, char *VAR_3, uint8_t *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 char *VAR_7;


 switch(VAR_2) {
 case 128:
  VAR_5 = VAR_6 = 0;
  if (FUNC_1(VAR_1, VAR_3, &VAR_7, &VAR_5, &VAR_6) != 0)
   FUNC_0(VAR_0,
       "unable to parse flow option %s", VAR_7);
  *VAR_4 = VAR_5;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
