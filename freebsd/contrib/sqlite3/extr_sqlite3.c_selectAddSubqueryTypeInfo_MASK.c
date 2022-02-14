
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct SrcList_item {TYPE_4__* pSelect; TYPE_2__* pTab; } ;
struct TYPE_9__ {int * pParse; } ;
typedef TYPE_1__ Walker ;
struct TYPE_10__ {int tabFlags; } ;
typedef TYPE_2__ Table ;
struct TYPE_12__ {int selFlags; struct TYPE_12__* pPrior; TYPE_3__* pSrc; } ;
struct TYPE_11__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Select ;
typedef int Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_2(Walker *VAR_4, Select *VAR_5){
  Parse *VAR_6;
  int VAR_7;
  SrcList *VAR_8;
  struct SrcList_item *VAR_9;

  FUNC_0( VAR_5->selFlags & VAR_1 );
  if( VAR_5->selFlags & VAR_0 ) return;
  VAR_5->selFlags |= VAR_0;
  VAR_6 = VAR_4->pParse;
  VAR_8 = VAR_5->pSrc;
  for(VAR_7=0, VAR_9=VAR_8->a; VAR_7<VAR_8->nSrc; VAR_7++, VAR_9++){
    Table *VAR_10 = VAR_9->pTab;
    FUNC_0( VAR_10!=0 );
    if( (VAR_10->tabFlags & VAR_3)!=0 ){

      Select *VAR_11 = VAR_9->pSelect;
      if( VAR_11 ){
        while( VAR_11->pPrior ) VAR_11 = VAR_11->pPrior;
        FUNC_1(VAR_6, VAR_10, VAR_11,
                                               VAR_2);
      }
    }
  }
}
