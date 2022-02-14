
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {scalar_t__ eLock; int iTable; TYPE_1__* pBtree; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {scalar_t__ inTransaction; int btsFlags; TYPE_1__* pWriter; TYPE_3__* pLock; } ;
struct TYPE_8__ {scalar_t__ inTrans; TYPE_4__* db; int sharable; TYPE_2__* pBt; } ;
typedef int Pgno ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;
typedef TYPE_3__ BtLock ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(Btree *VAR_8, Pgno VAR_9, u8 VAR_10){
  BtShared *VAR_11 = VAR_8->pBt;
  BtLock *VAR_12;

  FUNC_0( FUNC_1(VAR_8) );
  FUNC_0( VAR_10==VAR_2 || VAR_10==VAR_7 );
  FUNC_0( VAR_8->db!=0 );
  FUNC_0( !(VAR_8->db->flags&VAR_5)||VAR_10==VAR_7||VAR_9==1 );





  FUNC_0( VAR_10==VAR_2 || (VAR_8==VAR_11->pWriter && VAR_8->inTrans==VAR_6) );
  FUNC_0( VAR_10==VAR_2 || VAR_11->inTransaction==VAR_6 );


  if( !VAR_8->sharable ){
    return VAR_4;
  }




  if( VAR_11->pWriter!=VAR_8 && (VAR_11->btsFlags & VAR_0)!=0 ){
    FUNC_2(VAR_8->db, VAR_11->pWriter->db);
    return VAR_3;
  }

  for(VAR_12=VAR_11->pLock; VAR_12; VAR_12=VAR_12->pNext){
    FUNC_0( VAR_12->eLock==VAR_2 || VAR_12->eLock==VAR_7 );
    FUNC_0( VAR_10==VAR_2 || VAR_12->pBtree==VAR_8 || VAR_12->eLock==VAR_2);
    if( VAR_12->pBtree!=VAR_8 && VAR_12->iTable==VAR_9 && VAR_12->eLock!=VAR_10 ){
      FUNC_2(VAR_8->db, VAR_12->pBtree->db);
      if( VAR_10==VAR_7 ){
        FUNC_0( VAR_8==VAR_11->pWriter );
        VAR_11->btsFlags |= VAR_1;
      }
      return VAR_3;
    }
  }
  return VAR_4;
}
