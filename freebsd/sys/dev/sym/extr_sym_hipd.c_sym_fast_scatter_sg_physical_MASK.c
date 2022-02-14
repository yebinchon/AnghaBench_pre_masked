
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sym_tblmove {void* size; void* addr; } ;
typedef int hcb_p ;
typedef TYPE_2__* ccb_p ;
struct TYPE_8__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_6__ {struct sym_tblmove* data; } ;
struct TYPE_7__ {int segments; TYPE_1__ phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,long,long) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(hcb_p VAR_4, ccb_p VAR_5,
        bus_dma_segment_t *VAR_6, int VAR_7)
{
 struct sym_tblmove *VAR_8;
 bus_dma_segment_t *VAR_9;

 FUNC_0(VAR_2);

 if (VAR_7 > VAR_3)
  return -1;

 VAR_8 = &VAR_5->phys.data[VAR_3-1];
 VAR_9 = &VAR_6[VAR_7-1];
 VAR_5->segments = VAR_7;

 while (1) {
  VAR_8->addr = FUNC_1(VAR_9->ds_addr);
  VAR_8->size = FUNC_1(VAR_9->ds_len);
  if (VAR_0 & VAR_1) {
   FUNC_2 ("%s scatter: paddr=%lx len=%ld\n",
    FUNC_3(VAR_4), (long) VAR_9->ds_addr,
    (long) VAR_9->ds_len);
  }
  if (VAR_9 != VAR_6) {
   --VAR_8;
   --VAR_9;
   continue;
  }
  break;
 }
 return 0;
}
