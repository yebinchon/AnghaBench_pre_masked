
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwm_softc {TYPE_1__* fw_paging_db; } ;
struct TYPE_4__ {int * vaddr; } ;
struct TYPE_3__ {TYPE_2__ fw_paging_block; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(struct iwm_softc *VAR_1)
{
 int VAR_2;

 if (VAR_1->fw_paging_db[0].fw_paging_block.vaddr == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->fw_paging_db[VAR_2].fw_paging_block);
 }

 FUNC_1(VAR_1->fw_paging_db, 0, sizeof(VAR_1->fw_paging_db));
}
