
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
struct TYPE_10__ {int type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_11__ {int integral_constant_expression_p; int non_integral_constant_expression_p; int lexer; } ;
typedef TYPE_2__ cp_parser ;
typedef int cp_id_kind ;



 int const VAR_0 ;
 int const VAR_1 ;

 int const VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int const,int ,int,int *) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int const,char*) ;
 int FUNC_8 (TYPE_2__*,int,int,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static tree
FUNC_11 (cp_parser *VAR_8)
{
  int VAR_9, VAR_10;
  tree VAR_11, VAR_12;
  cp_id_kind VAR_13;




  VAR_9 = VAR_8->integral_constant_expression_p;
  VAR_10 = VAR_8->non_integral_constant_expression_p;


  FUNC_3 (VAR_8->lexer);

  FUNC_7 (VAR_8, VAR_2, "`('");

  VAR_11 = FUNC_9 (VAR_8);

  FUNC_7 (VAR_8, VAR_0, "`,'");


  VAR_12 = FUNC_2 (FUNC_1 (VAR_11), VAR_5);


  VAR_12 = FUNC_5 (VAR_8, VAR_1, VAR_12,
       1, &VAR_13);
  while (1)
    {
      cp_token *VAR_14 = FUNC_4 (VAR_8->lexer);
      switch (VAR_14->type)
 {
 case 128:

   VAR_12 = FUNC_6 (VAR_8, VAR_12, 1);
   break;

 case 129:

   FUNC_3 (VAR_8->lexer);
   VAR_12 = FUNC_5 (VAR_8, 129, VAR_12,
        1, &VAR_13);
   break;

 case 130:

   FUNC_3 (VAR_8->lexer);
   goto success;

 default:


   FUNC_7 (VAR_8, 130, "`)'");
   FUNC_8 (VAR_8, 1, 0, 1);
   VAR_12 = VAR_4;
   goto failure;
 }
    }

 success:


  if (VAR_6)
    VAR_12 = FUNC_0 (VAR_3, VAR_7, VAR_12);
  else
    VAR_12 = FUNC_10 (VAR_12);

 failure:
  VAR_8->integral_constant_expression_p = VAR_9;
  VAR_8->non_integral_constant_expression_p = VAR_10;

  return VAR_12;
}
