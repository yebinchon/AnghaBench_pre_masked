
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int location_t ;
typedef int c_parser ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_4__ {int type; int value; int keyword; int location; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 TYPE_3__ FUNC_17 (int *) ;
 TYPE_2__ FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 TYPE_1__* FUNC_24 (int *) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int const,char*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int VAR_7 ;
 int FUNC_29 (char*) ;
 int FUNC_30 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_31 (scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_32 (c_parser *VAR_10)
{
  location_t VAR_11 = FUNC_24 (VAR_10)->location;
  tree VAR_12 = VAR_4;
  switch (FUNC_24 (VAR_10)->type)
    {
    case 143:
      FUNC_5 (FUNC_13 (VAR_10));
      break;
    case 144:
      switch (FUNC_24 (VAR_10)->keyword)
 {
 case 131:
   FUNC_20 (VAR_10);
   break;
 case 129:
   FUNC_27 (VAR_10);
   break;
 case 128:
   FUNC_28 (VAR_10);
   break;
 case 134:
   FUNC_15 (VAR_10);
   break;
 case 133:
   FUNC_19 (VAR_10);
   break;
 case 132:

    if (VAR_7)
      FUNC_29 ("goto not allowed in block literal");

   FUNC_14 (VAR_10);
   if (FUNC_21 (VAR_10, VAR_2))
     {
       VAR_12 = FUNC_9 (FUNC_24 (VAR_10)->value);
       FUNC_14 (VAR_10);
     }
   else if (FUNC_21 (VAR_10, VAR_1))
     {
       FUNC_14 (VAR_10);
       VAR_12 = FUNC_10 (FUNC_17 (VAR_10).value);
     }
   else
     FUNC_16 (VAR_10, "expected identifier or %<*%>");
   goto expect_semicolon;
 case 135:
   FUNC_14 (VAR_10);
   VAR_12 = FUNC_7 (&VAR_6, 0);
   goto expect_semicolon;
 case 136:
   FUNC_14 (VAR_10);
   VAR_12 = FUNC_7 (&VAR_5, 1);
   goto expect_semicolon;
 case 130:
   FUNC_14 (VAR_10);
   if (FUNC_21 (VAR_10, 141))
     {
       VAR_12 = FUNC_11 (VAR_4);
       FUNC_14 (VAR_10);
     }
   else
     {
       VAR_12 = FUNC_11 (FUNC_18 (VAR_10).value);
       goto expect_semicolon;
     }
   break;
 case 140:
   VAR_12 = FUNC_12 (VAR_10);
   break;
 case 138:
   FUNC_30 (FUNC_6 ());
   FUNC_14 (VAR_10);
   if (FUNC_21 (VAR_10, 141))
     {
       VAR_12 = FUNC_31 (VAR_4);
       FUNC_14 (VAR_10);
     }
   else
     {
       VAR_12
  = FUNC_31 (FUNC_17 (VAR_10).value);
       goto expect_semicolon;
     }
   break;
 case 137:
   FUNC_30 (FUNC_6 ());
   FUNC_23 (VAR_10);
   break;
 case 139:
   FUNC_30 (FUNC_6 ());
   FUNC_22 (VAR_10);
   break;
 default:
   goto expr_stmt;
 }
      break;
    case 141:
      FUNC_14 (VAR_10);
      break;
    case 146:
    case 145:




      FUNC_16 (VAR_10, "expected statement");
      FUNC_14 (VAR_10);
      break;
    case 142:
      FUNC_25 (VAR_10, VAR_9);
      break;
    default:
    expr_stmt:
      VAR_12 = FUNC_8 (FUNC_18 (VAR_10).value);
    expect_semicolon:
      FUNC_26 (VAR_10, 141, "expected %<;%>");
      break;
    }
  if (VAR_12 && FUNC_0 (VAR_12))
    {
      if (FUNC_2 (VAR_12) == VAR_3
   && FUNC_2 (FUNC_4 (FUNC_3 (VAR_12, 0))) == VAR_0)
 FUNC_1 (VAR_12, VAR_8);
      else
 FUNC_1 (VAR_12, VAR_11);
    }

}
