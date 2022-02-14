
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fragS ;
struct TYPE_8__ {int tc_fix_data; } ;
typedef TYPE_1__ fixS ;
struct TYPE_9__ {int X_op; } ;
typedef TYPE_2__ expressionS ;






 TYPE_1__* FUNC_0 (int *,int,short,int ,int ,int,int) ;
 TYPE_1__* FUNC_1 (int *,int,short,TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (fragS * VAR_1,
      int VAR_2,
      short int VAR_3,
      expressionS * VAR_4,
      int VAR_5,
      int VAR_6)
{
  fixS * VAR_7;

  switch (VAR_4->X_op)
    {
    case 130:
    case 128:
    case 131:
    case 129:
      VAR_7 = FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
      break;

    default:
      VAR_7 = FUNC_0 (VAR_1, VAR_2, VAR_3, FUNC_2 (VAR_4), 0,
    VAR_5, VAR_6);
      break;
    }



  VAR_7->tc_fix_data = VAR_0;
}
