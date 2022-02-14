
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_55__ TYPE_9__ ;
typedef struct TYPE_54__ TYPE_8__ ;
typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_36__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_27__ ;
typedef struct TYPE_45__ TYPE_1__ ;
typedef struct TYPE_44__ TYPE_17__ ;
typedef struct TYPE_43__ TYPE_16__ ;
typedef struct TYPE_42__ TYPE_15__ ;
typedef struct TYPE_41__ TYPE_14__ ;
typedef struct TYPE_40__ TYPE_13__ ;
typedef struct TYPE_39__ TYPE_12__ ;
typedef struct TYPE_38__ TYPE_11__ ;
typedef struct TYPE_37__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
typedef int sqlite3 ;
typedef int i8 ;
struct TYPE_37__ {int eOperator; TYPE_16__* pExpr; } ;
typedef TYPE_10__ WhereTerm ;
struct TYPE_38__ {TYPE_12__** aLoop; } ;
typedef TYPE_11__ WherePath ;
struct TYPE_53__ {int nDistinctCol; int nEq; TYPE_14__* pIndex; } ;
struct TYPE_45__ {scalar_t__ isOrdered; } ;
struct TYPE_54__ {TYPE_7__ btree; TYPE_1__ vtab; } ;
struct TYPE_39__ {int maskSelf; int wsFlags; size_t iTab; int nLTerm; int nSkip; TYPE_8__ u; TYPE_10__** aLTerm; } ;
typedef TYPE_12__ WhereLoop ;
struct TYPE_40__ {int sMaskSet; TYPE_27__* pParse; int sWC; TYPE_3__* pTabList; } ;
typedef TYPE_13__ WhereInfo ;
struct TYPE_55__ {int sortFlags; TYPE_16__* pExpr; } ;
struct TYPE_52__ {TYPE_5__* a; } ;
struct TYPE_51__ {TYPE_16__* pExpr; } ;
struct TYPE_50__ {scalar_t__ notNull; } ;
struct TYPE_49__ {TYPE_2__* a; } ;
struct TYPE_48__ {int iPKey; TYPE_4__* aCol; } ;
struct TYPE_47__ {int iCursor; } ;
struct TYPE_46__ {int * db; } ;
struct TYPE_44__ {int zName; } ;
struct TYPE_43__ {scalar_t__ op; int iTable; int iColumn; } ;
struct TYPE_42__ {int nExpr; TYPE_9__* a; } ;
struct TYPE_41__ {int nKeyCol; int nColumn; int* aiColumn; int* aSortOrder; int * azColl; TYPE_6__* aColExpr; TYPE_36__* pTable; scalar_t__ bUnordered; } ;
typedef TYPE_14__ Index ;
typedef TYPE_15__ ExprList ;
typedef TYPE_16__ Expr ;
typedef TYPE_17__ CollSeq ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_36__*) ;
 scalar_t__ FUNC_2 (TYPE_14__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_27__*,TYPE_16__*,TYPE_16__*) ;
 scalar_t__ FUNC_7 (TYPE_16__*,TYPE_16__*,int) ;
 int FUNC_8 (TYPE_16__*) ;
 TYPE_17__* FUNC_9 (TYPE_27__*,TYPE_16__*) ;
 TYPE_16__* FUNC_10 (TYPE_16__*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,TYPE_16__*) ;
 TYPE_10__* FUNC_13 (int *,int,int,int,int,int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static i8 FUNC_15(
  WhereInfo *VAR_19,
  ExprList *VAR_20,
  WherePath *VAR_21,
  u16 VAR_22,
  u16 VAR_23,
  WhereLoop *VAR_24,
  Bitmask *VAR_25
){
  u8 VAR_26;
  u8 VAR_27;
  u8 VAR_28;
  u8 VAR_29;
  u8 VAR_30;
  u8 VAR_31;
  u16 VAR_32;
  u16 VAR_33;
  u16 VAR_34;
  u16 VAR_35;
  int VAR_36;
  int VAR_37, VAR_38;
  int VAR_39;
  int VAR_40;
  WhereLoop *VAR_41 = 0;
  WhereTerm *VAR_42;
  Expr *VAR_43;
  CollSeq *VAR_44;
  Index *VAR_45;
  sqlite3 *VAR_46 = VAR_19->pParse->db;
  Bitmask VAR_47 = 0;
  Bitmask VAR_48;
  Bitmask VAR_49;
  Bitmask VAR_50;
  FUNC_5( VAR_20!=0 );
  if( VAR_23 && FUNC_4(VAR_46, VAR_3) ) return 0;

  VAR_35 = VAR_20->nExpr;
  FUNC_14( VAR_35==VAR_0-1 );
  if( VAR_35>VAR_0-1 ) return 0;
  VAR_29 = 1;
  VAR_48 = FUNC_3(VAR_35)-1;
  VAR_49 = 0;
  VAR_50 = 0;
  VAR_32 = VAR_14 | VAR_16 | VAR_17;
  if( VAR_22 & VAR_11 ) VAR_32 |= VAR_15;
  for(VAR_36=0; VAR_29 && VAR_47<VAR_48 && VAR_36<=VAR_23; VAR_36++){
    if( VAR_36>0 ) VAR_50 |= VAR_41->maskSelf;
    if( VAR_36<VAR_23 ){
      VAR_41 = VAR_21->aLoop[VAR_36];
      if( VAR_22 & VAR_11 ) continue;
    }else{
      VAR_41 = VAR_24;
    }
    if( VAR_41->wsFlags & VAR_13 ){
      if( VAR_41->u.vtab.isOrdered ) VAR_47 = VAR_48;
      break;
    }else if( VAR_22 & VAR_7 ){
      VAR_41->u.btree.nDistinctCol = 0;
    }
    VAR_39 = VAR_19->pTabList->a[VAR_41->iTab].iCursor;






    for(VAR_37=0; VAR_37<VAR_35; VAR_37++){
      if( FUNC_3(VAR_37) & VAR_47 ) continue;
      VAR_43 = FUNC_10(VAR_20->a[VAR_37].pExpr);
      if( VAR_43->op!=VAR_4 ) continue;
      if( VAR_43->iTable!=VAR_39 ) continue;
      VAR_42 = FUNC_13(&VAR_19->sWC, VAR_39, VAR_43->iColumn,
                       ~VAR_50, VAR_32, 0);
      if( VAR_42==0 ) continue;
      if( VAR_42->eOperator==VAR_15 ){



        FUNC_5( VAR_22 & VAR_11 );
        for(VAR_38=0; VAR_38<VAR_41->nLTerm && VAR_42!=VAR_41->aLTerm[VAR_38]; VAR_38++){}
        if( VAR_38>=VAR_41->nLTerm ) continue;
      }
      if( (VAR_42->eOperator&(VAR_14|VAR_16))!=0 && VAR_43->iColumn>=0 ){
        if( FUNC_6(VAR_19->pParse,
                  VAR_20->a[VAR_37].pExpr, VAR_42->pExpr)==0 ){
          continue;
        }
        FUNC_14( VAR_42->pExpr->op==VAR_5 );
      }
      VAR_47 |= FUNC_3(VAR_37);
    }

    if( (VAR_41->wsFlags & VAR_10)==0 ){
      if( VAR_41->wsFlags & VAR_9 ){
        VAR_45 = 0;
        VAR_33 = 0;
        VAR_34 = 1;
      }else if( (VAR_45 = VAR_41->u.btree.pIndex)==0 || VAR_45->bUnordered ){
        return 0;
      }else{
        VAR_33 = VAR_45->nKeyCol;
        VAR_34 = VAR_45->nColumn;
        FUNC_5( VAR_34==VAR_33+1 || !FUNC_1(VAR_45->pTable) );
        FUNC_5( VAR_45->aiColumn[VAR_34-1]==VAR_18
                          || !FUNC_1(VAR_45->pTable));
        VAR_29 = FUNC_2(VAR_45)
                          && (VAR_41->wsFlags & VAR_12)==0;
      }




      VAR_27 = VAR_26 = 0;
      VAR_30 = 0;
      for(VAR_38=0; VAR_38<VAR_34; VAR_38++){
        u8 VAR_51 = 1;

        FUNC_5( VAR_38>=VAR_41->u.btree.nEq
            || (VAR_41->aLTerm[VAR_38]==0)==(VAR_38<VAR_41->nSkip)
        );
        if( VAR_38<VAR_41->u.btree.nEq && VAR_38>=VAR_41->nSkip ){
          u16 VAR_52 = VAR_41->aLTerm[VAR_38]->eOperator;
          if( (VAR_52 & VAR_32)!=0 ){
            if( VAR_52 & (VAR_17|VAR_16) ){
              FUNC_14( VAR_52 & VAR_17 );
              FUNC_14( VAR_52 & VAR_16 );
              FUNC_14( VAR_29 );
              VAR_29 = 0;
            }
            continue;
          }else if( FUNC_0(VAR_52 & VAR_15) ){




            Expr *VAR_53 = VAR_41->aLTerm[VAR_38]->pExpr;
            for(VAR_37=VAR_38+1; VAR_37<VAR_41->u.btree.nEq; VAR_37++){
              if( VAR_41->aLTerm[VAR_37]->pExpr==VAR_53 ){
                FUNC_5( (VAR_41->aLTerm[VAR_37]->eOperator & VAR_15) );
                VAR_51 = 0;
                break;
              }
            }
          }
        }




        if( VAR_45 ){
          VAR_40 = VAR_45->aiColumn[VAR_38];
          VAR_28 = VAR_45->aSortOrder[VAR_38] & VAR_2;
          if( VAR_40==VAR_45->pTable->iPKey ) VAR_40 = VAR_18;
        }else{
          VAR_40 = VAR_18;
          VAR_28 = 0;
        }




        if( VAR_29
         && VAR_40>=0
         && VAR_38>=VAR_41->u.btree.nEq
         && VAR_45->pTable->aCol[VAR_40].notNull==0
        ){
          VAR_29 = 0;
        }




        VAR_31 = 0;
        for(VAR_37=0; VAR_51 && VAR_37<VAR_35; VAR_37++){
          if( FUNC_3(VAR_37) & VAR_47 ) continue;
          VAR_43 = FUNC_10(VAR_20->a[VAR_37].pExpr);
          FUNC_14( VAR_22 & VAR_8 );
          FUNC_14( VAR_22 & VAR_7 );
          if( (VAR_22 & (VAR_8|VAR_7))==0 ) VAR_51 = 0;
          if( VAR_40>=VAR_18 ){
            if( VAR_43->op!=VAR_4 ) continue;
            if( VAR_43->iTable!=VAR_39 ) continue;
            if( VAR_43->iColumn!=VAR_40 ) continue;
          }else{
            Expr *VAR_54 = VAR_45->aColExpr->a[VAR_38].pExpr;
            if( FUNC_7(VAR_43, VAR_54, VAR_39) ){
              continue;
            }
          }
          if( VAR_40!=VAR_18 ){
            VAR_44 = FUNC_9(VAR_19->pParse, VAR_20->a[VAR_37].pExpr);
            if( FUNC_11(VAR_44->zName, VAR_45->azColl[VAR_38])!=0 ) continue;
          }
          if( VAR_22 & VAR_7 ){
            VAR_41->u.btree.nDistinctCol = VAR_38+1;
          }
          VAR_31 = 1;
          break;
        }
        if( VAR_31 && (VAR_22 & VAR_8)==0 ){


          if( VAR_26 ){
            if( (VAR_27 ^ VAR_28)!=(VAR_20->a[VAR_37].sortFlags&VAR_2) ){
              VAR_31 = 0;
            }
          }else{
            VAR_27 = VAR_28 ^ (VAR_20->a[VAR_37].sortFlags & VAR_2);
            if( VAR_27 ) *VAR_25 |= FUNC_3(VAR_36);
            VAR_26 = 1;
          }
        }
        if( VAR_31 && (VAR_20->a[VAR_37].sortFlags & VAR_1) ){
          if( VAR_38==VAR_41->u.btree.nEq ){
            VAR_41->wsFlags |= VAR_6;
          }else{
            VAR_31 = 0;
          }
        }
        if( VAR_31 ){
          if( VAR_40==VAR_18 ){
            FUNC_14( VAR_30==0 );
            VAR_30 = 1;
          }
          VAR_47 |= FUNC_3(VAR_37);
        }else{

          if( VAR_38==0 || VAR_38<VAR_33 ){
            FUNC_14( VAR_29!=0 );
            VAR_29 = 0;
          }
          break;
        }
      }
      if( VAR_30 ){
        FUNC_14( VAR_29==0 );
        VAR_29 = 1;
      }
    }


    if( VAR_29 ){
      VAR_49 |= VAR_41->maskSelf;
      for(VAR_37=0; VAR_37<VAR_35; VAR_37++){
        Expr *VAR_55;
        Bitmask VAR_56;
        if( FUNC_3(VAR_37) & VAR_47 ) continue;
        VAR_55 = VAR_20->a[VAR_37].pExpr;
        VAR_56 = FUNC_12(&VAR_19->sMaskSet,VAR_55);
        if( VAR_56==0 && !FUNC_8(VAR_55) ) continue;
        if( (VAR_56&~VAR_49)==0 ){
          VAR_47 |= FUNC_3(VAR_37);
        }
      }
    }
  }
  if( VAR_47==VAR_48 ) return (i8)VAR_35;
  if( !VAR_29 ){
    for(VAR_37=VAR_35-1; VAR_37>0; VAR_37--){
      Bitmask VAR_57 = FUNC_3(VAR_37) - 1;
      if( (VAR_47&VAR_57)==VAR_57 ) return VAR_37;
    }
    return 0;
  }
  return -1;
}
