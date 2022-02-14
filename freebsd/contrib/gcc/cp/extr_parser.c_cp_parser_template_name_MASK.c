
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ cp_token_position ;
struct TYPE_13__ {scalar_t__ scope; int lexer; } ;
typedef TYPE_1__ cp_parser ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,scalar_t__,int ,int,int,int,int *) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 int FUNC_25 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static tree
FUNC_29 (cp_parser* VAR_7,
    bool VAR_8,
    bool VAR_9,
    bool VAR_10,
    bool *VAR_11)
{
  tree VAR_12;
  tree VAR_13;
  tree VAR_14;



  if (FUNC_11 (VAR_7->lexer, VAR_2))
    {


      FUNC_21 (VAR_7);

      VAR_12 = FUNC_19 (VAR_7);

      if (!FUNC_20 (VAR_7))
 {
   FUNC_15 (VAR_7, "expected template-name");
   return VAR_4;
 }
    }

  else
    VAR_12 = FUNC_16 (VAR_7);


  if (VAR_12 == VAR_4)
    return VAR_4;
  if (VAR_6
      && FUNC_18 (VAR_7, 1))
    {







      if (VAR_10
   && !VAR_8
   && VAR_7->scope && FUNC_8 (VAR_7->scope)
   && VAR_9
   && FUNC_24 (VAR_7->scope)


   && !FUNC_9 (VAR_12, VAR_7->scope))
 {
   cp_token_position VAR_15 = 0;


   FUNC_25 ("non-template %qD used as template", VAR_12);
   FUNC_27 ("use %<%T::template %D%> to indicate that it is a template",
    VAR_7->scope, VAR_12);

   if (FUNC_22 (VAR_7))
     VAR_15 = FUNC_13 (VAR_7->lexer, 1);


   FUNC_10 (VAR_7->lexer);
   FUNC_14 (VAR_7);


   FUNC_23 (VAR_7,
                      1,
                    1,
                         0);




   if (VAR_15)
     FUNC_12 (VAR_7->lexer, VAR_15);
   if (VAR_11)
     *VAR_11 = 1;
   return VAR_12;
 }





      if (VAR_8
   && (!VAR_7->scope
       || (FUNC_8 (VAR_7->scope)
    && FUNC_24 (VAR_7->scope))))
 return VAR_12;
    }


  VAR_13 = FUNC_17 (VAR_7, VAR_12,
    VAR_5,
                    0,
                     0,
    VAR_9,
                        ((void*)0));
  VAR_13 = FUNC_28 (VAR_13);


  if (FUNC_7 (VAR_13) == VAR_3)
    ;
  else
    {
      tree VAR_16 = VAR_0;






      VAR_14 = FUNC_1 (VAR_13) ? FUNC_0 (VAR_13) : VAR_13;
      if (FUNC_7 (VAR_14) == VAR_1)
 for (VAR_16 = VAR_14; VAR_16; VAR_16 = FUNC_6 (VAR_16))
   if (FUNC_7 (FUNC_5 (VAR_16)) == VAR_3)
     break;

      if (!VAR_16)
 {

   FUNC_15 (VAR_7, "expected template-name");
   return VAR_4;
 }
    }



  if (FUNC_3 (VAR_13) || !FUNC_4 (VAR_13))
    {
      tree VAR_17 = FUNC_2 (FUNC_26 (VAR_13));
      if (FUNC_8 (VAR_17) && FUNC_24 (VAR_17))
 return VAR_12;
    }

  return VAR_13;
}
