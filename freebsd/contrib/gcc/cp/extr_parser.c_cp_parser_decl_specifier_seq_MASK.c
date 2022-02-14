
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_18__ {int keyword; } ;
typedef TYPE_1__ cp_token ;
typedef int cp_parser_flags ;
struct TYPE_19__ {int lexer; int in_declarator_p; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_20__ {scalar_t__* specs; int conflicting_specifiers_p; int any_specifiers_p; int storage_class; int attributes; } ;
typedef TYPE_3__ cp_decl_specifier_seq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ,TYPE_3__*,int,int*,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (char*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_14 (cp_parser* VAR_7,
         cp_parser_flags VAR_8,
         cp_decl_specifier_seq *VAR_9,
         int* VAR_10)
{
  bool VAR_11 = !VAR_7->in_declarator_p;


  FUNC_2 (VAR_9);


  *VAR_10 = 0;


  while (1)
    {
      bool VAR_12;
      bool VAR_13;
      cp_token *VAR_14;


      VAR_14 = FUNC_4 (VAR_7->lexer);

      if (VAR_14->keyword == VAR_2)
 {

   VAR_9->attributes
     = FUNC_1 (VAR_9->attributes,
         FUNC_6 (VAR_7));
   continue;
 }

      VAR_13 = 1;


      switch (VAR_14->keyword)
 {


 case 135:
   if (!FUNC_0 ())
     {
       FUNC_13 ("%<friend%> used outside of class");
       FUNC_5 (VAR_7->lexer);
     }
   else
     {
       ++VAR_9->specs[(int) VAR_3];

       FUNC_3 (VAR_7->lexer);
     }
   break;





 case 134:
 case 128:
 case 137:
   FUNC_10 (VAR_7, VAR_9);
   break;



 case 129:
   ++VAR_9->specs[(int) VAR_5];

   FUNC_3 (VAR_7->lexer);

   VAR_11 = 0;


   FUNC_8 (VAR_7);

          if (VAR_9->storage_class != VAR_6)
            VAR_9->conflicting_specifiers_p = 1;
   break;
 case 138:
 case 132:
 case 131:
 case 136:
 case 133:

   FUNC_3 (VAR_7->lexer);
   FUNC_11 (VAR_7, VAR_9, VAR_14->keyword);
   break;
 case 130:

   FUNC_3 (VAR_7->lexer);
   ++VAR_9->specs[(int) VAR_4];
   break;

 default:

   VAR_13 = 0;
   break;
 }



      VAR_12
 = (!VAR_13
    && VAR_11
    && (FUNC_9
        (VAR_7, VAR_9->specs[(int) VAR_3] != 0)));



      if (!VAR_13 && !VAR_12)
 {
   int VAR_15;
   bool VAR_16;
   tree VAR_17;

   VAR_17
     = FUNC_12 (VAR_7, VAR_8,
     VAR_9,
                        1,
     &VAR_15,
     &VAR_16);

   *VAR_10 |= VAR_15;
   if (VAR_17 && !VAR_16)
     VAR_8 |= VAR_0;

   if (VAR_17)
     {
       VAR_11 = 0;
       VAR_13 = 1;
     }
 }



      if (!VAR_13)
 break;

      VAR_9->any_specifiers_p = 1;


      VAR_8 |= VAR_1;
    }

  FUNC_7 (VAR_9);


  if (VAR_9->specs[(int) VAR_3] != 0
      && (*VAR_10 & 2))
    FUNC_13 ("class definition may not be declared a friend");
}
