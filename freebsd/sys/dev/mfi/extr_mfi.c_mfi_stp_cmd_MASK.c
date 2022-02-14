
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct mfi_softc {int mfi_dev; int * kbuff_arr; int * mfi_kbuff_arr_busaddr; int * mfi_kbuff_arr_dmamap; int * mfi_kbuff_arr_dmat; int mfi_parent_dmat; } ;
struct mfi_sg64 {int dummy; } ;
struct mfi_sg32 {int dummy; } ;
struct mfi_ioc_packet {int mfi_sge_count; TYPE_7__* mfi_sgl; scalar_t__ mfi_sgl_off; } ;
struct mfi_command {int cm_extra_frames; int cm_total_frame_size; int cm_flags; TYPE_6__* cm_frame; } ;
struct megasas_sge {int phys_addr; int length; } ;
typedef scalar_t__ caddr_t ;
typedef int bus_addr_t ;
struct TYPE_14__ {int iov_len; int iov_base; } ;
struct TYPE_11__ {TYPE_3__* sg32; TYPE_2__* sg64; } ;
struct TYPE_12__ {TYPE_4__ sgl; } ;
struct TYPE_8__ {int sg_count; int flags; } ;
struct TYPE_13__ {TYPE_5__ stp; TYPE_1__ header; } ;
struct TYPE_10__ {int len; int addr; } ;
struct TYPE_9__ {int len; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(struct mfi_softc *VAR_9, struct mfi_command *VAR_10,caddr_t VAR_11)
{
 uint8_t VAR_12;
 struct mfi_ioc_packet *VAR_13;
 VAR_13 = (struct mfi_ioc_packet *)VAR_11;
 int VAR_14, VAR_15;
 struct megasas_sge *VAR_16;

 FUNC_5(VAR_9->kbuff_arr, 0, sizeof(VAR_9->kbuff_arr));
 VAR_16 =(struct megasas_sge *) ((uintptr_t)VAR_10->cm_frame + VAR_13->mfi_sgl_off);
 VAR_10->cm_frame->header.sg_count = VAR_13->mfi_sge_count;

 if (sizeof(bus_addr_t) == 8) {
  VAR_10->cm_frame->header.flags |= VAR_6;
  VAR_10->cm_extra_frames = 2;
  VAR_14 = sizeof(struct mfi_sg64);
 } else {
  VAR_10->cm_extra_frames = (VAR_10->cm_total_frame_size - 1) / VAR_7;
  VAR_14 = sizeof(struct mfi_sg32);
 }

 VAR_10->cm_total_frame_size += (VAR_14 * VAR_13->mfi_sge_count);
 for (VAR_12 = 0; VAR_12 < VAR_13->mfi_sge_count; VAR_12++) {
   if (FUNC_0( VAR_9->mfi_parent_dmat,
   1, 0,
   VAR_3,
   VAR_2,
   ((void*)0), ((void*)0),
   VAR_13->mfi_sgl[VAR_12].iov_len,
   2,
   VAR_13->mfi_sgl[VAR_12].iov_len,
   VAR_0,
   ((void*)0), ((void*)0),
   &VAR_9->mfi_kbuff_arr_dmat[VAR_12])) {
   FUNC_4(VAR_9->mfi_dev,
       "Cannot allocate mfi_kbuff_arr_dmat tag\n");
   return (VAR_4);
  }

  if (FUNC_2(VAR_9->mfi_kbuff_arr_dmat[VAR_12],
      (void **)&VAR_9->kbuff_arr[VAR_12], VAR_1,
      &VAR_9->mfi_kbuff_arr_dmamap[VAR_12])) {
   FUNC_4(VAR_9->mfi_dev,
       "Cannot allocate mfi_kbuff_arr_dmamap memory\n");
   return (VAR_4);
  }

  FUNC_1(VAR_9->mfi_kbuff_arr_dmat[VAR_12],
      VAR_9->mfi_kbuff_arr_dmamap[VAR_12], VAR_9->kbuff_arr[VAR_12],
      VAR_13->mfi_sgl[VAR_12].iov_len, VAR_8,
      &VAR_9->mfi_kbuff_arr_busaddr[VAR_12], 0);

  if (!VAR_9->kbuff_arr[VAR_12]) {
   FUNC_4(VAR_9->mfi_dev,
       "Could not allocate memory for kbuff_arr info\n");
   return -1;
  }
  VAR_16[VAR_12].phys_addr = VAR_9->mfi_kbuff_arr_busaddr[VAR_12];
  VAR_16[VAR_12].length = VAR_13->mfi_sgl[VAR_12].iov_len;

  if (sizeof(bus_addr_t) == 8) {
   VAR_10->cm_frame->stp.sgl.sg64[VAR_12].addr =
       VAR_16[VAR_12].phys_addr;
   VAR_10->cm_frame->stp.sgl.sg64[VAR_12].len =
       VAR_13->mfi_sgl[VAR_12].iov_len;
  } else {
   VAR_10->cm_frame->stp.sgl.sg32[VAR_12].addr =
       VAR_16[VAR_12].phys_addr;
   VAR_10->cm_frame->stp.sgl.sg32[VAR_12].len =
       VAR_13->mfi_sgl[VAR_12].iov_len;
  }

  VAR_15 = FUNC_3(VAR_13->mfi_sgl[VAR_12].iov_base,
      VAR_9->kbuff_arr[VAR_12],
      VAR_13->mfi_sgl[VAR_12].iov_len);
  if (VAR_15 != 0) {
   FUNC_4(VAR_9->mfi_dev, "Copy in failed\n");
   return VAR_15;
  }
 }

 VAR_10->cm_flags |=VAR_5;
 return 0;
}
