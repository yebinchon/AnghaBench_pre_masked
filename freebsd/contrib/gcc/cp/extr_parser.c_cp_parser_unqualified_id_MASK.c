
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef char* tree ;
struct TYPE_18__ {int value; } ;
struct TYPE_19__ {int type; int keyword; TYPE_1__ u; } ;
typedef TYPE_2__ cp_token ;
struct TYPE_20__ {char* scope; char* object_scope; char* qualifying_scope; int lexer; } ;
typedef TYPE_3__ cp_parser ;
struct TYPE_17__ {int type; } ;


 int VAR_0 ;



 int VAR_1 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int const) ;
 TYPE_16__* FUNC_10 (int ,int) ;
 TYPE_2__* FUNC_11 (int ) ;
 char* FUNC_12 (TYPE_3__*,int,int,int ,int,int,int) ;
 char* FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,char*) ;
 char* FUNC_15 (TYPE_3__*) ;
 char* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 char* FUNC_20 (TYPE_3__*,int,int,int) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (char*,char*,...) ;
 char* VAR_5 ;
 int FUNC_23 (int) ;
 int VAR_6 ;

__attribute__((used)) static tree
FUNC_24 (cp_parser* VAR_7,
     bool VAR_8,
     bool VAR_9,
     bool VAR_10,
     bool VAR_11)
{
  cp_token *VAR_12;


  VAR_12 = FUNC_11 (VAR_7->lexer);

  switch (VAR_12->type)
    {
    case 129:
      {
 tree VAR_13;



 FUNC_18 (VAR_7);

 VAR_13 = FUNC_20 (VAR_7, VAR_8,
        VAR_9,
        VAR_10);

 if (FUNC_17 (VAR_7))
   return VAR_13;

 return FUNC_15 (VAR_7);
      }

    case 128:
      return FUNC_20 (VAR_7, VAR_8,
        VAR_9,
        VAR_10);

    case 131:
      {
 tree VAR_14;
 tree VAR_15;
 tree VAR_16;
 tree VAR_17;
 bool VAR_18;


 FUNC_8 (VAR_7->lexer);
 VAR_17 = VAR_7->scope;
 VAR_16 = VAR_7->object_scope;
 VAR_15 = VAR_7->qualifying_scope;


 if (VAR_17 == VAR_5)
   {
     if (FUNC_9 (VAR_7->lexer, 129))
       FUNC_8 (VAR_7->lexer);
     return VAR_5;
   }
 if (VAR_17 && FUNC_2 (VAR_17) == VAR_2)
   {
     if (!FUNC_21 (VAR_7))
       FUNC_22 ("scope %qT before %<~%> is not a class-name", VAR_17);
     FUNC_19 (VAR_7);
     if (FUNC_9 (VAR_7->lexer, 129))
       FUNC_8 (VAR_7->lexer);
     return VAR_5;
   }
 FUNC_23 (!VAR_17 || FUNC_4 (VAR_17));


 VAR_12 = FUNC_11 (VAR_7->lexer);
 if (VAR_17
     && VAR_12->type == 129
     && (FUNC_10 (VAR_7->lexer, 2)->type
  == VAR_1)
     && FUNC_7 (VAR_12->u.value, VAR_17))
   {
     FUNC_8 (VAR_7->lexer);
     return FUNC_5 (VAR_0, VAR_17);
   }



 VAR_18 = 0;
 VAR_14 = VAR_3;
 if (VAR_17)
   {
     FUNC_18 (VAR_7);
     VAR_14 = FUNC_12 (VAR_7,
                                  0,
                                  0,
           VAR_6,
                                0,
                            0,
           VAR_10);
     if (FUNC_17 (VAR_7))
       VAR_18 = 1;
   }

 if (!VAR_18 && VAR_17 && VAR_15)
   {
     FUNC_18 (VAR_7);
     VAR_7->scope = VAR_15;
     VAR_7->object_scope = VAR_3;
     VAR_7->qualifying_scope = VAR_3;
     VAR_14
       = FUNC_12 (VAR_7,
                                 0,
                                 0,
          VAR_6,
                               0,
                           0,
          VAR_10);
     if (FUNC_17 (VAR_7))
       VAR_18 = 1;
   }

 else if (!VAR_18 && VAR_16)
   {
     FUNC_18 (VAR_7);
     VAR_7->scope = VAR_16;
     VAR_7->object_scope = VAR_3;
     VAR_7->qualifying_scope = VAR_3;
     VAR_14
       = FUNC_12 (VAR_7,
                                 0,
                                 0,
          VAR_6,
                               0,
                           0,
          VAR_10);
     if (FUNC_17 (VAR_7))
       VAR_18 = 1;
   }

 if (!VAR_18)
   {
     VAR_7->scope = VAR_3;
     VAR_7->object_scope = VAR_3;
     VAR_7->qualifying_scope = VAR_3;
     VAR_14
       = FUNC_12 (VAR_7,
                                 0,
                                 0,
          VAR_6,
                               0,
                           0,
          VAR_10);
   }




 if (VAR_14 == VAR_5 && VAR_17)
   return FUNC_5 (VAR_0, VAR_17);
 else if (VAR_14 == VAR_5)
   return VAR_5;


 if (VAR_10 && VAR_17 && !FUNC_6 (VAR_17, VAR_14))
   {
     if (!FUNC_21 (VAR_7))
       FUNC_22 ("declaration of %<~%T%> as member of %qT",
       VAR_14, VAR_17);
     FUNC_19 (VAR_7);
     return VAR_5;
   }





 if (VAR_10
     && !FUNC_0 (VAR_14)
     && !FUNC_1 (VAR_14)
     && !FUNC_21 (VAR_7))
   FUNC_22 ("typedef-name %qD used as destructor declarator",
   VAR_14);

 return FUNC_5 (VAR_0, FUNC_3 (VAR_14));
      }

    case 130:
      if (VAR_12->keyword == VAR_4)
 {
   tree VAR_19;


   FUNC_18 (VAR_7);

   VAR_19 = FUNC_20 (VAR_7, VAR_8,
                                 1,
          VAR_10);

   if (FUNC_17 (VAR_7))
     return VAR_19;


   FUNC_18 (VAR_7);

   VAR_19 = FUNC_16 (VAR_7);

   if (!FUNC_17 (VAR_7))
     VAR_19 = FUNC_13 (VAR_7);

   return VAR_19;
 }


    default:
      if (VAR_11)
 return VAR_3;
      FUNC_14 (VAR_7, "expected unqualified-id");
      return VAR_5;
    }
}
