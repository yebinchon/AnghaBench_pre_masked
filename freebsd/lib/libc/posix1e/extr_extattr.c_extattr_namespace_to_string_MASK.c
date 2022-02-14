
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;

int
FUNC_1(int VAR_4, char **VAR_5)
{

 switch(VAR_4) {
 case 128:
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_0(VAR_2);
  return (0);

 case 129:
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_0(VAR_1);
  return (0);

 default:
  VAR_3 = VAR_0;
  return (-1);
 }
}
