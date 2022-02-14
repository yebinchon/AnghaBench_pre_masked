
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int c_parser ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int keyword; scalar_t__ id_kind; int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,scalar_t__,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_12 (c_parser *VAR_9)
{
  tree VAR_10 = VAR_6;
  while (FUNC_4 (VAR_9, VAR_7))
    {


      VAR_8 = 0;
      FUNC_1 (VAR_9);
      if (!FUNC_8 (VAR_9, VAR_4, "expected %<(%>"))
 {
   VAR_8 = 1;
   return VAR_10;
 }
      if (!FUNC_8 (VAR_9, VAR_4, "expected %<(%>"))
 {
   VAR_8 = 1;
   FUNC_9 (VAR_9, VAR_0, ((void*)0));
   return VAR_10;
 }

      while (FUNC_3 (VAR_9, VAR_1)
      || FUNC_3 (VAR_9, VAR_3)
      || FUNC_3 (VAR_9, VAR_2))
 {
   tree VAR_11, VAR_12, VAR_13;
   if (FUNC_3 (VAR_9, VAR_1))
     {
       FUNC_1 (VAR_9);
       continue;
     }
   if (FUNC_3 (VAR_9, VAR_2))
     {


       bool VAR_14;
       switch (FUNC_7 (VAR_9)->keyword)
  {
  case 133:
  case 130:
  case 138:
  case 147:
  case 142:
  case 137:
  case 131:
  case 135:
  case 140:
  case 128:
  case 134:
  case 151:
  case 136:
  case 148:
  case 132:
  case 139:
  case 149:
  case 141:
  case 143:
  case 129:
  case 145:
  case 144:
  case 146:
  case 150:
    VAR_14 = 1;
    break;
  default:
    VAR_14 = 0;
    break;
  }
       if (!VAR_14)
  break;
     }
   VAR_12 = FUNC_7 (VAR_9)->value;
   FUNC_1 (VAR_9);
   if (FUNC_5 (VAR_9, VAR_4))
     {
       VAR_11 = FUNC_0 (VAR_12, VAR_6);
       VAR_10 = FUNC_10 (VAR_10, VAR_11);
       continue;
     }
   FUNC_1 (VAR_9);




   if (FUNC_3 (VAR_9, VAR_3)
       && FUNC_7 (VAR_9)->id_kind == VAR_5
       && ((FUNC_6 (VAR_9)->type == VAR_1)
    || (FUNC_6 (VAR_9)->type
        == VAR_0)))
     {
       tree VAR_15 = FUNC_7 (VAR_9)->value;
       FUNC_1 (VAR_9);
       if (FUNC_3 (VAR_9, VAR_0))
  VAR_13 = FUNC_0 (VAR_6, VAR_15);
       else
  {
    FUNC_1 (VAR_9);
    VAR_13 = FUNC_11 (VAR_6, VAR_15,
      FUNC_2 (VAR_9, 0));
  }
     }
   else
     {
       if (FUNC_3 (VAR_9, VAR_0))
  VAR_13 = VAR_6;
       else
  VAR_13 = FUNC_2 (VAR_9, 0);
     }
   VAR_11 = FUNC_0 (VAR_12, VAR_13);
   if (FUNC_3 (VAR_9, VAR_0))
     FUNC_1 (VAR_9);
   else
     {
       VAR_8 = 1;
       FUNC_9 (VAR_9, VAR_0,
      "expected %<)%>");
       return VAR_10;
     }
   VAR_10 = FUNC_10 (VAR_10, VAR_11);
 }
      if (FUNC_3 (VAR_9, VAR_0))
 FUNC_1 (VAR_9);
      else
 {
   VAR_8 = 1;
   FUNC_9 (VAR_9, VAR_0,
         "expected %<)%>");
   return VAR_10;
 }
      if (FUNC_3 (VAR_9, VAR_0))
 FUNC_1 (VAR_9);
      else
 {
   VAR_8 = 1;
   FUNC_9 (VAR_9, VAR_0,
         "expected %<)%>");
   return VAR_10;
 }
      VAR_8 = 1;
    }
  return VAR_10;
}
