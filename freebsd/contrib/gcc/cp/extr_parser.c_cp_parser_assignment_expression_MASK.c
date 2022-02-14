
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_8__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static tree
FUNC_8 (cp_parser* VAR_4, bool VAR_5)
{
  tree VAR_6;



  if (FUNC_2 (VAR_4->lexer, VAR_2))
    VAR_6 = FUNC_7 (VAR_4);


  else
    {

      VAR_6 = FUNC_4 (VAR_4, VAR_5);


      if (FUNC_1 (VAR_4->lexer, VAR_0))
 return FUNC_6 (VAR_4, VAR_6);
      else
 {
   enum tree_code VAR_7;



   VAR_7
     = FUNC_3 (VAR_4);
   if (VAR_7 != VAR_1)
     {
       tree VAR_8;


       VAR_8 = FUNC_8 (VAR_4, VAR_5);


       if (FUNC_5 (VAR_4,
             "an assignment"))
  return VAR_3;

       VAR_6 = FUNC_0 (VAR_6,
       VAR_7,
       VAR_8);
     }
 }
    }

  return VAR_6;
}
