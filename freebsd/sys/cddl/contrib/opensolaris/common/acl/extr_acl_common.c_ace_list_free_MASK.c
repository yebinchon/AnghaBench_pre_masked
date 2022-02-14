
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int group; int user; } ;
typedef TYPE_1__ acevals_t ;
typedef TYPE_1__ ace_list_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,void**) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(ace_list_t *VAR_0)
{
 acevals_t *VAR_1;
 void *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = ((void*)0);
 while ((VAR_1 = FUNC_1(&VAR_0->user, &VAR_2)) != ((void*)0))
  FUNC_2(VAR_1, sizeof (acevals_t));
 VAR_2 = ((void*)0);
 while ((VAR_1 = FUNC_1(&VAR_0->group, &VAR_2)) != ((void*)0))
  FUNC_2(VAR_1, sizeof (acevals_t));

 FUNC_0(&VAR_0->user);
 FUNC_0(&VAR_0->group);


 FUNC_2(VAR_0, sizeof (ace_list_t));
}
