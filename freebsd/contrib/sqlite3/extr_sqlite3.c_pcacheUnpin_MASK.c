
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pCache; scalar_t__ bPurgeable; } ;
struct TYPE_6__ {int (* xUnpin ) (int ,int ,int ) ;} ;
struct TYPE_8__ {TYPE_1__ pcache2; } ;
struct TYPE_7__ {TYPE_5__* pCache; int pPage; int pgno; } ;
typedef TYPE_2__ PgHdr ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(PgHdr *VAR_1){
  if( VAR_1->pCache->bPurgeable ){
    FUNC_1(("%p.UNPIN %d\n", VAR_1->pCache, VAR_1->pgno));
    VAR_0.pcache2.xUnpin(VAR_1->pCache->pCache, VAR_1->pPage, 0);
    FUNC_0(VAR_1->pCache);
  }
}
