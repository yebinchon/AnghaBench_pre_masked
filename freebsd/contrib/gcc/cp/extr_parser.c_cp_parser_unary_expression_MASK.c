
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_19__ {scalar_t__ type; int keyword; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_20__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_18__ {int keyword; } ;



 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;







 int VAR_9 ;

 int FUNC_0 (int ) ;

 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_16__* FUNC_5 (int ,int) ;
 TYPE_1__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,char const*) ;
 int FUNC_14 (TYPE_2__*,int,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int,int) ;
 int VAR_10 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int,int ) ;
 int FUNC_22 () ;
 int VAR_11 ;

__attribute__((used)) static tree
FUNC_23 (cp_parser *VAR_12, bool VAR_13, bool VAR_14)
{
  cp_token *VAR_15;
  enum tree_code VAR_16;


  VAR_15 = FUNC_6 (VAR_12->lexer);

  if (VAR_15->type == VAR_2)
    {
      enum rid VAR_17 = VAR_15->keyword;

      switch (VAR_17)
 {
 case 136:
 case 130:
   {
     tree VAR_18;
     enum tree_code VAR_19;

     VAR_19 = VAR_17 == 136 ? VAR_0 : VAR_9;

     FUNC_3 (VAR_12->lexer);

     VAR_18 = FUNC_16 (VAR_12, VAR_17);

     if (FUNC_0 (VAR_18))
       return FUNC_19 (VAR_18, VAR_19, 1);
     else
       return FUNC_18 (VAR_18, VAR_19);
   }

 case 132:
   return FUNC_12 (VAR_12);

 case 135:
   return FUNC_9 (VAR_12);

 case 134:
   {

     int VAR_20;
     tree VAR_21;


     FUNC_10 (VAR_12, &VAR_20);

     VAR_21 = FUNC_15 (VAR_12);

     VAR_11 = VAR_20;

     return VAR_21;
   }

 case 131:
 case 133:
   {
     tree VAR_22;


     FUNC_3 (VAR_12->lexer);

     VAR_22 = FUNC_15 (VAR_12);

     return FUNC_2 ((VAR_17 == 131
          ? VAR_8 : VAR_7),
         VAR_22);
   }
   break;

 default:
   break;
 }
    }





  if (FUNC_4 (VAR_12->lexer, VAR_5))
    {
      enum rid VAR_23;



      VAR_23 = FUNC_5 (VAR_12->lexer, 2)->keyword;

      if (VAR_23 == 132)
 return FUNC_12 (VAR_12);

      else if (VAR_23 == 135)
 return FUNC_9 (VAR_12);
    }


  VAR_16 = FUNC_17 (VAR_15);


  if (VAR_16 == VAR_6)
    {
      if (VAR_15->type == VAR_4)
 VAR_16 = 137;
      else if (VAR_15->type == VAR_3)
 VAR_16 = 138;

      else if (FUNC_7 (VAR_12)
        && VAR_15->type == VAR_1)
 {
   tree VAR_24;


   FUNC_3 (VAR_12->lexer);

   VAR_24 = FUNC_11 (VAR_12);

   return FUNC_20 (VAR_24);
 }
    }
  if (VAR_16 != VAR_6)
    {
      tree VAR_25;
      tree VAR_26 = VAR_10;
      const char *VAR_27 = ((void*)0);


      VAR_15 = FUNC_3 (VAR_12->lexer);

      VAR_25
 = FUNC_8 (VAR_12,
         VAR_16 == 142,
                    0);

      switch (VAR_16)
 {
 case 140:
   VAR_27 = "`*'";
   VAR_26 = FUNC_1 (VAR_25, "unary *");
   break;

 case 142:
   VAR_27 = "`&'";

 case 141:
   VAR_26 = FUNC_2 (VAR_16, VAR_25);
   break;

 case 137:
 case 138:
   VAR_27 = (VAR_16 == 137
       ? "`++'" : "`--'");

 case 128:
 case 139:
 case 129:
   VAR_26 = FUNC_21 (VAR_16, VAR_25);
   break;

 default:
   FUNC_22 ();
 }

      if (VAR_27
   && FUNC_13 (VAR_12,
        VAR_27))
 VAR_26 = VAR_10;

      return VAR_26;
    }

  return FUNC_14 (VAR_12, VAR_13, VAR_14);
}
