
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* attrs ;
struct TYPE_6__ {struct TYPE_6__* next; int offset; int decl; int loc; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (attrs *VAR_1, attrs VAR_2)
{
  attrs VAR_3;

  FUNC_0 (VAR_1);
  for (; VAR_2; VAR_2 = VAR_2->next)
    {
      VAR_3 = FUNC_1 (VAR_0);
      VAR_3->loc = VAR_2->loc;
      VAR_3->decl = VAR_2->decl;
      VAR_3->offset = VAR_2->offset;
      VAR_3->next = *VAR_1;
      *VAR_1 = VAR_3;
    }
}
