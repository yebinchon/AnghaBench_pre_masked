
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct api_signature {int dummy; } ;


 int FUNC_0 (int,char**,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (struct api_signature*) ;

int
FUNC_3(int VAR_4, char **VAR_5, struct api_signature **VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 VAR_7 = 0;
 VAR_1 = 0;
 VAR_3 = 1;
 VAR_2 = 1;

 while ((VAR_8 = FUNC_0 (VAR_4, VAR_5, "a:")) != -1)
  switch (VAR_8) {
  case 'a':
   VAR_7 = FUNC_1(VAR_0, ((void*)0), 16);
   break;
  default:
   break;
  }

 if (VAR_7 != 0) {
  *VAR_6 = (struct api_signature *)VAR_7;
  if (FUNC_2(*VAR_6))
   return (1);
 }

 return (0);
}
