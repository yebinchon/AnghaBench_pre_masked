
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int wctrlFlags; TYPE_3__* pParse; } ;
typedef TYPE_1__ WhereInfo ;
typedef int Vdbe ;
struct TYPE_10__ {int nCol; } ;
typedef TYPE_2__ Table ;
struct TYPE_13__ {int writeMask; } ;
struct TYPE_12__ {int* aiColumn; int nColumn; TYPE_2__* pTable; } ;
struct TYPE_11__ {int db; int * pVdbe; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Index ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int ,int,int ,int) ;
 int FUNC_5 (int *,int,char*,int ) ;

__attribute__((used)) static void FUNC_6(
  WhereInfo *VAR_3,
  Index *VAR_4,
  int VAR_5,
  int VAR_6
){
  Parse *VAR_7 = VAR_3->pParse;
  Vdbe *VAR_8 = VAR_7->pVdbe;

  FUNC_1( VAR_6>0 );
  FUNC_1( VAR_4->aiColumn[VAR_4->nColumn-1]==-1 );

  FUNC_4(VAR_8, VAR_0, VAR_6, 0, VAR_5);
  if( (VAR_3->wctrlFlags & VAR_2)
   && FUNC_0(FUNC_3(VAR_7)->writeMask)
  ){
    int VAR_9;
    Table *VAR_10 = VAR_4->pTable;
    int *VAR_11 = (int*)FUNC_2(VAR_7->db, sizeof(int)*(VAR_10->nCol+1));
    if( VAR_11 ){
      VAR_11[0] = VAR_10->nCol;
      for(VAR_9=0; VAR_9<VAR_4->nColumn-1; VAR_9++){
        FUNC_1( VAR_4->aiColumn[VAR_9]<VAR_10->nCol );
        if( VAR_4->aiColumn[VAR_9]>=0 ) VAR_11[VAR_4->aiColumn[VAR_9]+1] = VAR_9+1;
      }
      FUNC_5(VAR_8, -1, (char*)VAR_11, VAR_1);
    }
  }
}
