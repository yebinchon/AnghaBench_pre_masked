
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;


 char VAR_1 ;


 char VAR_2 ;
 char VAR_3 ;




 int FUNC_0 (char) ;
 int FUNC_1 (char*,int *,int *) ;

__attribute__((used)) static int
FUNC_2(char *VAR_4)
{
 char *VAR_5;

 if (VAR_4[2] != VAR_1)
  return (-1);

 switch (VAR_4[0]) {
 case 129:
 case 133:
 case 128:
 case 132:
  if (VAR_4[1] != VAR_2 && VAR_4[1] != VAR_0)
   return (-1);
  for (VAR_5 = &VAR_4[3]; *VAR_5; VAR_5++)
   if (!FUNC_0(*VAR_5))
    return (-1);
  break;

 case 131:
 case 130:
  if (VAR_4[1] != VAR_3)
   return (-1);
  return (FUNC_1(&VAR_4[3], ((void*)0), ((void*)0)));

 case 137:
 case 136:
  if (VAR_4[1] != VAR_3)
   return (-1);
  if (VAR_4[3] != '\0')
   return (-1);
  break;

 case 135:
 case 134:
  if (VAR_4[1] != VAR_2 && VAR_4[1] != VAR_0)
   return (-1);
  if (VAR_4[3] != '\0')
   return (-1);
  break;

 default:
  return (-1);
 }

 return (0);
}
