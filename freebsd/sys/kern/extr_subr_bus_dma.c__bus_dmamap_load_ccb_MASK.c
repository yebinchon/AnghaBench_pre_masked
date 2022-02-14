
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct ccb_nvmeio {int sglist_cnt; int dxfer_len; void* data_ptr; } ;
struct ccb_ataio {int dxfer_len; void* data_ptr; } ;
struct ccb_scsiio {int sglist_cnt; int dxfer_len; void* data_ptr; } ;
struct ccb_hdr {int func_code; int flags; } ;
union ccb {struct ccb_nvmeio nvmeio; struct ccb_ataio ataio; struct ccb_scsiio ctio; struct ccb_scsiio csio; struct ccb_hdr ccb_h; } ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bio {int dummy; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;



 int VAR_0 ;
 int FUNC_0 (int ,int ,struct bio*,int*,int) ;
 int FUNC_1 (int ,int ,void*,int ,int ,int,int *,int*) ;
 int FUNC_2 (int ,int ,int ,int ,int,int *,int*) ;
 int FUNC_3 (int ,int ,int *,int ,int*,int) ;
 int FUNC_4 (int ,int ,int *,int ,int ,int*,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3, union ccb *VAR_4,
      int *VAR_5, int VAR_6)
{
 struct ccb_hdr *VAR_7;
 void *VAR_8;
 int VAR_9;
 uint32_t VAR_10;
 uint16_t VAR_11;

 VAR_9 = 0;
 VAR_7 = &VAR_4->ccb_h;
 switch (VAR_7->func_code) {
 case 128: {
  struct ccb_scsiio *VAR_12;

  VAR_12 = &VAR_4->csio;
  VAR_8 = VAR_12->data_ptr;
  VAR_10 = VAR_12->dxfer_len;
  VAR_11 = VAR_12->sglist_cnt;
  break;
 }
 case 131: {
  struct ccb_scsiio *VAR_13;

  VAR_13 = &VAR_4->ctio;
  VAR_8 = VAR_13->data_ptr;
  VAR_10 = VAR_13->dxfer_len;
  VAR_11 = VAR_13->sglist_cnt;
  break;
 }
 case 132: {
  struct ccb_ataio *VAR_14;

  VAR_14 = &VAR_4->ataio;
  VAR_8 = VAR_14->data_ptr;
  VAR_10 = VAR_14->dxfer_len;
  VAR_11 = 0;
  break;
 }
 case 129:
 case 130: {
  struct ccb_nvmeio *VAR_15;

  VAR_15 = &VAR_4->nvmeio;
  VAR_8 = VAR_15->data_ptr;
  VAR_10 = VAR_15->dxfer_len;
  VAR_11 = VAR_15->sglist_cnt;
  break;
 }
 default:
  FUNC_5("_bus_dmamap_load_ccb: Unsupported func code %d",
      VAR_7->func_code);
 }

 switch ((VAR_7->flags & VAR_0)) {
 case 133:
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_8, VAR_10,
      VAR_1, VAR_6, ((void*)0), VAR_5);
  break;
 case 136:
  VAR_9 = FUNC_2(VAR_2, VAR_3,
      (vm_paddr_t)(uintptr_t)VAR_8, VAR_10, VAR_6, ((void*)0),
      VAR_5);
  break;
 case 135:
  VAR_9 = FUNC_4(VAR_2, VAR_3,
      (bus_dma_segment_t *)VAR_8, VAR_11, VAR_1,
      VAR_5, VAR_6, 0, VAR_10);
  break;
 case 134:
  VAR_9 = FUNC_3(VAR_2, VAR_3,
      (bus_dma_segment_t *)VAR_8, VAR_11, VAR_5, VAR_6);
  break;
 case 137:
  VAR_9 = FUNC_0(VAR_2, VAR_3, (struct bio *)VAR_8,
      VAR_5, VAR_6);
  break;
 default:
  FUNC_5("_bus_dmamap_load_ccb: flags 0x%X unimplemented",
      VAR_7->flags);
 }
 return (VAR_9);
}
