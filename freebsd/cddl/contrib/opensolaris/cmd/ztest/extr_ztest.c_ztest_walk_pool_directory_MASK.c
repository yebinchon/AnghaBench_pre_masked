
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_2__ {int zo_verbose; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int *) ;
 int VAR_0 ;
 int * FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(char *VAR_2)
{
 spa_t *VAR_3 = ((void*)0);

 if (VAR_1.zo_verbose >= 6)
  (void) FUNC_2("%s\n", VAR_2);

 FUNC_0(&VAR_0);
 while ((VAR_3 = FUNC_4(VAR_3)) != ((void*)0))
  if (VAR_1.zo_verbose >= 6)
   (void) FUNC_2("\t%s\n", FUNC_3(VAR_3));
 FUNC_1(&VAR_0);
}
