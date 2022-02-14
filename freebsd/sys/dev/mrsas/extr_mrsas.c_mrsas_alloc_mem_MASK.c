
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mrsas_softc {int max_num_sge; int io_frames_alloc_sz; int chain_frames_alloc_sz; scalar_t__ msix_vectors; int reply_alloc_sz; int max_fw_cmds; int mrsas_dev; int * data_tag; int io_lock; int * mrsas_parent_tag; int pd_info_phys_addr; int pd_info_mem; int pd_info_dmamap; int * pd_info_tag; int evt_detail_phys_addr; int evt_detail_mem; int evt_detail_dmamap; int * evt_detail_tag; int sense_phys_addr; int sense_mem; int sense_dmamap; int * sense_tag; int reply_desc_phys_addr; int reply_desc_mem; int reply_desc_dmamap; int * reply_desc_tag; int chain_frame_phys_addr; int chain_frame_mem; int chain_frame_dmamap; int * chain_frame_tag; int io_request_phys_addr; int io_request_mem; int io_request_dmamap; int * io_request_tag; int verbuf_phys_addr; int verbuf_mem; int verbuf_dmamap; int * verbuf_tag; } ;
struct mrsas_pd_info {int dummy; } ;
struct mrsas_evt_detail {int dummy; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *,void**,int ,int *) ;
 int * VAR_8 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_5(struct mrsas_softc *VAR_10)
{
 u_int32_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
  VAR_16, VAR_17, VAR_18;




 if (FUNC_0(((void*)0),
     1,
     0,
     VAR_2,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_5,
     VAR_10->max_num_sge,
     VAR_5,
     0,
     ((void*)0), ((void*)0),
     &VAR_10->mrsas_parent_tag
     )) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot allocate parent DMA tag\n");
  return (VAR_4);
 }



 VAR_11 = VAR_6 * (sizeof(bus_addr_t));
 if (FUNC_0(VAR_10->mrsas_parent_tag,
     1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_11,
     1,
     VAR_11,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_10->verbuf_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot allocate verbuf DMA tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_10->verbuf_tag, (void **)&VAR_10->verbuf_mem,
     VAR_1, &VAR_10->verbuf_dmamap)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot allocate verbuf memory\n");
  return (VAR_4);
 }
 FUNC_3(VAR_10->verbuf_mem, VAR_11);
 if (FUNC_1(VAR_10->verbuf_tag, VAR_10->verbuf_dmamap, VAR_10->verbuf_mem,
     VAR_11, VAR_9, &VAR_10->verbuf_phys_addr,
     VAR_1)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot load verbuf DMA map\n");
  return (VAR_4);
 }



 VAR_12 = VAR_10->io_frames_alloc_sz;
 if (FUNC_0(VAR_10->mrsas_parent_tag,
     16, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_12,
     1,
     VAR_12,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_10->io_request_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot create IO request tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_10->io_request_tag, (void **)&VAR_10->io_request_mem,
     VAR_1, &VAR_10->io_request_dmamap)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot alloc IO request memory\n");
  return (VAR_4);
 }
 FUNC_3(VAR_10->io_request_mem, VAR_12);
 if (FUNC_1(VAR_10->io_request_tag, VAR_10->io_request_dmamap,
     VAR_10->io_request_mem, VAR_12, VAR_9,
     &VAR_10->io_request_phys_addr, VAR_1)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot load IO request memory\n");
  return (VAR_4);
 }



 VAR_15 = VAR_10->chain_frames_alloc_sz;
 if (FUNC_0(VAR_10->mrsas_parent_tag,
     4, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_15,
     1,
     VAR_15,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_10->chain_frame_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot create chain frame tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_10->chain_frame_tag, (void **)&VAR_10->chain_frame_mem,
     VAR_1, &VAR_10->chain_frame_dmamap)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot alloc chain frame memory\n");
  return (VAR_4);
 }
 FUNC_3(VAR_10->chain_frame_mem, VAR_15);
 if (FUNC_1(VAR_10->chain_frame_tag, VAR_10->chain_frame_dmamap,
     VAR_10->chain_frame_mem, VAR_15, VAR_9,
     &VAR_10->chain_frame_phys_addr, VAR_1)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot load chain frame memory\n");
  return (VAR_4);
 }
 VAR_17 = VAR_10->msix_vectors > 0 ? VAR_10->msix_vectors : 1;



 VAR_13 = VAR_10->reply_alloc_sz * VAR_17;
 if (FUNC_0(VAR_10->mrsas_parent_tag,
     16, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_13,
     1,
     VAR_13,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_10->reply_desc_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot create reply descriptor tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_10->reply_desc_tag, (void **)&VAR_10->reply_desc_mem,
     VAR_1, &VAR_10->reply_desc_dmamap)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot alloc reply descriptor memory\n");
  return (VAR_4);
 }
 if (FUNC_1(VAR_10->reply_desc_tag, VAR_10->reply_desc_dmamap,
     VAR_10->reply_desc_mem, VAR_13, VAR_9,
     &VAR_10->reply_desc_phys_addr, VAR_1)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot load reply descriptor memory\n");
  return (VAR_4);
 }



 VAR_14 = VAR_10->max_fw_cmds * VAR_7;
 if (FUNC_0(VAR_10->mrsas_parent_tag,
     64, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_14,
     1,
     VAR_14,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_10->sense_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot allocate sense buf tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_10->sense_tag, (void **)&VAR_10->sense_mem,
     VAR_1, &VAR_10->sense_dmamap)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot allocate sense buf memory\n");
  return (VAR_4);
 }
 if (FUNC_1(VAR_10->sense_tag, VAR_10->sense_dmamap,
     VAR_10->sense_mem, VAR_14, VAR_9, &VAR_10->sense_phys_addr,
     VAR_1)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot load sense buf memory\n");
  return (VAR_4);
 }




 VAR_16 = sizeof(struct mrsas_evt_detail);
 if (FUNC_0(VAR_10->mrsas_parent_tag,
     1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_16,
     1,
     VAR_16,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_10->evt_detail_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot create Event detail tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_10->evt_detail_tag, (void **)&VAR_10->evt_detail_mem,
     VAR_1, &VAR_10->evt_detail_dmamap)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot alloc Event detail buffer memory\n");
  return (VAR_4);
 }
 FUNC_3(VAR_10->evt_detail_mem, VAR_16);
 if (FUNC_1(VAR_10->evt_detail_tag, VAR_10->evt_detail_dmamap,
     VAR_10->evt_detail_mem, VAR_16, VAR_9,
     &VAR_10->evt_detail_phys_addr, VAR_1)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot load Event detail buffer memory\n");
  return (VAR_4);
 }




 VAR_18 = sizeof(struct mrsas_pd_info);
 if (FUNC_0(VAR_10->mrsas_parent_tag,
     1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_18,
     1,
     VAR_18,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_10->pd_info_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot create PD INFO tag\n");
  return (VAR_4);
 }
 if (FUNC_2(VAR_10->pd_info_tag, (void **)&VAR_10->pd_info_mem,
     VAR_1, &VAR_10->pd_info_dmamap)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot alloc PD INFO buffer memory\n");
  return (VAR_4);
 }
 FUNC_3(VAR_10->pd_info_mem, VAR_18);
 if (FUNC_1(VAR_10->pd_info_tag, VAR_10->pd_info_dmamap,
     VAR_10->pd_info_mem, VAR_18, VAR_9,
     &VAR_10->pd_info_phys_addr, VAR_1)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot load PD INFO buffer memory\n");
  return (VAR_4);
 }





 if (FUNC_0(VAR_10->mrsas_parent_tag,
     1,
     0,
     VAR_2,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_5,
     VAR_10->max_num_sge,
     VAR_5,
     VAR_0,
     VAR_8,
     &VAR_10->io_lock,
     &VAR_10->data_tag)) {
  FUNC_4(VAR_10->mrsas_dev, "Cannot create data dma tag\n");
  return (VAR_4);
 }
 return (0);
}
