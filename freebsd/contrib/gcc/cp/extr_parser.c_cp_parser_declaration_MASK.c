
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ type; scalar_t__ keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_17__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int VAR_14 ;
 void* FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,void*) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_16 (cp_parser* VAR_16)
{
  cp_token VAR_17;
  cp_token VAR_18;
  int VAR_19;
  void *VAR_20;


  if (FUNC_8 (VAR_16, &VAR_19))
    {

      FUNC_16 (VAR_16);

      VAR_15 = VAR_19;

      return;
    }


  VAR_17 = *FUNC_3 (VAR_16->lexer);

  if (VAR_17 != VAR_0)
    VAR_18 = *FUNC_2 (VAR_16->lexer, 2);
  else
    {
      VAR_18 = VAR_0;
      VAR_18 = VAR_10;
    }


  VAR_20 = FUNC_14 (&VAR_14, 0);



  if (VAR_17 == VAR_8
      && FUNC_9 (&VAR_18))
    FUNC_10 (VAR_16);



  else if (VAR_17 == VAR_13)
    {

      if (VAR_18 == VAR_3
   && FUNC_2 (VAR_16->lexer, 3)->type == VAR_2)
 FUNC_7 (VAR_16);

      else if (VAR_18 == VAR_3)
 FUNC_13 (VAR_16, 0);

      else
 FUNC_6 (VAR_16);
    }


  else if (VAR_17 == VAR_7)
    FUNC_13 (VAR_16, 0);



  else if (FUNC_4 (VAR_16)
    && (VAR_17 == VAR_8
        || VAR_17 == VAR_12
        || VAR_17 == VAR_9)
    && VAR_18 == VAR_13)
    FUNC_6 (VAR_16);


  else if (VAR_17 == VAR_11
    && (
        (VAR_18 == VAR_4
  && (FUNC_2 (VAR_16->lexer, 3)->type
      != VAR_1))

        || VAR_18 == VAR_5
        || VAR_18 == VAR_6))
    FUNC_11 (VAR_16);

  else if (FUNC_1 () && FUNC_0 (VAR_17))
    FUNC_12 (VAR_16);


  else

    FUNC_5 (VAR_16, 0);


  FUNC_15 (&VAR_14, VAR_20);
}
