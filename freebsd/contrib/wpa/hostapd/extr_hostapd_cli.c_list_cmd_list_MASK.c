
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cmd; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 char** FUNC_1 (int,int) ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static char ** FUNC_3(void)
{
 char **VAR_1;
 int VAR_2, VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_1 = FUNC_1(VAR_3 + 1, sizeof(char *));
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 for (VAR_2 = 0; VAR_0[VAR_2].cmd; VAR_2++) {
  VAR_1[VAR_2] = FUNC_2(VAR_0[VAR_2].cmd);
  if (VAR_1[VAR_2] == ((void*)0))
   break;
 }

 return VAR_1;
}
