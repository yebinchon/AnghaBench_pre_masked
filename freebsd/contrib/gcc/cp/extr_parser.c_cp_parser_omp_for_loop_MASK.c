
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int * tree ;
typedef int location_t ;
struct TYPE_20__ {int in_statement; int lexer; } ;
typedef TYPE_1__ cp_parser ;
typedef int cp_declarator ;
typedef int cp_decl_specifier_seq ;
struct TYPE_19__ {int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int,int *,int ) ;
 TYPE_18__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*,int) ;
 int * FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (TYPE_1__*,int ,int *,int *,int) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int * FUNC_12 (TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,char*) ;
 int FUNC_16 (TYPE_1__*,int,int,int) ;
 int FUNC_17 (TYPE_1__*,int ,int,int *) ;
 int FUNC_18 (TYPE_1__*,int,int *) ;
 int * FUNC_19 (int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 () ;
 int * FUNC_23 (int *,int *,int,int *,int ,int **) ;

__attribute__((used)) static tree
FUNC_24 (cp_parser *VAR_9)
{
  tree VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  location_t VAR_16;

  if (!FUNC_2 (VAR_9->lexer, VAR_8))
    {
      FUNC_10 (VAR_9, "for statement expected");
      return ((void*)0);
    }
  VAR_16 = FUNC_1 (VAR_9->lexer)->location;
  if (!FUNC_15 (VAR_9, VAR_2, "`('"))
    return ((void*)0);

  VAR_10 = VAR_14 = ((void*)0);
  VAR_15 = FUNC_22 ();
  if (FUNC_3 (VAR_9->lexer, VAR_3))
    {
      cp_decl_specifier_seq VAR_17;




      FUNC_14 (VAR_9);
      FUNC_18 (VAR_9, 0,
        &VAR_17);
      if (!FUNC_11 (VAR_9))
 {
   tree VAR_18, VAR_19;
   cp_declarator *VAR_20;

   VAR_20 = FUNC_9 (VAR_9,
          VAR_4,
                                  ((void*)0),
                              ((void*)0),
                       0);
   VAR_19 = FUNC_7 (VAR_9);
   VAR_18 = FUNC_5 (VAR_9);

   FUNC_15 (VAR_9, VAR_1, "`='");
   if (FUNC_13 (VAR_9))
     {
       tree VAR_21;

       VAR_14 = FUNC_23 (VAR_20, &VAR_17,
                       0, VAR_19,
                           VAR_7,
     &VAR_21);

       VAR_10 = FUNC_6 (VAR_9, 0);

       FUNC_0 (VAR_14, VAR_7, 0,
         VAR_18, VAR_6);

       if (VAR_21)
  FUNC_20 (VAR_21);
     }
 }
      else
 FUNC_4 (VAR_9);



      if (VAR_14 == ((void*)0))
 VAR_10 = FUNC_12 (VAR_9, 0);
    }
  FUNC_15 (VAR_9, VAR_3, "`;'");
  VAR_15 = FUNC_21 (VAR_15);

  VAR_11 = ((void*)0);
  if (FUNC_3 (VAR_9->lexer, VAR_3))
    VAR_11 = FUNC_8 (VAR_9);
  FUNC_15 (VAR_9, VAR_3, "`;'");

  VAR_12 = ((void*)0);
  if (FUNC_3 (VAR_9->lexer, VAR_0))
    VAR_12 = FUNC_12 (VAR_9, 0);

  if (!FUNC_15 (VAR_9, VAR_0, "`)'"))
    FUNC_16 (VAR_9, 1,
                     0,
                          1);



  VAR_9->in_statement = VAR_5;



  VAR_13 = FUNC_22 ();
  FUNC_17 (VAR_9, VAR_7, 0, ((void*)0));
  VAR_13 = FUNC_21 (VAR_13);

  return FUNC_19 (VAR_16, VAR_14, VAR_10, VAR_11, VAR_12, VAR_13, VAR_15);
}
