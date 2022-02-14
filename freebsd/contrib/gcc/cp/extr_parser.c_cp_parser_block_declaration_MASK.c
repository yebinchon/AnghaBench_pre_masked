
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_15__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10 (cp_parser *VAR_5,
        bool VAR_6)
{
  cp_token *VAR_7;
  int VAR_8;


  if (FUNC_4 (VAR_5, &VAR_8))
    {

      FUNC_10 (VAR_5, VAR_6);

      VAR_4 = VAR_8;

      return;
    }



  VAR_7 = FUNC_1 (VAR_5->lexer);


  if (VAR_7->keyword == VAR_0)
    {
      if (VAR_6)
 FUNC_3 (VAR_5);
      FUNC_2 (VAR_5);
    }


  else if (VAR_7->keyword == VAR_2)
    FUNC_6 (VAR_5);


  else if (VAR_7->keyword == VAR_3)
    {
      cp_token *VAR_9;

      if (VAR_6)
 FUNC_3 (VAR_5);


      VAR_9 = FUNC_0 (VAR_5->lexer, 2);
      if (VAR_9->keyword == VAR_2)
 FUNC_9 (VAR_5);

      else
 FUNC_8 (VAR_5,
                                  0);
    }

  else if (VAR_7->keyword == VAR_1)
    {
      if (VAR_6)
 FUNC_3 (VAR_5);
      FUNC_5 (VAR_5);
    }

  else
    FUNC_7 (VAR_5, !VAR_6);
}
