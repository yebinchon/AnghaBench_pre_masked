
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int buf; int vbibuffer; int vbidata; int odd_dma_prog; int dma_prog; } ;




 int VAR_0 ;



 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int,int) ;

vm_offset_t
FUNC_1(int VAR_2, int VAR_3)
{

 if (VAR_2 < 0 || VAR_2 >= VAR_0) {
  FUNC_0("bktr_mem: Unit number %d too large for memory type %d\n",
   VAR_2, VAR_3);
  return (0);
 }
 switch (VAR_3) {
 case 131:
  return VAR_1[VAR_2].dma_prog;
 case 130:
  return VAR_1[VAR_2].odd_dma_prog;
 case 128:
  return VAR_1[VAR_2].vbidata;
 case 129:
  return VAR_1[VAR_2].vbibuffer;
 case 132:
  return VAR_1[VAR_2].buf;
 default:
  FUNC_0("bktr_mem: Invalid memory type %d for bktr%d",
         VAR_3, VAR_2);
  return (0);
 }
}
