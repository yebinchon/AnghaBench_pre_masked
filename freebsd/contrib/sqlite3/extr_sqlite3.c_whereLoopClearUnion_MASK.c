
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_8__ {TYPE_6__* pIndex; } ;
struct TYPE_7__ {scalar_t__ idxStr; scalar_t__ needFree; } ;
struct TYPE_9__ {TYPE_2__ btree; TYPE_1__ vtab; } ;
struct TYPE_10__ {int wsFlags; TYPE_3__ u; } ;
typedef TYPE_4__ WhereLoop ;
struct TYPE_11__ {int zColAff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(sqlite3 *VAR_2, WhereLoop *VAR_3){
  if( VAR_3->wsFlags & (VAR_1|VAR_0) ){
    if( (VAR_3->wsFlags & VAR_1)!=0 && VAR_3->u.vtab.needFree ){
      FUNC_2(VAR_3->u.vtab.idxStr);
      VAR_3->u.vtab.needFree = 0;
      VAR_3->u.vtab.idxStr = 0;
    }else if( (VAR_3->wsFlags & VAR_0)!=0 && VAR_3->u.btree.pIndex!=0 ){
      FUNC_0(VAR_2, VAR_3->u.btree.pIndex->zColAff);
      FUNC_1(VAR_2, VAR_3->u.btree.pIndex);
      VAR_3->u.btree.pIndex = 0;
    }
  }
}
