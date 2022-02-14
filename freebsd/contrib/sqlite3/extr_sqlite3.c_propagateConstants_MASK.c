
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int w ;
struct TYPE_12__ {int nChng; scalar_t__ apExpr; TYPE_5__* pParse; scalar_t__ nConst; } ;
typedef TYPE_2__ WhereConst ;
struct TYPE_11__ {TYPE_2__* pConst; } ;
struct TYPE_13__ {TYPE_1__ u; scalar_t__ walkerDepth; scalar_t__ xSelectCallback2; int xSelectCallback; int xExprCallback; TYPE_5__* pParse; } ;
typedef TYPE_3__ Walker ;
struct TYPE_15__ {int db; } ;
struct TYPE_14__ {int pWhere; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(
  Parse *VAR_2,
  Select *VAR_3
){
  WhereConst VAR_4;
  Walker VAR_5;
  int VAR_6 = 0;
  VAR_4.pParse = VAR_2;
  do{
    VAR_4.nConst = 0;
    VAR_4.nChng = 0;
    VAR_4.apExpr = 0;
    FUNC_0(&VAR_4, VAR_3->pWhere);
    if( VAR_4.nConst ){
      FUNC_1(&VAR_5, 0, sizeof(VAR_5));
      VAR_5.pParse = VAR_2;
      VAR_5.xExprCallback = VAR_0;
      VAR_5.xSelectCallback = VAR_1;
      VAR_5.xSelectCallback2 = 0;
      VAR_5.walkerDepth = 0;
      VAR_5.u.pConst = &VAR_4;
      FUNC_3(&VAR_5, VAR_3->pWhere);
      FUNC_2(VAR_4.pParse->db, VAR_4.apExpr);
      VAR_6 += VAR_4.nChng;
    }
  }while( VAR_4.nChng );
  return VAR_6;
}
