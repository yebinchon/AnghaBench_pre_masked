
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pair_p ;
struct TYPE_3__ {int type; struct TYPE_3__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1 (pair_p VAR_1)
{
  pair_p VAR_2;
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next)
    FUNC_0 (VAR_2->type, VAR_0, ((void*)0));
}
