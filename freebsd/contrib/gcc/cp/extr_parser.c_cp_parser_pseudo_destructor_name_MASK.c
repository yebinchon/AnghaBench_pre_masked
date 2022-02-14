
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_10__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;
struct TYPE_11__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 TYPE_9__* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int,int,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_9 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_11 (cp_parser* VAR_5,
      tree* VAR_6,
      tree* VAR_7)
{
  bool VAR_8;


  *VAR_7 = VAR_4;


  FUNC_6 (VAR_5, 1);

  VAR_8
    = (FUNC_7 (VAR_5,
                                0,
                                1,
                    0,
                            1)
       != VAR_2);


  if (VAR_8
      && FUNC_2 (VAR_5->lexer, VAR_3))
    {

      FUNC_1 (VAR_5->lexer);

      FUNC_9 (VAR_5,
                               1,
                               0,
                           1);

      FUNC_8 (VAR_5, VAR_1, "`::'");
    }


  else if (FUNC_3 (VAR_5->lexer, VAR_0))
    {

      *VAR_6 = FUNC_0 (FUNC_10 (VAR_5));

      if (*VAR_6 == VAR_4)
 return;






      if (FUNC_3 (VAR_5->lexer, VAR_1)
   || FUNC_4 (VAR_5->lexer, 2)->type != VAR_0)
 {
   FUNC_5 (VAR_5, "request for member of non-aggregate type");
   return;
 }


      FUNC_8 (VAR_5, VAR_1, "`::'");
    }
  else
    *VAR_6 = VAR_2;


  FUNC_8 (VAR_5, VAR_0, "`~'");


  *VAR_7 = FUNC_10 (VAR_5);
}
