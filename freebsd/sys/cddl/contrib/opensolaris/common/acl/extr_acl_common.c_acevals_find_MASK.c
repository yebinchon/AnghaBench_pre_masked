
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int avl_tree_t ;
typedef int avl_index_t ;
struct TYPE_9__ {int key; } ;
typedef TYPE_1__ acevals_t ;
struct TYPE_10__ {int a_who; } ;
typedef TYPE_2__ ace_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (void**,int) ;

__attribute__((used)) static acevals_t *
FUNC_4(ace_t *VAR_0, avl_tree_t *VAR_1, int *VAR_2)
{
 acevals_t VAR_3, *VAR_4;
 avl_index_t VAR_5;

 VAR_3.key = VAR_0->a_who;
 VAR_4 = FUNC_1(VAR_1, &VAR_3, &VAR_5);
 if (VAR_4 != ((void*)0))
  return (VAR_4);


 if (FUNC_3((void **)&VAR_4, sizeof (acevals_t)) != 0)
  return (((void*)0));

 FUNC_0(VAR_4, VAR_0->a_who);
 FUNC_2(VAR_1, VAR_4, VAR_5);
 (*VAR_2)++;

 return (VAR_4);
}
