
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree ;
struct TYPE_8__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;
 int VAR_4 ;

__attribute__((used)) static tree
FUNC_8 (cp_parser* VAR_5)
{
  bool VAR_6;
  bool VAR_7;
  tree VAR_8;


  VAR_6
    = (FUNC_2 (VAR_5,
                                 0)
       != VAR_2);

  FUNC_5 (VAR_5, VAR_3, "`delete'");

  if (FUNC_1 (VAR_5->lexer, VAR_1))
    {

      FUNC_0 (VAR_5->lexer);

      FUNC_4 (VAR_5, VAR_0, "`]'");

      VAR_7 = 1;
    }
  else
    VAR_7 = 0;


  VAR_8 = FUNC_6 (VAR_5);



  if (FUNC_3 (VAR_5, "`delete'"))
    return VAR_4;

  return FUNC_7 (VAR_8, VAR_2, VAR_7, VAR_6);
}
