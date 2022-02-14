
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ port_type; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_10__ {int request_length; int subsystem; int opcode; } ;
typedef TYPE_2__ sli4_req_hdr_t ;
struct TYPE_11__ {int size; TYPE_2__* virt; } ;
typedef TYPE_3__ ocs_dma_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,void*,size_t,int,TYPE_3__*) ;

__attribute__((used)) static int32_t
FUNC_2(sli4_t *VAR_3, void *VAR_4, size_t VAR_5, ocs_dma_t *VAR_6)
{
 sli4_req_hdr_t *VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;

 if (VAR_1 == VAR_3->port_type) {
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, sizeof(sli4_req_hdr_t), VAR_6);
 }

 if (VAR_6 == ((void*)0)) {
  return 0;
 }

 FUNC_0(VAR_6->virt, 0, VAR_6->size);

 VAR_7 = VAR_6->virt;

 VAR_7->opcode = VAR_0;
 VAR_7->subsystem = VAR_2;
 VAR_7->request_length = VAR_6->size;

 return(VAR_8 + sizeof(sli4_req_hdr_t));
}
