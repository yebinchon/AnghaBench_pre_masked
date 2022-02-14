
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ viaCoroutine; } ;
struct SrcList_item {scalar_t__ zName; TYPE_4__* pSelect; TYPE_2__* pTab; TYPE_1__ fg; } ;
struct TYPE_9__ {scalar_t__ selId; int pHaving; int pWhere; } ;
struct TYPE_8__ {struct SrcList_item* a; } ;
struct TYPE_7__ {scalar_t__ pSchema; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Select ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct SrcList_item *FUNC_3(
  SrcList *VAR_0,
  struct SrcList_item *VAR_1
){
  struct SrcList_item *VAR_2;
  for(VAR_2 = VAR_0->a; VAR_2<VAR_1; VAR_2++){
    Select *VAR_3;
    if( VAR_2->pSelect==0 ) continue;
    if( VAR_2->fg.viaCoroutine ) continue;
    if( VAR_2->zName==0 ) continue;
    FUNC_0( VAR_2->pTab!=0 );
    FUNC_0( VAR_1->pTab!=0 );
    if( VAR_2->pTab->pSchema!=VAR_1->pTab->pSchema ) continue;
    if( FUNC_2(VAR_2->zName, VAR_1->zName)!=0 ) continue;
    VAR_3 = VAR_2->pSelect;
    if( VAR_2->pTab->pSchema==0 && VAR_1->pSelect->selId!=VAR_3->selId ){


      continue;
    }
    if( FUNC_1(0, VAR_1->pSelect->pWhere, VAR_3->pWhere, -1)
     || FUNC_1(0, VAR_1->pSelect->pHaving, VAR_3->pHaving, -1)
    ){


      continue;
    }
    return VAR_2;
  }
  return 0;
}
