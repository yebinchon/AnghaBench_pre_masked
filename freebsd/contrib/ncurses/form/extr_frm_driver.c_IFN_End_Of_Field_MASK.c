
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * buf; } ;
struct TYPE_7__ {TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef int FIELD_CELL ;
typedef TYPE_2__ FIELD ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(FORM *VAR_1)
{
  FIELD *VAR_2 = VAR_1->current;
  FIELD_CELL *VAR_3;

  FUNC_4((FUNC_5("IFN_End_Of_Field(%p)"), (void *)VAR_1));
  FUNC_3(VAR_1);
  VAR_3 = FUNC_1(VAR_2->buf, FUNC_2(VAR_2));
  if (VAR_3 == (VAR_2->buf + FUNC_2(VAR_2)))
    VAR_3--;
  FUNC_0(VAR_1, VAR_3);
  FUNC_6(VAR_0);
}
