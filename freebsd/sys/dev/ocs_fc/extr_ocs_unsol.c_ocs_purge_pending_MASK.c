
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int hw; } ;
typedef TYPE_3__ ocs_t ;
typedef int ocs_lock_t ;
typedef int ocs_list_t ;
struct TYPE_13__ {int * hio; TYPE_2__* header; } ;
typedef TYPE_4__ ocs_hw_sequence_t ;
typedef int int32_t ;
typedef int fc_header_t ;
struct TYPE_10__ {scalar_t__ virt; } ;
struct TYPE_11__ {TYPE_1__ dma; } ;


 int FUNC_0 (TYPE_3__*,int *,char*) ;
 TYPE_4__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static int32_t
FUNC_4(ocs_t *VAR_0, ocs_list_t *VAR_1, ocs_lock_t *VAR_2)
{
 ocs_hw_sequence_t *VAR_3;

 for (;;) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3 == ((void*)0)) {
   break;
  }

  FUNC_0(VAR_0, (fc_header_t*) VAR_3->header->dma.virt, "Discarding held frame\n");
  if (VAR_3->hio != ((void*)0)) {
   FUNC_3(VAR_0, VAR_3->hio);
  }
  FUNC_2(&VAR_0->hw, VAR_3);
 }

 return 0;
}
