
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; struct TYPE_5__* next; } ;
typedef TYPE_1__ strnodelist ;
struct TYPE_6__ {TYPE_1__* keyword_list; } ;
typedef TYPE_2__ filenode ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(filenode *VAR_1)
{
 strnodelist *VAR_2;
 strnodelist *VAR_3;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  for (VAR_3 = VAR_1->keyword_list; VAR_3; VAR_3 = VAR_3->next)
   if (FUNC_0(VAR_3->s, VAR_2->s) == 0)
    return (0);

 return (1);
}
