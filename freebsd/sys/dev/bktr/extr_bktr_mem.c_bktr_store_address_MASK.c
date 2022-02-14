
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* vm_offset_t ;
struct TYPE_2__ {int addresses_stored; void* buf; void* vbibuffer; void* vbidata; void* odd_dma_prog; void* dma_prog; } ;




 int VAR_0 ;



 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int,int,void*) ;

void
FUNC_1(int VAR_2, int VAR_3, vm_offset_t VAR_4)
{

 if (VAR_2 < 0 || VAR_2 >= VAR_0) {
  FUNC_0("bktr_mem: Unit number %d invalid for memory type %d, address %p\n",
         VAR_2, VAR_3, (void *) VAR_4);
  return;
 }

 switch (VAR_3) {
 case 131:
  VAR_1[VAR_2].dma_prog = VAR_4;
  VAR_1[VAR_2].addresses_stored = 1;
  break;
 case 130:
  VAR_1[VAR_2].odd_dma_prog = VAR_4;
  VAR_1[VAR_2].addresses_stored = 1;
  break;
 case 128:
  VAR_1[VAR_2].vbidata = VAR_4;
  VAR_1[VAR_2].addresses_stored = 1;
  break;
 case 129:
  VAR_1[VAR_2].vbibuffer = VAR_4;
  VAR_1[VAR_2].addresses_stored = 1;
  break;
 case 132:
  VAR_1[VAR_2].buf = VAR_4;
  VAR_1[VAR_2].addresses_stored = 1;
  break;
 default:
  FUNC_0("bktr_mem: Invalid memory type %d for bktr%d, address %p\n",
   VAR_3, VAR_2, (void *)VAR_4);
  break;
 }
}
