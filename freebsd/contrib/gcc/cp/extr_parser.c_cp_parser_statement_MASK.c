
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
typedef enum rid { ____Placeholder_rid } rid ;
struct TYPE_19__ {scalar_t__ type; int keyword; int location; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_20__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int ,int) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_19 (cp_parser* VAR_10, tree VAR_11,
       bool VAR_12, bool *VAR_13)
{
  tree VAR_14;
  cp_token *VAR_15;
  location_t VAR_16;

 restart:
  if (VAR_13 != ((void*)0))
    *VAR_13 = 0;

  VAR_14 = VAR_7;

  VAR_15 = FUNC_5 (VAR_10->lexer);

  VAR_16 = VAR_15->location;


  if (VAR_15->type == VAR_2)
    {
      enum rid VAR_17 = VAR_15->keyword;

      switch (VAR_17)
 {
 case 138:
 case 136:



   FUNC_12 (VAR_10);
   goto restart;

 case 132:
 case 130:
   VAR_14 = FUNC_17 (VAR_10, VAR_13);
   break;

 case 128:
 case 135:
 case 134:
   VAR_14 = FUNC_10 (VAR_10);
   break;

 case 139:
 case 137:
 case 131:
 case 133:
   VAR_14 = FUNC_11 (VAR_10);
   break;


 case 140:
 case 144:
 case 143:
 case 142:
 case 141:
   VAR_14 = FUNC_13 (VAR_10);
   break;

 case 129:
   VAR_14 = FUNC_18 (VAR_10);
   break;

 default:


   break;
 }
    }
  else if (VAR_15->type == VAR_3)
    {


      VAR_15 = FUNC_4 (VAR_10->lexer, 2);
      if (VAR_15->type == VAR_0)
 {



   FUNC_12 (VAR_10);
   goto restart;
 }
    }

  else if (VAR_15->type == VAR_4)

    VAR_14 = FUNC_6 (VAR_10, ((void*)0), 0, 0);


  else if (VAR_15->type == VAR_5)
    {





      if (VAR_12)
 FUNC_16 (VAR_10, VAR_8);
      else if (!FUNC_16 (VAR_10, VAR_9))
 goto restart;
      return;
    }
  else if (VAR_15->type == VAR_1)
    {
      FUNC_8 (VAR_10, "expected statement");
      return;
    }





  if (!VAR_14)
    {
      if (FUNC_3 (VAR_10->lexer, VAR_6))
 {
   FUNC_15 (VAR_10);

   FUNC_7 (VAR_10);

   if (FUNC_14 (VAR_10))
     return;
 }

      VAR_14 = FUNC_9 (VAR_10, VAR_11);
    }


  if (VAR_14 && FUNC_1 (FUNC_2 (VAR_14)))
    FUNC_0 (VAR_14, VAR_16);
}
