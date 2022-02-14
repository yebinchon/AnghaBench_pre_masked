
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpt_softc {TYPE_1__* mpt_dev_page1; } ;
struct TYPE_2__ {int RequestedParameters; } ;
typedef TYPE_1__* PTR_CONFIG_PAGE_SCSI_DEVICE_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(struct mpt_softc *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 PTR_CONFIG_PAGE_SCSI_DEVICE_1 VAR_11;

 VAR_11 = &VAR_7->mpt_dev_page1[VAR_8];
 VAR_11->RequestedParameters &= ~VAR_3;
 VAR_11->RequestedParameters &= ~VAR_2;
 VAR_11->RequestedParameters &= ~VAR_0;
 VAR_11->RequestedParameters &= ~VAR_4;
 VAR_11->RequestedParameters &= ~VAR_1;
 if (VAR_9 == 0) {
  return;
 }
 VAR_11->RequestedParameters |=
     VAR_9 << VAR_6;
 VAR_11->RequestedParameters |=
     VAR_10 << VAR_5;
 if (VAR_9 < 0xa) {
  VAR_11->RequestedParameters |= VAR_0;
 }
 if (VAR_9 < 0x9) {
  VAR_11->RequestedParameters |= VAR_4;
  VAR_11->RequestedParameters |= VAR_1;
 }
}
