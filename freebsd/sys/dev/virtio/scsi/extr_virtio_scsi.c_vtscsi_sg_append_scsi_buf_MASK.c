
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct vtscsi_softc {int dummy; } ;
struct sglist {int dummy; } ;
struct ccb_hdr {int flags; } ;
struct ccb_scsiio {void* data_ptr; int sglist_cnt; int dxfer_len; struct ccb_hdr ccb_h; } ;
struct bus_dma_segment {int ds_len; int ds_addr; } ;
struct bio {int dummy; } ;



 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct sglist*,void*,int ) ;
 int FUNC_1 (struct sglist*,struct bio*) ;
 int FUNC_2 (struct sglist*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct vtscsi_softc *VAR_2, struct sglist *VAR_3,
    struct ccb_scsiio *VAR_4)
{
 struct ccb_hdr *VAR_5;
 struct bus_dma_segment *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = &VAR_4->ccb_h;
 VAR_8 = 0;

 switch ((VAR_5->flags & VAR_0)) {
 case 128:
  VAR_8 = FUNC_0(VAR_3, VAR_4->data_ptr, VAR_4->dxfer_len);
  break;
 case 131:
  VAR_8 = FUNC_2(VAR_3,
      (vm_paddr_t)(vm_offset_t) VAR_4->data_ptr, VAR_4->dxfer_len);
  break;
 case 130:
  for (VAR_7 = 0; VAR_7 < VAR_4->sglist_cnt && VAR_8 == 0; VAR_7++) {
   VAR_6 = &((struct bus_dma_segment *)VAR_4->data_ptr)[VAR_7];
   VAR_8 = FUNC_0(VAR_3,
       (void *)(vm_offset_t) VAR_6->ds_addr, VAR_6->ds_len);
  }
  break;
 case 129:
  for (VAR_7 = 0; VAR_7 < VAR_4->sglist_cnt && VAR_8 == 0; VAR_7++) {
   VAR_6 = &((struct bus_dma_segment *)VAR_4->data_ptr)[VAR_7];
   VAR_8 = FUNC_2(VAR_3,
       (vm_paddr_t) VAR_6->ds_addr, VAR_6->ds_len);
  }
  break;
 case 132:
  VAR_8 = FUNC_1(VAR_3, (struct bio *) VAR_4->data_ptr);
  break;
 default:
  VAR_8 = VAR_1;
  break;
 }

 return (VAR_8);
}
