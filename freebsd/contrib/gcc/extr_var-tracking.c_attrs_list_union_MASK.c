
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* attrs ;
struct TYPE_6__ {int loc; int offset; int decl; struct TYPE_6__* next; } ;


 int FUNC_0 (TYPE_1__**,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (attrs *VAR_0, attrs VAR_1)
{
  for (; VAR_1; VAR_1 = VAR_1->next)
    {
      if (!FUNC_1 (*VAR_0, VAR_1->decl, VAR_1->offset))
 FUNC_0 (VAR_0, VAR_1->decl, VAR_1->offset, VAR_1->loc);
    }
}
