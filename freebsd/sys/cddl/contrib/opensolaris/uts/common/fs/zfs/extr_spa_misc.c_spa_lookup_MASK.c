
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spa_name; } ;
typedef TYPE_1__ spa_t ;
typedef int avl_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char const*,int) ;
 char* FUNC_4 (int ,char*) ;

spa_t *
FUNC_5(const char *VAR_2)
{
 static spa_t VAR_3;
 spa_t *VAR_4;
 avl_index_t VAR_5;
 char *VAR_6;

 FUNC_0(FUNC_1(&VAR_1));

 (void) FUNC_3(VAR_3.spa_name, VAR_2, sizeof (VAR_3.spa_name));





 VAR_6 = FUNC_4(VAR_3.spa_name, "/@#");
 if (VAR_6 != ((void*)0))
  *VAR_6 = '\0';

 VAR_4 = FUNC_2(&VAR_0, &VAR_3, &VAR_5);

 return (VAR_4);
}
