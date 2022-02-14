
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_6__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;
typedef int cp_declarator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 int * FUNC_6 (int *,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static cp_declarator *
FUNC_7 (cp_parser* VAR_6)
{
  cp_declarator *VAR_7 = ((void*)0);

  while (1)
    {
      tree VAR_8;


      FUNC_4 (VAR_6, VAR_1, "`['");

      if (!VAR_7)
 {
   VAR_8 = FUNC_3 (VAR_6, 0);






   if (!VAR_5)
     {
       VAR_8
  = FUNC_0 (VAR_3 | VAR_2,
           VAR_8,
                        1);
       if (!VAR_8)
  {
    FUNC_5 ("expression in new-declarator must have integral "
    "or enumeration type");
    VAR_8 = VAR_4;
  }
     }
 }

      else
 VAR_8
   = FUNC_2 (VAR_6,
                               0,
        ((void*)0));

      FUNC_4 (VAR_6, VAR_0, "`]'");


      VAR_7 = FUNC_6 (VAR_7, VAR_8);



      if (FUNC_1 (VAR_6->lexer, VAR_1))
 break;
    }

  return VAR_7;
}
