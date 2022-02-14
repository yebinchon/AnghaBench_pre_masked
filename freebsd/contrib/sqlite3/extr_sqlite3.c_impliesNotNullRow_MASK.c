
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int iCur; } ;
struct TYPE_13__ {int eCode; TYPE_1__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_12__ {int pTab; } ;
struct TYPE_15__ {int const op; TYPE_2__ y; } ;
struct TYPE_14__ {int op; TYPE_6__* pRight; TYPE_6__* pLeft; int iTable; } ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(Walker *VAR_6, Expr *VAR_7){
  FUNC_4( VAR_7->op==VAR_1 );
  FUNC_4( VAR_7->op==VAR_2 );
  if( FUNC_0(VAR_7, VAR_0) ) return VAR_5;
  switch( VAR_7->op ){
    case 135:
    case 134:
    case 130:
    case 136:
    case 129:
    case 143:
    case 137:
    case 140:
    case 128:
      FUNC_4( VAR_7->op==135 );
      FUNC_4( VAR_7->op==134 );
      FUNC_4( VAR_7->op==130 );
      FUNC_4( VAR_7->op==136 );
      FUNC_4( VAR_7->op==129 );
      FUNC_4( VAR_7->op==143 );
      FUNC_4( VAR_7->op==137 );
      FUNC_4( VAR_7->op==140 );
      FUNC_4( VAR_7->op==128 );
      return VAR_5;
    case 142:
      if( VAR_6->u.iCur==VAR_7->iTable ){
        VAR_6->eCode = 1;
        return VAR_3;
      }
      return VAR_5;

    case 145:
      if( FUNC_2(VAR_7->pLeft, VAR_6->u.iCur)
       && FUNC_2(VAR_7->pRight, VAR_6->u.iCur)
      ){
        VAR_6->eCode = 1;
      }
      return VAR_5;

    case 144:
      FUNC_3(VAR_6, VAR_7->pLeft);
      return VAR_5;




    case 141:
    case 131:
    case 132:
    case 133:
    case 138:
    case 139:
      FUNC_4( VAR_7->op==141 );
      FUNC_4( VAR_7->op==131 );
      FUNC_4( VAR_7->op==132 );
      FUNC_4( VAR_7->op==133 );
      FUNC_4( VAR_7->op==138 );
      FUNC_4( VAR_7->op==139 );
      if( (VAR_7->pLeft->op==142 && FUNC_1(VAR_7->pLeft->y.pTab))
       || (VAR_7->pRight->op==142 && FUNC_1(VAR_7->pRight->y.pTab))
      ){
       return VAR_5;
      }

    default:
      return VAR_4;
  }
}
