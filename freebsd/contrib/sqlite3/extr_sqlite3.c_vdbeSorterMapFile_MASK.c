
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {TYPE_3__* pMethods; } ;
typedef TYPE_4__ sqlite3_file ;
typedef scalar_t__ i64 ;
struct TYPE_15__ {TYPE_2__* pSorter; } ;
struct TYPE_14__ {scalar_t__ iEof; TYPE_4__* pFd; } ;
struct TYPE_12__ {int iVersion; } ;
struct TYPE_11__ {TYPE_1__* db; } ;
struct TYPE_10__ {scalar_t__ nMaxSorterMmap; } ;
typedef TYPE_5__ SorterFile ;
typedef TYPE_6__ SortSubtask ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int,void**) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(SortSubtask *VAR_1, SorterFile *VAR_2, u8 **VAR_3){
  int VAR_4 = VAR_0;
  if( VAR_2->iEof<=(i64)(VAR_1->pSorter->db->nMaxSorterMmap) ){
    sqlite3_file *VAR_5 = VAR_2->pFd;
    if( VAR_5->pMethods->iVersion>=3 ){
      VAR_4 = FUNC_0(VAR_5, 0, (int)VAR_2->iEof, (void**)VAR_3);
      FUNC_1( VAR_4!=VAR_0 );
    }
  }
  return VAR_4;
}
