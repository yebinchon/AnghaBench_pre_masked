
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
typedef int uint8_t ;
struct ccb_hdr {int dummy; } ;
struct ISCI_REMOTE_DEVICE {scalar_t__ release_queued_ccb; union ccb* queued_ccb_in_progress; int queued_ccbs; } ;
struct ISCI_CONTROLLER {struct ISCI_REMOTE_DEVICE** remote_device; void* release_queued_ccbs; int lock; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 struct ccb_hdr* FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (union ccb*,struct ISCI_CONTROLLER*) ;
 int FUNC_3 (int,char*,char*,struct ccb_hdr*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

void
FUNC_6(struct ISCI_CONTROLLER *VAR_3)
{
 struct ISCI_REMOTE_DEVICE *VAR_4;
 struct ccb_hdr *VAR_5;
 uint8_t *VAR_6;
 int VAR_7;

 FUNC_0(FUNC_4(&VAR_3->lock), ("controller lock not owned"));

 VAR_3->release_queued_ccbs = VAR_0;
 for (VAR_7 = 0;
      VAR_7 < VAR_1;
      VAR_7++) {

  VAR_4 = VAR_3->remote_device[VAR_7];
  if (VAR_4 != ((void*)0) &&
      VAR_4->release_queued_ccb == VAR_2 &&
      VAR_4->queued_ccb_in_progress == ((void*)0)) {
   VAR_4->release_queued_ccb = VAR_0;
   VAR_5 = FUNC_1(&VAR_4->queued_ccbs);

   if (VAR_5 == ((void*)0))
    continue;

   VAR_6 = FUNC_5(&((union ccb *)VAR_5)->csio);
   FUNC_3(1, "ISCI", "release %p %x\n", VAR_5, *VAR_6);

   VAR_4->queued_ccb_in_progress = (union ccb *)VAR_5;
   FUNC_2(
       (union ccb *)VAR_5, VAR_3);
  }
 }
}
