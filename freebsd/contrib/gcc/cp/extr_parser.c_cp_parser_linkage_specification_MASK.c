
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int tree ;
struct TYPE_9__ {int in_unbraced_linkage_specification_p; int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (TYPE_1__*,int ,char*) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 size_t FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (cp_parser* VAR_4)
{
  tree VAR_5;


  FUNC_8 (VAR_4, VAR_2, "`extern'");


  VAR_5 = FUNC_9 (VAR_4, 0, 0);




  if (FUNC_13 (FUNC_1 (VAR_5))
      != (size_t) (FUNC_0 (VAR_5) - 1))
    {
      FUNC_6 (VAR_4, "invalid linkage-specification");

      VAR_5 = VAR_3;
    }
  else
    VAR_5 = FUNC_10 (FUNC_1 (VAR_5));


  FUNC_12 (VAR_5);



  if (FUNC_3 (VAR_4->lexer, VAR_1))
    {

      FUNC_2 (VAR_4->lexer);

      FUNC_5 (VAR_4);

      FUNC_7 (VAR_4, VAR_0, "`}'");
    }

  else
    {
      bool VAR_6;

      VAR_6
 = VAR_4->in_unbraced_linkage_specification_p;
      VAR_4->in_unbraced_linkage_specification_p = 1;
      FUNC_4 (VAR_4);
      VAR_4->in_unbraced_linkage_specification_p
 = VAR_6;
    }


  FUNC_11 ();
}
