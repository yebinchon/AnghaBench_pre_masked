
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


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(FORM *VAR_4)
{
  FIELD *VAR_5 = VAR_4->current;
  FIELD_CELL *VAR_6 = FUNC_0(VAR_4);
  FIELD_CELL *VAR_7;
  FIELD_CELL *VAR_8;
  bool VAR_9 = VAR_2;

  FUNC_5((FUNC_6("IFN_Previous_Word(%p)"), (void *)VAR_4));


  FUNC_4(VAR_4);

  VAR_7 = FUNC_2(VAR_5->buf, (int)(VAR_6 - VAR_5->buf));




  if (VAR_7 == VAR_6)
    VAR_9 = VAR_3;





  VAR_8 = FUNC_3(VAR_5->buf, (int)(VAR_7 - VAR_5->buf));

  if (VAR_7 == VAR_8)
    FUNC_7(VAR_1);

  if (VAR_9)
    {

      VAR_7 = FUNC_2(VAR_5->buf, (int)(VAR_8 - VAR_5->buf));
      VAR_8 = FUNC_3(VAR_5->buf, (int)(VAR_7 - VAR_5->buf));

      if (VAR_7 == VAR_8)
 FUNC_7(VAR_1);

    }
  FUNC_1(VAR_4, VAR_8);
  FUNC_7(VAR_0);
}
