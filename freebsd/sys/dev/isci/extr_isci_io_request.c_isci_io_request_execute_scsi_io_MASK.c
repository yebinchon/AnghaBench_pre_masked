
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t target_id; int flags; int status; } ;
union ccb {TYPE_2__ ccb_h; } ;
typedef size_t target_id_t ;
struct ISCI_REQUEST {int dummy; } ;
struct ISCI_REMOTE_DEVICE {scalar_t__ is_resetting; int sci_object; } ;
struct TYPE_3__ {int dma_map; int dma_tag; int remote_device_handle; } ;
struct ISCI_IO_REQUEST {TYPE_1__ parent; scalar_t__ current_sge_index; union ccb* ccb; } ;
struct ISCI_CONTROLLER {int sim; int request_pool; int is_frozen; struct ISCI_REMOTE_DEVICE** remote_device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,union ccb*,int ,struct ISCI_IO_REQUEST*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ISCI_REQUEST*) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(union ccb *VAR_9,
    struct ISCI_CONTROLLER *VAR_10)
{
 target_id_t VAR_11 = VAR_9->ccb_h.target_id;
 struct ISCI_REQUEST *VAR_12;
 struct ISCI_IO_REQUEST *VAR_13;
 struct ISCI_REMOTE_DEVICE *VAR_14 =
     VAR_10->remote_device[VAR_11];
 int VAR_15;

 if (VAR_14 == ((void*)0)) {
  VAR_9->ccb_h.status &= ~VAR_3;
  VAR_9->ccb_h.status &= ~VAR_4;
  VAR_9->ccb_h.status |= VAR_0;
  FUNC_4(VAR_9);
  return;
 }

 if (FUNC_2(VAR_10->request_pool)) {
  VAR_9->ccb_h.status &= ~VAR_3;
  VAR_9->ccb_h.status &= ~VAR_4;
  VAR_9->ccb_h.status |= VAR_2;
  FUNC_5(VAR_10->sim, 1);
  VAR_10->is_frozen = VAR_7;
  FUNC_4(VAR_9);
  return;
 }

 FUNC_0(VAR_14->is_resetting == VAR_6);

 FUNC_3(VAR_10->request_pool, VAR_12);
 VAR_13 = (struct ISCI_IO_REQUEST *)VAR_12;

 VAR_13->ccb = VAR_9;
 VAR_13->current_sge_index = 0;
 VAR_13->parent.remote_device_handle = VAR_14->sci_object;

 VAR_15 = FUNC_1(VAR_13->parent.dma_tag,
     VAR_13->parent.dma_map, VAR_9,
     VAR_8, VAR_13, 0x0);




 if (VAR_15 == VAR_5) {
  FUNC_5(VAR_10->sim, 1);
  VAR_9->ccb_h.flags |= VAR_1;
 }
}
