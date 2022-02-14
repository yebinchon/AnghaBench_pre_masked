
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeout; int status; } ;
union ccb {TYPE_2__ ccb_h; } ;
struct TYPE_3__ {int timer; int controller_handle; int dma_map; int dma_tag; int * remote_device_handle; } ;
struct ISCI_IO_REQUEST {int num_segments; TYPE_1__ parent; int sci_object; union ccb* ccb; int * sge; } ;
typedef int bus_dma_segment_t ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_IO_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int,int ,int ,struct ISCI_IO_REQUEST*,int ) ;
 int FUNC_2 (int ,int *,struct ISCI_IO_REQUEST*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,struct ISCI_IO_REQUEST*) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,void*,void*,int *) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8, bus_dma_segment_t *VAR_9, int VAR_10,
    int VAR_11)
{
 union ccb *VAR_12;
 struct ISCI_IO_REQUEST *VAR_13 = (struct ISCI_IO_REQUEST *)VAR_8;
 SCI_REMOTE_DEVICE_HANDLE_T *VAR_14 = VAR_13->parent.remote_device_handle;
 SCI_STATUS VAR_15;

 VAR_13->num_segments = VAR_10;
 VAR_13->sge = VAR_9;
 VAR_12 = VAR_13->ccb;

 if (VAR_11 != 0) {
  VAR_12->ccb_h.status = VAR_2;
  FUNC_6(VAR_12);
  return;
 }

 VAR_15 = FUNC_5(
     VAR_13->parent.controller_handle,
     VAR_13->parent.remote_device_handle,
     VAR_5, (void *)VAR_13,
     (void *)((char*)VAR_13 + sizeof(struct ISCI_IO_REQUEST)),
     &VAR_13->sci_object);

 if (VAR_15 != VAR_6) {
  FUNC_2(VAR_13->parent.controller_handle,
      VAR_14, VAR_13, (SCI_IO_STATUS)VAR_15);
  return;
 }

 FUNC_3(VAR_13->sci_object, VAR_13);

 FUNC_0(VAR_13->parent.dma_tag, VAR_13->parent.dma_map,
     VAR_0 | VAR_1);

 VAR_15 = (SCI_STATUS)FUNC_4(
     VAR_13->parent.controller_handle, VAR_14,
     VAR_13->sci_object, VAR_5);

 if (VAR_15 != VAR_6) {
  FUNC_2(VAR_13->parent.controller_handle,
      VAR_14, VAR_13, (SCI_IO_STATUS)VAR_15);
  return;
 }

 if (VAR_12->ccb_h.timeout != VAR_3)
  FUNC_1(&VAR_13->parent.timer,
      VAR_4 * VAR_12->ccb_h.timeout, 0, VAR_7,
      VAR_13, 0);
}
