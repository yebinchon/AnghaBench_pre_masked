
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int dma_tag; struct tw_osli_req_context* req_ctx_buf; int ioctl_map; int ioctl_tag; int * io_lock; int alignment; int parent_tag; int dma_mem_phys; int dma_mem; int cmd_map; int cmd_tag; int bus_dev; int * non_dma_mem; int sg_size_factor; int device_id; int flags; int ctlr_handle; } ;
struct tw_osli_req_context {int * ioctl_wake_timeout_lock; int ioctl_wake_timeout_lock_handle; int dma_map; struct twa_softc* ctlr; } ;
typedef int bus_size_t ;
typedef int bus_addr_t ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tw_osli_req_context*,int) ;
 int * FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *,int ,int ,int,int ,int *,int *,int*,int*) ;
 int FUNC_9 (int,struct twa_softc*,char*) ;
 int FUNC_10 (struct twa_softc*,char*,int ,int ,int,char*,int,...) ;
 int FUNC_11 (struct twa_softc*,int ) ;
 int FUNC_12 (struct tw_osli_req_context*,int ) ;
 int * VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static TW_INT32
FUNC_13(struct twa_softc *VAR_22)
{
 struct tw_osli_req_context *VAR_23;
 TW_UINT32 VAR_24;
 TW_UINT32 VAR_25;
 TW_UINT32 VAR_26;
 TW_INT32 VAR_27;
 TW_INT32 VAR_28;

 FUNC_9(3, VAR_22, "entered");

 VAR_22->flags |= (sizeof(bus_addr_t) == 8) ? VAR_7 : 0;
 VAR_22->flags |= (sizeof(bus_size_t) == 8) ? VAR_8 : 0;

 VAR_24 = (sizeof(bus_addr_t) == 8) ?
  VAR_10 : VAR_9;

 if ((VAR_27 = FUNC_8(&VAR_22->ctlr_handle, VAR_22->flags,
   VAR_22->device_id, VAR_19, VAR_18,
   &(VAR_22->alignment), &(VAR_22->sg_size_factor),
   &VAR_25, &VAR_26
   ))) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x2008,
   "Can't get Common Layer's memory requirements",
   VAR_27);
  return(VAR_27);
 }

 if ((VAR_22->non_dma_mem = FUNC_6(VAR_25, VAR_17,
    VAR_6)) == ((void*)0)) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x2009,
   "Can't allocate non-dma memory",
   VAR_4);
  return(VAR_4);
 }


 if (FUNC_0(FUNC_4(VAR_22->bus_dev),
    VAR_22->alignment,
    VAR_15,
    VAR_2,
    VAR_2,
    ((void*)0), ((void*)0),
    VAR_11,
    VAR_24,
    VAR_11,
    0,
    ((void*)0),
    ((void*)0),
    &VAR_22->parent_tag )) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x200A,
   "Can't allocate parent DMA tag",
   VAR_4);
  return(VAR_4);
 }


 if (FUNC_0(VAR_22->parent_tag,
    VAR_22->alignment,
    0,
    VAR_2,
    VAR_2,
    ((void*)0), ((void*)0),
    VAR_26,
    1,
    VAR_3,
    0,
    ((void*)0),
    ((void*)0),
    &VAR_22->cmd_tag )) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x200B,
   "Can't allocate DMA tag for Common Layer's "
   "DMA'able memory",
   VAR_4);
  return(VAR_4);
 }

 if (FUNC_3(VAR_22->cmd_tag, &VAR_22->dma_mem,
  VAR_1, &VAR_22->cmd_map)) {

  if (FUNC_3(VAR_22->cmd_tag, &VAR_22->dma_mem,
   VAR_1, &VAR_22->cmd_map)) {
   FUNC_10(VAR_22, "error = %d",
    VAR_13,
    VAR_12,
    0x200C,
    "Can't allocate DMA'able memory for the"
    "Common Layer",
    VAR_4);
   return(VAR_4);
  }
 }

 FUNC_2(VAR_22->cmd_tag, VAR_22->cmd_map, VAR_22->dma_mem,
  VAR_26, VAR_21,
  &VAR_22->dma_mem_phys, 0);





 if (FUNC_0(VAR_22->parent_tag,
    VAR_22->alignment,
    0,
    VAR_2,
    VAR_2,
    ((void*)0), ((void*)0),
    VAR_11,
    VAR_24,
    VAR_11,
    VAR_0,
    VAR_20,
    VAR_22->io_lock,
    &VAR_22->dma_tag )) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x200F,
   "Can't allocate DMA tag for data buffers",
   VAR_4);
  return(VAR_4);
 }





 if (FUNC_0(VAR_22->parent_tag,
    VAR_22->alignment,
    0,
    VAR_2,
    VAR_2,
    ((void*)0), ((void*)0),
    VAR_11,
    VAR_24,
    VAR_11,
    VAR_0,
    VAR_20,
    VAR_22->io_lock,
    &VAR_22->ioctl_tag )) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x2010,
   "Can't allocate DMA tag for ioctl data buffers",
   VAR_4);
  return(VAR_4);
 }


 if (FUNC_1(VAR_22->ioctl_tag, 0, &VAR_22->ioctl_map)) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x2011,
   "Can't create ioctl map",
   VAR_4);
  return(VAR_4);
 }



 FUNC_11(VAR_22, VAR_16);
 FUNC_11(VAR_22, VAR_14);

 if ((VAR_22->req_ctx_buf = (struct tw_osli_req_context *)
   FUNC_6((sizeof(struct tw_osli_req_context) *
    VAR_19),
    VAR_17, VAR_6)) == ((void*)0)) {
  FUNC_10(VAR_22, "error = %d",
   VAR_13,
   VAR_12,
   0x2012,
   "Failed to allocate request packets",
   VAR_4);
  return(VAR_4);
 }
 FUNC_5(VAR_22->req_ctx_buf,
  sizeof(struct tw_osli_req_context) * VAR_19);

 for (VAR_28 = 0; VAR_28 < VAR_19; VAR_28++) {
  VAR_23 = &(VAR_22->req_ctx_buf[VAR_28]);
  VAR_23->ctlr = VAR_22;
  if (FUNC_1(VAR_22->dma_tag, 0, &VAR_23->dma_map)) {
   FUNC_10(VAR_22, "request # = %d, error = %d",
    VAR_13,
    VAR_12,
    0x2013,
    "Can't create dma map",
    VAR_28, VAR_4);
   return(VAR_4);
  }


  VAR_23->ioctl_wake_timeout_lock = &(VAR_23->ioctl_wake_timeout_lock_handle);
  FUNC_7(VAR_23->ioctl_wake_timeout_lock, "tw_ioctl_wake_timeout_lock", ((void*)0), VAR_5);


  FUNC_12(VAR_23, VAR_16);
 }

 return(0);
}
