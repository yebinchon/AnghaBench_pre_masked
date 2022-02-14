
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpt_softc {TYPE_1__* mpt_dev_page1; } ;
struct TYPE_2__ {int RequestedParameters; } ;
typedef TYPE_1__* PTR_CONFIG_PAGE_SCSI_DEVICE_1 ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mpt_softc *VAR_1, int VAR_2, int VAR_3)
{
 PTR_CONFIG_PAGE_SCSI_DEVICE_1 VAR_4;

 VAR_4 = &VAR_1->mpt_dev_page1[VAR_2];
 if (VAR_3) {
  VAR_4->RequestedParameters |= VAR_0;
 } else {
  VAR_4->RequestedParameters &= ~VAR_0;
 }
}
