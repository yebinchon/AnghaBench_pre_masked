
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TypeArgument ;
struct TYPE_8__ {scalar_t__ arg; int type; } ;
struct TYPE_7__ {TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef TYPE_2__ FIELD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(FORM *VAR_2)
{
  FIELD *VAR_3 = VAR_2->current;

  FUNC_2((FUNC_3("CR_Next_Choice(%p)"), (void *)VAR_2));
  FUNC_1(VAR_2);
  FUNC_4((FUNC_0(VAR_2, VAR_3->type, VAR_3, (TypeArgument *)(VAR_3->arg)))
      ? VAR_0
      : VAR_1);
}
