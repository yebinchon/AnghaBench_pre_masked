
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
typedef int SCR ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,char*) ;
 TYPE_1__* VAR_1 ;

int
FUNC_2(
 SCR *VAR_2,
 int VAR_3,
 int VAR_4)
{
 char *VAR_5;

 if ((VAR_5 = FUNC_0(VAR_2, VAR_3)) == ((void*)0) || VAR_5[0] == '\0') {
  if (!VAR_4)
   FUNC_1(VAR_2, VAR_0, VAR_1[VAR_3].name,
       "305|No %s edit option specified");
  return (1);
 }
 return (0);
}
