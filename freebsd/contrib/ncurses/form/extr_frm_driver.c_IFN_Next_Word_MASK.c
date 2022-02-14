
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * buf; } ;
struct TYPE_8__ {TYPE_2__* current; } ;
typedef TYPE_1__ FORM ;
typedef int FIELD_CELL ;
typedef TYPE_2__ FIELD ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(FORM *VAR_2)
{
  FIELD *VAR_3 = VAR_2->current;
  FIELD_CELL *VAR_4 = FUNC_0(VAR_2);
  FIELD_CELL *VAR_5;
  FIELD_CELL *VAR_6;

  FUNC_6((FUNC_7("IFN_Next_Word(%p)"), (void *)VAR_2));


  FUNC_5(VAR_2);




  VAR_5 = FUNC_3(VAR_4, FUNC_2(VAR_3) -
         (int)(VAR_4 - VAR_3->buf));


  VAR_6 = FUNC_4(VAR_5, FUNC_2(VAR_3) -
   (int)(VAR_5 - VAR_3->buf));

  if (VAR_5 == VAR_6)
    FUNC_8(VAR_1);
  else

    {
      FUNC_1(VAR_2, VAR_6);
      FUNC_8(VAR_0);
    }
}
