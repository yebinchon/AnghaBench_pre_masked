
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int FUNC_0 (char*,struct sockaddr*) ;
 unsigned int VAR_0 ;

struct sockaddr *
FUNC_1(char *VAR_1, int VAR_2)
{
 struct sockaddr *VAR_3;
 unsigned VAR_4;

 if (VAR_2 == 0)
  return (((void*)0));
 for (VAR_4 = 1; VAR_4; VAR_4 <<= 1)
  if (VAR_4 & VAR_2) {
   VAR_3 = (struct sockaddr *)VAR_1;
   if (VAR_4 == VAR_0)
    return (VAR_3);
   FUNC_0(VAR_1, VAR_3);
  }

 return (((void*)0));
}
