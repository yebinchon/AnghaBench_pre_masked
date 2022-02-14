
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int buffer_length; void* buffer_address_low; void* buffer_address_high; } ;
typedef TYPE_2__ sli4_sge_t ;
typedef int ocs_hw_t ;
struct TYPE_9__ {TYPE_2__* virt; } ;
struct TYPE_11__ {TYPE_1__ def_sgl; } ;
typedef TYPE_3__ ocs_hw_io_t ;
struct TYPE_12__ {int size; int phys; } ;
typedef TYPE_4__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *,TYPE_3__*) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_1, ocs_hw_io_t *VAR_2, ocs_dma_t *VAR_3, uint32_t VAR_4,
  ocs_dma_t *VAR_5)
{
 sli4_sge_t *VAR_6 = ((void*)0);

 if (!VAR_1 || !VAR_2) {
  FUNC_2(((void*)0), "bad parm hw=%p io=%p\n", VAR_1, VAR_2);
  return VAR_0;
 }

 VAR_6 = VAR_2->def_sgl.virt;


 VAR_6->buffer_address_high = FUNC_0(VAR_3->phys);
 VAR_6->buffer_address_low = FUNC_1(VAR_3->phys);
 VAR_6->buffer_length = VAR_4;
 VAR_6++;


 VAR_6->buffer_address_high = FUNC_0(VAR_5->phys);
 VAR_6->buffer_address_low = FUNC_1(VAR_5->phys);
 VAR_6->buffer_length = VAR_5->size;

 return 0;
}
