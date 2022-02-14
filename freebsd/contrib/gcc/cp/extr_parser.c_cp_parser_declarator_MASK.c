
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_24__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
typedef int cp_parser_declarator_kind ;
struct TYPE_25__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_26__ {scalar_t__ attributes; } ;
typedef TYPE_3__ cp_declarator ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int ,int*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__*,int *) ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_10 (scalar_t__,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_11 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_12 (int ,scalar_t__,TYPE_3__*) ;
 TYPE_3__* FUNC_13 (int ,TYPE_3__*) ;

__attribute__((used)) static cp_declarator *
FUNC_14 (cp_parser* VAR_8,
        cp_parser_declarator_kind VAR_9,
        int* VAR_10,
        bool* VAR_11,
        bool VAR_12)
{
  cp_token *VAR_13;
  cp_declarator *VAR_14;
  enum tree_code VAR_15;
  cp_cv_quals VAR_16;
  tree VAR_17;
  tree VAR_18 = VAR_5;



  if (VAR_10)
    *VAR_10 = 0;

  if (FUNC_3 (VAR_8))
    VAR_18 = FUNC_4 (VAR_8);


  VAR_13 = FUNC_2 (VAR_8->lexer);


  if (VAR_7 && VAR_13->type == VAR_1)
    {
      cp_cv_quals VAR_19;
      cp_declarator *VAR_20;
      tree VAR_21;

      FUNC_0 (VAR_8->lexer);


      VAR_19 = FUNC_5 (VAR_8, &VAR_21);

      VAR_20 = FUNC_14 (VAR_8, VAR_2,
                                ((void*)0),
                            ((void*)0),
                     0);
      if (VAR_20 == VAR_6)
 return VAR_20;
      return FUNC_10 (VAR_21, VAR_19, VAR_20);
    }



  FUNC_8 (VAR_8);

  VAR_15 = FUNC_9 (VAR_8,
     &VAR_17,
     &VAR_16);

  if (FUNC_7 (VAR_8))
    {


      if (VAR_11)
 *VAR_11 = 1;


      if (VAR_9 != VAR_3)
 FUNC_8 (VAR_8);


      VAR_14 = FUNC_14 (VAR_8, VAR_9,
                              ((void*)0),
                          ((void*)0),
                   0);



      if (VAR_9 != VAR_3
   && !FUNC_7 (VAR_8))
 VAR_14 = ((void*)0);


      if (VAR_17)
 VAR_14 = FUNC_12 (VAR_16,
          VAR_17,
          VAR_14);
      else if (VAR_15 == VAR_4)
 VAR_14 = FUNC_11 (VAR_16, VAR_14);
      else
 VAR_14 = FUNC_13 (VAR_16, VAR_14);
    }

  else
    {
      if (VAR_11)
 *VAR_11 = FUNC_1 (VAR_8->lexer,
         VAR_0);
      VAR_14 = FUNC_6 (VAR_8, VAR_9,
      VAR_10,
      VAR_12);
    }

  if (VAR_18 && VAR_14 && VAR_14 != VAR_6)
    VAR_14->attributes = VAR_18;

  return VAR_14;
}
