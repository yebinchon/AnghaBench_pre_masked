
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_23__ {int pSelect; } ;
typedef TYPE_7__ Table ;
struct TYPE_25__ {scalar_t__ op; } ;
struct TYPE_24__ {TYPE_4__* pEList; TYPE_2__* pSrc; scalar_t__ pWhere; int pGroupBy; } ;
struct TYPE_22__ {TYPE_5__* pFunc; } ;
struct TYPE_21__ {int funcFlags; } ;
struct TYPE_20__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_19__ {TYPE_9__* pExpr; } ;
struct TYPE_18__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_17__ {TYPE_7__* pTab; scalar_t__ pSelect; } ;
struct TYPE_16__ {scalar_t__ nFunc; TYPE_6__* aFunc; } ;
typedef TYPE_8__ Select ;
typedef TYPE_9__ Expr ;
typedef TYPE_10__ AggInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_9__*,int) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static Table *FUNC_4(Select *VAR_4, AggInfo *VAR_5){
  Table *VAR_6;
  Expr *VAR_7;

  FUNC_3( !VAR_4->pGroupBy );

  if( VAR_4->pWhere || VAR_4->pEList->nExpr!=1
   || VAR_4->pSrc->nSrc!=1 || VAR_4->pSrc->a[0].pSelect
  ){
    return 0;
  }
  VAR_6 = VAR_4->pSrc->a[0].pTab;
  VAR_7 = VAR_4->pEList->a[0].pExpr;
  FUNC_3( VAR_6 && !VAR_6->pSelect && VAR_7 );

  if( FUNC_1(VAR_6) ) return 0;
  if( VAR_7->op!=VAR_3 ) return 0;
  if( FUNC_2(VAR_5->nFunc==0) ) return 0;
  if( (VAR_5->aFunc[0].pFunc->funcFlags&VAR_2)==0 ) return 0;
  if( FUNC_0(VAR_7, VAR_0|VAR_1) ) return 0;

  return VAR_6;
}
