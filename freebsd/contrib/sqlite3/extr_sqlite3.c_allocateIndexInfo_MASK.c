
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int u8 ;
typedef int u16 ;
struct sqlite3_index_orderby {int desc; int iColumn; } ;
struct sqlite3_index_constraint_usage {int dummy; } ;
struct sqlite3_index_constraint {int iColumn; int iTermOffset; int op; } ;
struct TYPE_18__ {int jointype; } ;
struct SrcList_item {scalar_t__ iCursor; TYPE_1__ fg; } ;
struct HiddenIndexInfo {TYPE_7__* pParse; TYPE_6__* pWC; } ;
struct TYPE_21__ {int aConstraintUsage; int aOrderBy; int aConstraint; int nOrderBy; int nConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_19__ {int leftColumn; } ;
struct TYPE_22__ {scalar_t__ leftCursor; int prereqRight; int eOperator; int wtFlags; int eMatchOp; TYPE_16__* pExpr; TYPE_2__ u; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_23__ {int nTerm; TYPE_5__* a; } ;
typedef TYPE_6__ WhereClause ;
struct TYPE_26__ {scalar_t__ op; scalar_t__ iTable; int iColumn; } ;
struct TYPE_25__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_24__ {int db; } ;
struct TYPE_20__ {int sortFlags; TYPE_9__* pExpr; } ;
struct TYPE_17__ {int pRight; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;
typedef int Bitmask ;


 int VAR_0 ;
 int FUNC_0 (TYPE_16__*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static sqlite3_index_info *FUNC_7(
  Parse *VAR_24,
  WhereClause *VAR_25,
  Bitmask VAR_26,
  struct SrcList_item *VAR_27,
  ExprList *VAR_28,
  u16 *VAR_29
){
  int VAR_30, VAR_31;
  int VAR_32;
  struct sqlite3_index_constraint *VAR_33;
  struct sqlite3_index_orderby *VAR_34;
  struct sqlite3_index_constraint_usage *VAR_35;
  struct HiddenIndexInfo *VAR_36;
  WhereTerm *VAR_37;
  int VAR_38;
  sqlite3_index_info *VAR_39;
  u16 VAR_40 = 0;



  for(VAR_30=VAR_32=0, VAR_37=VAR_25->a; VAR_30<VAR_25->nTerm; VAR_30++, VAR_37++){
    if( VAR_37->leftCursor != VAR_27->iCursor ) continue;
    if( VAR_37->prereqRight & VAR_26 ) continue;
    FUNC_2( FUNC_1(VAR_37->eOperator & ~VAR_16) );
    FUNC_6( VAR_37->eOperator & VAR_19 );
    FUNC_6( VAR_37->eOperator & VAR_21 );
    FUNC_6( VAR_37->eOperator & VAR_20 );
    FUNC_6( VAR_37->eOperator & VAR_13 );
    if( (VAR_37->eOperator & ~(VAR_16))==0 ) continue;
    if( VAR_37->wtFlags & VAR_11 ) continue;
    FUNC_2( VAR_37->u.leftColumn>=(-1) );
    VAR_32++;
  }





  VAR_38 = 0;
  if( VAR_28 ){
    int VAR_41 = VAR_28->nExpr;
    for(VAR_30=0; VAR_30<VAR_41; VAR_30++){
      Expr *VAR_42 = VAR_28->a[VAR_30].pExpr;
      if( VAR_42->op!=VAR_12 || VAR_42->iTable!=VAR_27->iCursor ) break;
      if( VAR_28->a[VAR_30].sortFlags & VAR_2 ) break;
    }
    if( VAR_30==VAR_41){
      VAR_38 = VAR_41;
    }
  }



  VAR_39 = FUNC_3(VAR_24->db, sizeof(*VAR_39)
                           + (sizeof(*VAR_33) + sizeof(*VAR_35))*VAR_32
                           + sizeof(*VAR_34)*VAR_38 + sizeof(*VAR_36) );
  if( VAR_39==0 ){
    FUNC_4(VAR_24, "out of memory");
    return 0;
  }






  VAR_36 = (struct HiddenIndexInfo*)&VAR_39[1];
  VAR_33 = (struct sqlite3_index_constraint*)&VAR_36[1];
  VAR_34 = (struct sqlite3_index_orderby*)&VAR_33[VAR_32];
  VAR_35 = (struct sqlite3_index_constraint_usage*)&VAR_34[VAR_38];
  *(int*)&VAR_39->nConstraint = VAR_32;
  *(int*)&VAR_39->nOrderBy = VAR_38;
  *(struct sqlite3_index_constraint**)&VAR_39->aConstraint = VAR_33;
  *(struct sqlite3_index_orderby**)&VAR_39->aOrderBy = VAR_34;
  *(struct sqlite3_index_constraint_usage**)&VAR_39->aConstraintUsage =
                                                                   VAR_35;

  VAR_36->pWC = VAR_25;
  VAR_36->pParse = VAR_24;
  for(VAR_30=VAR_31=0, VAR_37=VAR_25->a; VAR_30<VAR_25->nTerm; VAR_30++, VAR_37++){
    u16 VAR_43;
    if( VAR_37->leftCursor != VAR_27->iCursor ) continue;
    if( VAR_37->prereqRight & VAR_26 ) continue;
    FUNC_2( FUNC_1(VAR_37->eOperator & ~VAR_16) );
    FUNC_6( VAR_37->eOperator & VAR_19 );
    FUNC_6( VAR_37->eOperator & VAR_20 );
    FUNC_6( VAR_37->eOperator & VAR_21 );
    FUNC_6( VAR_37->eOperator & VAR_13 );
    if( (VAR_37->eOperator & ~(VAR_16))==0 ) continue;
    if( VAR_37->wtFlags & VAR_11 ) continue;
    if( (VAR_27->fg.jointype & VAR_1)!=0
     && !FUNC_0(VAR_37->pExpr, VAR_0)
     && (VAR_37->eOperator & (VAR_20|VAR_21))
    ){






      FUNC_6( VAR_37->eOperator & VAR_21 );
      FUNC_6( VAR_37->eOperator & VAR_20 );
      continue;
    }
    FUNC_2( VAR_37->u.leftColumn>=(-1) );
    VAR_33[VAR_31].iColumn = VAR_37->u.leftColumn;
    VAR_33[VAR_31].iTermOffset = VAR_30;
    VAR_43 = VAR_37->eOperator & VAR_13;
    if( VAR_43==VAR_19 ) VAR_43 = VAR_15;
    if( VAR_43==VAR_14 ){
      VAR_33[VAR_31].op = VAR_37->eMatchOp;
    }else if( VAR_43 & (VAR_21|VAR_20) ){
      if( VAR_43==VAR_21 ){
        VAR_33[VAR_31].op = VAR_8;
      }else{
        VAR_33[VAR_31].op = VAR_7;
      }
    }else{
      VAR_33[VAR_31].op = (u8)VAR_43;



      FUNC_2( VAR_15==VAR_4 );
      FUNC_2( VAR_23==VAR_10 );
      FUNC_2( VAR_22==VAR_9 );
      FUNC_2( VAR_18==VAR_6 );
      FUNC_2( VAR_17==VAR_5 );
      FUNC_2( VAR_37->eOperator&(VAR_19|VAR_15|VAR_23|VAR_22|VAR_18|VAR_17|VAR_14) );

      if( VAR_43 & (VAR_23|VAR_22|VAR_18|VAR_17)
       && FUNC_5(VAR_37->pExpr->pRight)
      ){
        if( VAR_30<16 ) VAR_40 |= (1 << VAR_30);
        if( VAR_43==VAR_23 ) VAR_33[VAR_31].op = VAR_22;
        if( VAR_43==VAR_18 ) VAR_33[VAR_31].op = VAR_17;
      }
    }

    VAR_31++;
  }
  for(VAR_30=0; VAR_30<VAR_38; VAR_30++){
    Expr *VAR_44 = VAR_28->a[VAR_30].pExpr;
    VAR_34[VAR_30].iColumn = VAR_44->iColumn;
    VAR_34[VAR_30].desc = VAR_28->a[VAR_30].sortFlags & VAR_3;
  }

  *VAR_29 = VAR_40;
  return VAR_39;
}
