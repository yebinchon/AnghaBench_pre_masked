
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_14__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,char*) ;
 int FUNC_12 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_15 (char*) ;

__attribute__((used)) static tree
FUNC_16 (cp_parser* VAR_6)
{
  bool VAR_7;
  tree VAR_8;
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;


  VAR_7
    = (FUNC_4 (VAR_6,
                                 0)
       != VAR_3);

  FUNC_12 (VAR_6, VAR_4, "`new'");


  FUNC_10 (VAR_6);

  VAR_8 = FUNC_6 (VAR_6);

  if (!FUNC_9 (VAR_6))
    VAR_8 = VAR_3;



  if (FUNC_2 (VAR_6->lexer, VAR_1))
    {

      FUNC_1 (VAR_6->lexer);

      VAR_9 = FUNC_13 (VAR_6);

      FUNC_11 (VAR_6, VAR_0, "`)'");



      if (FUNC_2 (VAR_6->lexer, VAR_2))
 {
   FUNC_14 ("array bound forbidden after parenthesized type-id");
   FUNC_15 ("try removing the parentheses around the type-id");
   FUNC_3 (VAR_6);
 }
      VAR_11 = VAR_3;
    }

  else
    VAR_9 = FUNC_7 (VAR_6, &VAR_11);


  if (FUNC_2 (VAR_6->lexer, VAR_1))
    VAR_10 = FUNC_5 (VAR_6);
  else
    VAR_10 = VAR_3;



  if (FUNC_8 (VAR_6, "`new'"))
    return VAR_5;


  return FUNC_0 (VAR_8, VAR_9, VAR_11, VAR_10, VAR_7);
}
