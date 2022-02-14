
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int os; } ;
typedef TYPE_5__ sli4_t ;
struct TYPE_11__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_12__ {TYPE_2__ data; } ;
struct TYPE_13__ {size_t buffer_length; TYPE_3__ u; int bde_type; } ;
struct TYPE_10__ {int command; } ;
struct TYPE_15__ {TYPE_4__ bde_loop_map; TYPE_1__ hdr; } ;
typedef TYPE_6__ sli4_cmd_read_topology_t ;
struct TYPE_16__ {size_t size; void* virt; int phys; } ;
typedef TYPE_7__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, ocs_dma_t *VAR_6)
{
 sli4_cmd_read_topology_t *VAR_7 = VAR_4;

 FUNC_3(VAR_4, 0, VAR_5);

 VAR_7->hdr.command = VAR_1;

 if (VAR_6 && VAR_6->size) {
  if (VAR_6->size < VAR_2) {
   FUNC_2(VAR_3->os, "loop map buffer too small %jd\n",
     VAR_6->size);
   return 0;
  }

  FUNC_3(VAR_6->virt, 0, VAR_6->size);

  VAR_7->bde_loop_map.bde_type = VAR_0;
  VAR_7->bde_loop_map.buffer_length = VAR_6->size;
  VAR_7->bde_loop_map.u.data.buffer_address_low = FUNC_1(VAR_6->phys);
  VAR_7->bde_loop_map.u.data.buffer_address_high = FUNC_0(VAR_6->phys);
 }

 return sizeof(sli4_cmd_read_topology_t);
}
