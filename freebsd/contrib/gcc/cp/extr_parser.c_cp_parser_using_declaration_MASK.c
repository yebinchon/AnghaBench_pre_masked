
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_17__ {scalar_t__ keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_18__ {int scope; int lexer; } ;
typedef TYPE_2__ cp_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int,int,int,int) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int,int,int,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ,char*) ;
 int FUNC_15 (TYPE_2__*,int ,char*) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int,int,int,int) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_22 (scalar_t__) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static bool
FUNC_23 (cp_parser* VAR_8,
        bool VAR_9)
{
  cp_token *VAR_10;
  bool VAR_11 = 0;
  bool VAR_12;
  tree VAR_13;
  tree VAR_14;
  tree VAR_15;

  if (VAR_9)
    FUNC_13 (VAR_8);
  else
    {

      FUNC_15 (VAR_8, VAR_5, "`using'");


      VAR_10 = FUNC_5 (VAR_8->lexer);

      if (VAR_10->keyword == VAR_4)
 {

   VAR_11 = 1;

   FUNC_3 (VAR_8->lexer);
 }
    }


  VAR_12
    = (FUNC_7 (VAR_8,
                                 0)
       != VAR_3);



  if (VAR_11 || !VAR_12)
    VAR_15 = FUNC_10 (VAR_8, VAR_11,
                                  1,
                      0,
                              1);


  else
    VAR_15 = FUNC_11 (VAR_8,
                               0,
                               1,
                   0,
                           1);
  if (!VAR_15)
    VAR_15 = VAR_7;

  if (VAR_9 && FUNC_6 (VAR_8))



    return FUNC_12 (VAR_8);


  VAR_14 = FUNC_17 (VAR_8,
                             0,
                             1,
                       1,
                     0);

  if (VAR_9)
    {
      if (FUNC_4 (VAR_8->lexer, VAR_1))
 FUNC_16 (VAR_8);
      if (!FUNC_12 (VAR_8))
 return 0;
    }



  if (VAR_15 == VAR_6 || VAR_14 == VAR_6)
    ;
  else if (FUNC_0 (VAR_14) != VAR_2
    && FUNC_0 (VAR_14) != VAR_0)



    FUNC_21 ("a template-id may not appear in a using-declaration");
  else
    {
      if (FUNC_1 ())
 {

   VAR_13 = FUNC_18 (VAR_8->scope, VAR_14);

   FUNC_22 (VAR_13);
 }
      else
 {
   VAR_13 = FUNC_8 (VAR_8, VAR_14);
   if (VAR_13 == VAR_6)
     FUNC_9 (VAR_8, VAR_14, VAR_13, ((void*)0));
   else if (!FUNC_2 ())
     FUNC_19 (VAR_13, VAR_15, VAR_14);
   else
     FUNC_20 (VAR_13, VAR_15, VAR_14);
 }
    }


  FUNC_14 (VAR_8, VAR_1, "`;'");

  return 1;
}
