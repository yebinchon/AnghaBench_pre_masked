
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;


 int FUNC_0 (char*,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;






int
FUNC_1(char *VAR_2, int VAR_3)
{
 struct sockaddr *VAR_4;
 unsigned VAR_5;

 if (VAR_3 == 0)
  return -1;
 for (VAR_5 = 1; VAR_5; VAR_5 <<= 1) {
  if (VAR_5 & VAR_3) {
   VAR_4 = (struct sockaddr *)VAR_2;
   switch (VAR_5) {
   case 130:
   case 132:
   case 131:
   case 128:
    if (VAR_4->sa_family == VAR_0)
     return VAR_0;
    if (VAR_4->sa_family == VAR_1)
     return VAR_1;
    break;
   case 129:
    break;
   }
   FUNC_0(VAR_2, VAR_4);
  }
 }
 return (-1);
}
