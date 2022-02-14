
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_14__ {char* type_definition_forbidden_message; } ;
typedef TYPE_1__ cp_parser ;
typedef int cp_declarator ;
typedef int cp_decl_specifier_seq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int*) ;
 int * FUNC_6 (TYPE_1__*,int ,int *,int *,int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,char*) ;
 int FUNC_12 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int *,int *,int,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static tree
FUNC_16 (cp_parser* VAR_4)
{
  cp_decl_specifier_seq VAR_5;
  const char *VAR_6;


  FUNC_10 (VAR_4);


  VAR_6 = VAR_4->type_definition_forbidden_message;
  VAR_4->type_definition_forbidden_message
    = "types may not be defined in conditions";

  FUNC_12 (VAR_4, 1,
    &VAR_5);

  VAR_4->type_definition_forbidden_message = VAR_6;

  if (!FUNC_7 (VAR_4))
    {
      tree VAR_7;
      tree VAR_8;
      tree VAR_9;
      cp_declarator *VAR_10;
      tree VAR_11 = VAR_3;


      VAR_10 = FUNC_6 (VAR_4, VAR_1,
                              ((void*)0),
                          ((void*)0),
                   0);

      VAR_9 = FUNC_4 (VAR_4);

      VAR_8 = FUNC_3 (VAR_4);







      FUNC_11 (VAR_4, VAR_0, "`='");


      if (FUNC_9 (VAR_4))
 {
   tree VAR_12;
   bool VAR_13;


   VAR_7 = FUNC_15 (VAR_10, &VAR_5,
                          1,
        VAR_9, VAR_3,
        &VAR_12);

   VAR_11
     = FUNC_5 (VAR_4,
                                   1,
          &VAR_13);
   if (!VAR_13)
     VAR_11 = FUNC_13 (VAR_11);


   FUNC_1 (VAR_7,
     VAR_11, !VAR_13,
     VAR_8,
     VAR_2);

   if (VAR_12)
     FUNC_14 (VAR_12);

   return FUNC_0 (VAR_7);
 }
    }


  else
    FUNC_2 (VAR_4);


  return FUNC_8 (VAR_4, 0);
}
