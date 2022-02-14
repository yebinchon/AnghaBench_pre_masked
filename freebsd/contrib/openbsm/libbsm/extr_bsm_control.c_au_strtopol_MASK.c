
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ap_policy; int * ap_str; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char**,char*) ;

int
FUNC_4(const char *VAR_3, int *VAR_4)
{
 char *VAR_5, *VAR_6;
 char *VAR_7;
 int VAR_8, VAR_9;

 *VAR_4 = 0;
 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 == ((void*)0))
  return (-1);

 VAR_5 = VAR_7;
 while ((VAR_6 = FUNC_3(&VAR_5, ",")) != ((void*)0)) {
  VAR_9 = VAR_8 = 0;

  do {
   if (FUNC_1(VAR_6, VAR_1[VAR_8].ap_str) == 0) {
    *VAR_4 |= VAR_1[VAR_8].ap_policy;
    VAR_9 = 1;
    break;
   }
  } while (((void*)0) != VAR_1[++VAR_8].ap_str);

  if (!VAR_9) {
   FUNC_0(VAR_7);
   VAR_2 = VAR_0;
   return (-1);
  }
 }
 FUNC_0(VAR_7);
 return (0);
}
