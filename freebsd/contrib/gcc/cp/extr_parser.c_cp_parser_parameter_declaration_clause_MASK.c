
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {scalar_t__ type; scalar_t__ keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_14__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_15__ {int ellipsis_p; } ;
typedef TYPE_3__ cp_parameter_declarator ;
struct TYPE_12__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_11__* FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int*) ;
 int * FUNC_4 (TYPE_2__*,scalar_t__,char*) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;

__attribute__((used)) static cp_parameter_declarator *
FUNC_5 (cp_parser* VAR_9)
{
  cp_parameter_declarator *VAR_10;
  cp_token *VAR_11;
  bool VAR_12;
  bool VAR_13;


  VAR_11 = FUNC_2 (VAR_9->lexer);

  if (VAR_11->type == VAR_2)
    {

      FUNC_0 (VAR_9->lexer);
      return ((void*)0);
    }
  else if (VAR_11->type == VAR_0)

    {

      if (VAR_6 && VAR_4 == ((void*)0)
   && VAR_5 == VAR_7)
 return ((void*)0);
      else

 return VAR_8;
    }

  else if (VAR_11->keyword == VAR_3
    && (FUNC_1 (VAR_9->lexer, 2)->type
        == VAR_0))
    {

      FUNC_0 (VAR_9->lexer);

      return VAR_8;
    }


  VAR_10 = FUNC_3 (VAR_9, &VAR_13);



  if (VAR_13)
    return ((void*)0);


  VAR_11 = FUNC_2 (VAR_9->lexer);

  if (VAR_11->type == VAR_1)
    {

      FUNC_0 (VAR_9->lexer);

      VAR_12
 = (FUNC_4 (VAR_9, VAR_2, "`...'") != ((void*)0));
    }


  else if (VAR_11->type == VAR_2)
    {

      FUNC_0 (VAR_9->lexer);

      VAR_12 = 1;
    }
  else
    VAR_12 = 0;


  if (VAR_10 && VAR_12)
    VAR_10->ellipsis_p = 1;

  return VAR_10;
}
