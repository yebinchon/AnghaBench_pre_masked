
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct mpt_softc {int max_cam_seg_cnt; scalar_t__ request_phys; int buffer_dmat; TYPE_1__* request_pool; int * request; int request_dmap; int request_dmat; int parent_dmat; } ;
struct mpt_map_info {int error; scalar_t__ phys; struct mpt_softc* mpt; } ;
struct TYPE_2__ {int dmap; int * sense_vbuf; scalar_t__ sense_pbuf; int * req_vbuf; scalar_t__ req_pbuf; int index; } ;
typedef TYPE_1__ request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mpt_softc*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int,int ,struct mpt_map_info*,int ) ;
 scalar_t__ FUNC_3 (int ,void**,int,int *) ;
 scalar_t__ FUNC_4 (struct mpt_softc*,int ,int,int ,int ,int ,int *,int *,int,int,int ,int ,int *) ;
 int VAR_8 ;
 int FUNC_5 (struct mpt_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct mpt_softc *VAR_9)
{
 struct mpt_map_info VAR_10;
 uint8_t *VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;


 if (FUNC_4(VAR_9, VAR_9->parent_dmat, 1,
     0, VAR_2, VAR_2,
     ((void*)0), ((void*)0), (VAR_9->max_cam_seg_cnt - 1) * VAR_7,
     VAR_9->max_cam_seg_cnt, VAR_4, 0,
     &VAR_9->buffer_dmat) != 0) {
  FUNC_5(VAR_9, "cannot create a dma tag for data buffers\n");
  return (1);
 }


 if (FUNC_4(VAR_9, VAR_9->parent_dmat, VAR_7, 0,
     VAR_3, VAR_2,
     ((void*)0), ((void*)0), FUNC_0(VAR_9), 1, VAR_4, 0,
     &VAR_9->request_dmat) != 0) {
  FUNC_5(VAR_9, "cannot create a dma tag for requests\n");
  return (1);
 }


 if (FUNC_3(VAR_9->request_dmat, (void **)&VAR_9->request,
     VAR_1 | VAR_0, &VAR_9->request_dmap) != 0) {
  FUNC_5(VAR_9, "cannot allocate %d bytes of request memory\n",
      FUNC_0(VAR_9));
  return (1);
 }

 VAR_10.mpt = VAR_9;
 VAR_10.error = 0;


 FUNC_2(VAR_9->request_dmat, VAR_9->request_dmap, VAR_9->request,
     FUNC_0(VAR_9), VAR_8, &VAR_10, 0);

 if (VAR_10.error) {
  FUNC_5(VAR_9, "error %d loading dma map for DMA request queue\n",
      VAR_10.error);
  return (1);
 }
 VAR_9->request_phys = VAR_10.phys;




 VAR_14 = 0;
 VAR_12 = VAR_9->request_phys;
 VAR_11 = VAR_9->request;
 VAR_13 = VAR_12 + FUNC_0(VAR_9);
 while(VAR_12 < VAR_13) {
  request_t *VAR_16 = &VAR_9->request_pool[VAR_14];
  VAR_16->index = VAR_14++;


  VAR_16->req_pbuf = VAR_12;
  VAR_16->req_vbuf = VAR_11;

  VAR_12 += VAR_5;
  VAR_11 += VAR_5;

  VAR_16->sense_pbuf = (VAR_12 - VAR_6);
  VAR_16->sense_vbuf = (VAR_11 - VAR_6);

  VAR_15 = FUNC_1(VAR_9->buffer_dmat, 0, &VAR_16->dmap);
  if (VAR_15) {
   FUNC_5(VAR_9, "error %d creating per-cmd DMA maps\n",
       VAR_15);
   return (1);
  }
 }

 return (0);
}
