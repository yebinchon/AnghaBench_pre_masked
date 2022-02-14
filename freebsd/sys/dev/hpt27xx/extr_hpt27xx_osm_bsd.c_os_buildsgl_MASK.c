
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int sglist_cnt; int dxfer_len; scalar_t__ data_ptr; } ;
struct TYPE_10__ {int flags; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
struct TYPE_12__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_15__ {int priv; } ;
struct TYPE_14__ {union ccb* ccb; } ;
struct TYPE_13__ {int eot; int size; } ;
typedef TYPE_4__* PSG ;
typedef TYPE_5__* POS_CMDEXT ;
typedef TYPE_6__* PCOMMAND ;
typedef scalar_t__ HPT_UPTR ;
typedef int HPT_U8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(PCOMMAND VAR_5, PSG VAR_6, int VAR_7)
{
 POS_CMDEXT VAR_8 = (POS_CMDEXT)VAR_5->priv;
 union ccb *VAR_9 = VAR_8->ccb;
 bus_dma_segment_t *VAR_10 = (bus_dma_segment_t *)VAR_9->csio.data_ptr;
 int VAR_11;

 if(VAR_7) {
  if (VAR_9->ccb_h.flags & VAR_0)
   FUNC_2("physical address unsupported");

  if (VAR_9->ccb_h.flags & VAR_1) {
   if (VAR_9->ccb_h.flags & VAR_2)
    FUNC_2("physical address unsupported");

   for (VAR_11 = 0; VAR_11 < VAR_9->csio.sglist_cnt; VAR_11++) {
    FUNC_1(&VAR_6[VAR_11], (HPT_U8 *)(HPT_UPTR)VAR_10[VAR_11].ds_addr);
    VAR_6[VAR_11].size = VAR_10[VAR_11].ds_len;
    VAR_6[VAR_11].eot = (VAR_11==VAR_9->csio.sglist_cnt-1)? 1 : 0;
   }
  }
  else {
   FUNC_1(VAR_6, (HPT_U8 *)VAR_9->csio.data_ptr);
   VAR_6->size = VAR_9->csio.dxfer_len;
   VAR_6->eot = 1;
  }
  return VAR_4;
 }


 FUNC_0(0);
 return VAR_3;
}
