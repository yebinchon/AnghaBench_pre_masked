
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
typedef int offsetT ;
typedef int fragS ;
typedef int fixS ;
struct TYPE_4__ {int X_op; int X_add_number; int * X_add_symbol; int * X_op_symbol; } ;
typedef TYPE_1__ expressionS ;
typedef int RELOC_ENUM ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int,int,int *,int *,int ,int,int ) ;
 int * FUNC_3 (TYPE_1__*) ;

fixS *
FUNC_4 (fragS *VAR_1,
      int VAR_2,
      int VAR_3,
      expressionS *VAR_4,
      int VAR_5,
      RELOC_ENUM VAR_6 )
{
  symbolS *VAR_7 = ((void*)0);
  symbolS *VAR_8 = ((void*)0);
  offsetT VAR_9 = 0;

  switch (VAR_4->X_op)
    {
    case 135:
      break;

    case 132:
      FUNC_1 (FUNC_0("register value used as expression"));
      break;

    case 134:


      {
 symbolS *VAR_10 = FUNC_3 (VAR_4);

 VAR_4->X_op = 130;
 VAR_4->X_op_symbol = 0;
 VAR_4->X_add_symbol = VAR_10;
 VAR_4->X_add_number = 0;

 return FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
      }

    case 129:
      VAR_7 = VAR_4->X_add_symbol;
      VAR_9 = VAR_4->X_add_number;
      VAR_6 = VAR_0;
      break;

    case 128:
      VAR_8 = VAR_4->X_add_symbol;
      VAR_9 = VAR_4->X_add_number;
      break;

    case 131:
      VAR_8 = VAR_4->X_op_symbol;

    case 130:
      VAR_7 = VAR_4->X_add_symbol;

    case 133:
      VAR_9 = VAR_4->X_add_number;
      break;

    default:
      VAR_7 = FUNC_3 (VAR_4);
      break;
    }

  return FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_7, VAR_8, VAR_9, VAR_5, VAR_6);
}
