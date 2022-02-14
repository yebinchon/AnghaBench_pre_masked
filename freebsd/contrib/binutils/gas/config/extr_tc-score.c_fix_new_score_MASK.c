
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fragS ;
typedef int fixS ;
struct TYPE_5__ {int X_op; } ;
typedef TYPE_1__ expressionS ;






 int * FUNC_0 (int *,int,short,int ,int ,int,int) ;
 int * FUNC_1 (int *,int,short,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static fixS *
FUNC_3 (fragS * VAR_0, int VAR_1, short int VAR_2, expressionS * VAR_3, int VAR_4, int VAR_5)
{
  fixS *VAR_6;

  switch (VAR_3->X_op)
    {
    case 130:
    case 128:
    case 131:
    case 129:
      VAR_6 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
      break;
    default:
      VAR_6 = FUNC_0 (VAR_0, VAR_1, VAR_2, FUNC_2 (VAR_3), 0, VAR_4, VAR_5);
      break;
    }
  return VAR_6;
}
