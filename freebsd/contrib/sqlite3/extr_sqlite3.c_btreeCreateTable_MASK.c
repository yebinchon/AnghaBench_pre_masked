
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_26__ {scalar_t__ inTransaction; int btsFlags; int openFlags; TYPE_1__* pPage1; scalar_t__ autoVacuum; } ;
struct TYPE_25__ {TYPE_4__* pBt; } ;
struct TYPE_24__ {int pDbPage; } ;
struct TYPE_23__ {int pDbPage; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ Btree ;
typedef TYPE_4__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (TYPE_4__*,TYPE_2__**,int*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int,TYPE_2__**,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int,scalar_t__*,int*) ;
 int FUNC_8 (TYPE_4__*,int,scalar_t__,int ,int*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_2__*,scalar_t__,int,int,int ) ;
 int FUNC_11 (TYPE_4__*,int ,int ) ;
 int FUNC_12 (TYPE_3__*,int ,int*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_20(Btree *VAR_15, int *VAR_16, int VAR_17){
  BtShared *VAR_18 = VAR_15->pBt;
  MemPage *VAR_19;
  Pgno VAR_20;
  int VAR_21;
  int VAR_22;

  FUNC_4( FUNC_13(VAR_15) );
  FUNC_4( VAR_18->inTransaction==VAR_14 );
  FUNC_4( (VAR_18->btsFlags & VAR_4)==0 );







  if( VAR_18->autoVacuum ){
    Pgno VAR_23;
    MemPage *VAR_24;






    FUNC_6(VAR_18);





    FUNC_12(VAR_15, VAR_2, &VAR_20);
    VAR_20++;




    while( VAR_20==FUNC_2(VAR_18, VAR_20) ||
        VAR_20==FUNC_1(VAR_18) ){
      VAR_20++;
    }
    FUNC_4( VAR_20>=3 || VAR_5 );
    FUNC_18( VAR_20<3 );





    VAR_21 = FUNC_3(VAR_18, &VAR_24, &VAR_23, VAR_20, VAR_0);
    if( VAR_21!=VAR_13 ){
      return VAR_21;
    }

    if( VAR_23!=VAR_20 ){






      u8 VAR_25 = 0;
      Pgno VAR_26 = 0;




      VAR_21 = FUNC_11(VAR_18, 0, 0);
      FUNC_9(VAR_24);
      if( VAR_21!=VAR_13 ){
        return VAR_21;
      }


      VAR_21 = FUNC_5(VAR_18, VAR_20, &VAR_19, 0);
      if( VAR_21!=VAR_13 ){
        return VAR_21;
      }
      VAR_21 = FUNC_7(VAR_18, VAR_20, &VAR_25, &VAR_26);
      if( VAR_25==VAR_11 || VAR_25==VAR_10 ){
        VAR_21 = VAR_12;
      }
      if( VAR_21!=VAR_13 ){
        FUNC_9(VAR_19);
        return VAR_21;
      }
      FUNC_4( VAR_25!=VAR_11 );
      FUNC_4( VAR_25!=VAR_10 );
      VAR_21 = FUNC_10(VAR_18, VAR_19, VAR_25, VAR_26, VAR_23, 0);
      FUNC_9(VAR_19);


      if( VAR_21!=VAR_13 ){
        return VAR_21;
      }
      VAR_21 = FUNC_5(VAR_18, VAR_20, &VAR_19, 0);
      if( VAR_21!=VAR_13 ){
        return VAR_21;
      }
      VAR_21 = FUNC_17(VAR_19->pDbPage);
      if( VAR_21!=VAR_13 ){
        FUNC_9(VAR_19);
        return VAR_21;
      }
    }else{
      VAR_19 = VAR_24;
    }


    FUNC_8(VAR_18, VAR_20, VAR_11, 0, &VAR_21);
    if( VAR_21 ){
      FUNC_9(VAR_19);
      return VAR_21;
    }





    FUNC_4( FUNC_15(VAR_18->pPage1->pDbPage) );
    VAR_21 = FUNC_14(VAR_15, 4, VAR_20);
    if( FUNC_0(VAR_21) ){
      FUNC_9(VAR_19);
      return VAR_21;
    }

  }else{
    VAR_21 = FUNC_3(VAR_18, &VAR_19, &VAR_20, 1, 0);
    if( VAR_21 ) return VAR_21;
  }

  FUNC_4( FUNC_15(VAR_19->pDbPage) );
  if( VAR_17 & VAR_1 ){
    VAR_22 = VAR_6 | VAR_8 | VAR_7;
  }else{
    VAR_22 = VAR_9 | VAR_7;
  }
  FUNC_19(VAR_19, VAR_22);
  FUNC_16(VAR_19->pDbPage);
  FUNC_4( (VAR_18->openFlags & VAR_3)==0 || VAR_20==2 );
  *VAR_16 = (int)VAR_20;
  return VAR_13;
}
