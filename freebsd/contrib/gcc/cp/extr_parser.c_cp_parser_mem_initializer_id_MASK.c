
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int tree ;
struct TYPE_10__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int ,int,int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int VAR_2 ;

__attribute__((used)) static tree
FUNC_10 (cp_parser* VAR_3)
{
  bool VAR_4;
  bool VAR_5;
  bool VAR_6 = 0;
  tree VAR_7;


  if (FUNC_1 (VAR_3->lexer, VAR_1))
    {
      FUNC_9 ("keyword %<typename%> not allowed in this context (a qualified "
      "member initializer is implicitly a type)");
      FUNC_0 (VAR_3->lexer);
    }

  VAR_4
    = (FUNC_3 (VAR_3,
                                 0)
       != VAR_0);
  VAR_5
    = (FUNC_5 (VAR_3,
                                1,
                                1,
                    1,
                            1)
       != VAR_0);
  if (VAR_5)
    VAR_6 = FUNC_6 (VAR_3);


  if (VAR_4 || VAR_5)
    return FUNC_2 (VAR_3,
                            1,
                            VAR_6,
     VAR_2,
                            1,
                      0,
                        1);

  FUNC_8 (VAR_3);

  VAR_7 = FUNC_2 (VAR_3,
                               1,
                               0,
        VAR_2,
                               1,
                         0,
                           1);

  if (FUNC_7 (VAR_3))
    return VAR_7;

  return FUNC_4 (VAR_3);
}
