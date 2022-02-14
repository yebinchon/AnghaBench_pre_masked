
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int num_elem; int elem_size; char* array_virt_addr; int array_dma_addr; int* pi_virt_addr; int pi_dma_addr; scalar_t__ ci_local; scalar_t__ q_id; } ;
struct TYPE_7__ {int num_elem; int elem_size; char* array_virt_addr; int array_dma_addr; int* ci_virt_addr; int ci_dma_addr; scalar_t__ pi_local; scalar_t__ q_id; } ;
struct TYPE_10__ {char* tag; int size; char* virt_addr; void* dma_addr; int align; } ;
struct TYPE_9__ {TYPE_2__ admin_ob_queue; TYPE_1__ admin_ib_queue; TYPE_6__ admin_queue_dma_mem; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
typedef void* dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;

int FUNC_5(pqisrc_softstate_t *VAR_4)
{
 uint32_t VAR_5 = 0;
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = 0;
 char *VAR_8 = ((void*)0);
 dma_addr_t VAR_9 = 0;
 int VAR_10 = VAR_3;

 VAR_5 = (VAR_4->admin_ib_queue.num_elem *
   VAR_4->admin_ib_queue.elem_size);

 VAR_6 = (VAR_4->admin_ob_queue.num_elem *
   VAR_4->admin_ob_queue.elem_size);

 VAR_7 = VAR_5 + VAR_6 +
   2 * sizeof(uint32_t) + VAR_0 + 1;

 VAR_4->admin_queue_dma_mem.tag = "admin_queue";
 VAR_4->admin_queue_dma_mem.size = VAR_7;
 VAR_4->admin_queue_dma_mem.align = VAR_1;
 VAR_10 = FUNC_4(VAR_4, &VAR_4->admin_queue_dma_mem);
 if (VAR_10) {
  FUNC_1("Failed to Allocate Admin Q ret : %d\n", VAR_10);
  goto err_out;
 }


 VAR_8 = VAR_4->admin_queue_dma_mem.virt_addr;
 VAR_9 = VAR_4->admin_queue_dma_mem.dma_addr;


 VAR_4->admin_ib_queue.q_id = 0;
 VAR_4->admin_ib_queue.array_virt_addr = VAR_8;
 VAR_4->admin_ib_queue.array_dma_addr = VAR_9;
 VAR_4->admin_ib_queue.pi_local = 0;

 VAR_4->admin_ob_queue.q_id = 0;
 VAR_4->admin_ob_queue.array_virt_addr = VAR_8 + VAR_5;
 VAR_4->admin_ob_queue.array_dma_addr = VAR_9 + VAR_5;
 VAR_4->admin_ob_queue.ci_local = 0;


 VAR_4->admin_ib_queue.ci_virt_addr =
  (uint32_t*)((uint8_t*)VAR_4->admin_ob_queue.array_virt_addr
    + VAR_6);
 VAR_4->admin_ib_queue.ci_dma_addr =
  (dma_addr_t)((uint8_t*)VAR_4->admin_ob_queue.array_dma_addr +
    VAR_6);


 VAR_4->admin_ob_queue.pi_virt_addr =
  (uint32_t*)((uint8_t*)(VAR_4->admin_ib_queue.ci_virt_addr) +
  VAR_0 + 1);
 VAR_4->admin_ob_queue.pi_dma_addr =
  (dma_addr_t)((uint8_t*)(VAR_4->admin_ib_queue.ci_dma_addr) +
  VAR_0 + 1);

 FUNC_3("softs->admin_ib_queue.ci_dma_addr : %p,softs->admin_ob_queue.pi_dma_addr :%p\n",
    (void*)VAR_4->admin_ib_queue.ci_dma_addr, (void*)VAR_4->admin_ob_queue.pi_dma_addr );


 FUNC_0(!(VAR_4->admin_ib_queue.array_dma_addr &
    VAR_0));
 FUNC_0(!(VAR_4->admin_ib_queue.ci_dma_addr &
    VAR_0));
 FUNC_0(!(VAR_4->admin_ob_queue.array_dma_addr &
    VAR_0));
 FUNC_0(!(VAR_4->admin_ob_queue.pi_dma_addr &
    VAR_0));

 FUNC_2("OUT\n");
 return VAR_10;

err_out:
 FUNC_2("failed OUT\n");
 return VAR_2;
}
