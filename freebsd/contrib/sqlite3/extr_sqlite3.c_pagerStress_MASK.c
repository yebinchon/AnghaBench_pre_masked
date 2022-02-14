
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int doNotSpill; scalar_t__ tempFile; scalar_t__ eState; int jfd; int * aStat; int errCode; } ;
struct TYPE_14__ {int flags; int pgno; scalar_t__ pDirty; TYPE_2__* pPager; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(void *VAR_8, PgHdr *VAR_9){
  Pager *VAR_10 = (Pager *)VAR_8;
  int VAR_11 = VAR_7;

  FUNC_3( VAR_9->pPager==VAR_10 );
  FUNC_3( VAR_9->flags&VAR_2 );
  if( FUNC_0(VAR_10->errCode) ) return VAR_7;
  FUNC_12( VAR_10->doNotSpill & VAR_6 );
  FUNC_12( VAR_10->doNotSpill & VAR_5 );
  FUNC_12( VAR_10->doNotSpill & VAR_4 );
  if( VAR_10->doNotSpill
   && ((VAR_10->doNotSpill & (VAR_6|VAR_5))!=0
      || (VAR_9->flags & VAR_3)!=0)
  ){
    return VAR_7;
  }

  VAR_10->aStat[VAR_0]++;
  VAR_9->pDirty = 0;
  if( FUNC_4(VAR_10) ){

    VAR_11 = FUNC_10(VAR_9);
    if( VAR_11==VAR_7 ){
      VAR_11 = FUNC_5(VAR_10, VAR_9, 0, 0);
    }
  }else{
    if( VAR_9->flags&VAR_3
     || VAR_10->eState==VAR_1
    ){
      VAR_11 = FUNC_11(VAR_10, 1);
    }


    if( VAR_11==VAR_7 ){
      FUNC_3( (VAR_9->flags&VAR_3)==0 );
      VAR_11 = FUNC_7(VAR_10, VAR_9);
    }
  }


  if( VAR_11==VAR_7 ){
    FUNC_2(("STRESS %d page %d\n", FUNC_1(VAR_10), VAR_9->pgno));
    FUNC_9(VAR_9);
  }

  return FUNC_6(VAR_10, VAR_11);
}
