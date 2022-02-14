
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int flags; scalar_t__ pVtabCtx; scalar_t__ nVdbeExec; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_16__ {int tabFlags; } ;
typedef TYPE_4__ Table ;
struct TYPE_18__ {TYPE_2__* pMod; } ;
struct TYPE_17__ {scalar_t__ nested; TYPE_3__* db; } ;
struct TYPE_14__ {TYPE_1__* pModule; } ;
struct TYPE_13__ {scalar_t__ xUpdate; } ;
typedef TYPE_5__ Parse ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_9__* FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(Parse *VAR_3, Table *VAR_4){
  sqlite3 *VAR_5;
  if( FUNC_0(VAR_4) ){
    return FUNC_2(VAR_3->db, VAR_4)->pMod->pModule->xUpdate==0;
  }
  if( (VAR_4->tabFlags & (VAR_1|VAR_2))==0 ) return 0;
  VAR_5 = VAR_3->db;
  if( (VAR_4->tabFlags & VAR_1)!=0 ){
    return FUNC_3(VAR_5)==0 && VAR_3->nested==0;
  }
  FUNC_1( VAR_4->tabFlags & VAR_2 );
  return (VAR_5->flags & VAR_0)!=0

          && VAR_5->pVtabCtx==0

          && VAR_5->nVdbeExec==0;
}
