
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_parser ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_4__ {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 TYPE_3__ FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*) ;
 TYPE_1__ FUNC_11 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_12 (c_parser *VAR_12)
{
  tree VAR_13, VAR_14;
  tree VAR_15;
  enum tree_code VAR_16;

  FUNC_9 (VAR_12);

  VAR_13 = FUNC_11 (VAR_12).value;
  switch (FUNC_0 (VAR_13))
    {
    case 132:
    saw_error:
      FUNC_8 (VAR_12);
      return;

    case 128:
    case 130:
      VAR_13 = FUNC_1 (VAR_13, 0);
      VAR_16 = VAR_7;
      VAR_14 = VAR_11;
      break;

    case 129:
    case 131:
      VAR_13 = FUNC_1 (VAR_13, 0);
      VAR_16 = VAR_5;
      VAR_14 = VAR_11;
      break;

    default:
      switch (FUNC_7 (VAR_12)->type)
 {
 case 137:
   VAR_16 = VAR_6;
   break;
 case 140:
   VAR_16 = VAR_9;
   break;
 case 135:
   VAR_16 = VAR_7;
   break;
 case 138:
   VAR_16 = VAR_5;
   break;
 case 139:
   VAR_16 = VAR_4;
   break;
 case 134:
   VAR_16 = VAR_8;
   break;
 case 141:
   VAR_16 = VAR_0;
   break;
 case 136:
   VAR_16 = VAR_1;
   break;
 case 133:
   VAR_16 = VAR_2;
   break;
 default:
   FUNC_5 (VAR_12,
     "invalid operator for %<#pragma omp atomic%>");
   goto saw_error;
 }

      FUNC_4 (VAR_12);
      VAR_14 = FUNC_6 (VAR_12).value;
      break;
    }
  VAR_15 = FUNC_3 (VAR_16, VAR_13, VAR_14);
  if (VAR_15 != VAR_10)
    FUNC_2 (VAR_15);
  FUNC_10 (VAR_12, VAR_3, "expected %<;%>");
}
