
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_13__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_17 (cp_parser* VAR_6)
{
  tree VAR_7;
  tree VAR_8;
  tree VAR_9;



  FUNC_9 (VAR_6);





  FUNC_0 (VAR_6->lexer);

  VAR_9 = FUNC_4 (VAR_6);

  if (FUNC_1 (VAR_6->lexer, VAR_2))
    VAR_7 = FUNC_7 (VAR_6);
  else
    VAR_7 = FUNC_15 ();


  if (!FUNC_1 (VAR_6->lexer, VAR_3))
    FUNC_11 (VAR_6);

  if (!FUNC_8 (VAR_6))
    return VAR_4;


  if (!FUNC_5 (VAR_6))
    VAR_8 = VAR_5;
  else



    VAR_8 = FUNC_16 (VAR_7);


  FUNC_0 (VAR_6->lexer);

  if (VAR_8 == VAR_5)
    {
      FUNC_12 (VAR_6);
      return VAR_5;
    }


  if (FUNC_2 (VAR_6->lexer, VAR_1))
    FUNC_6 (VAR_6, VAR_8);


  FUNC_10 (VAR_6, VAR_1, "`}'");



  if (FUNC_3 (VAR_6))
    {
      tree VAR_10 = FUNC_4 (VAR_6);
      FUNC_13 (&VAR_8,
        VAR_10,
        (int) VAR_0);
    }


  FUNC_14 (VAR_8);

  return VAR_8;
}
