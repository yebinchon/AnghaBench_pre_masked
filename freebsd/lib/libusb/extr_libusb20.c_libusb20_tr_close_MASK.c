
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libusb20_transfer {scalar_t__ maxPacketLen; scalar_t__ maxTotalLength; scalar_t__ maxFrames; scalar_t__ timeout; scalar_t__ aFrames; scalar_t__ nFrames; scalar_t__ flags; scalar_t__ status; scalar_t__ is_restart; scalar_t__ is_draining; scalar_t__ is_cancel; scalar_t__ is_pending; scalar_t__ is_opened; int * priv_sc1; int * priv_sc0; scalar_t__ ppBuffer; scalar_t__ pLength; TYPE_2__* pdev; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int (* tr_close ) (struct libusb20_transfer*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct libusb20_transfer*) ;

int
FUNC_2(struct libusb20_transfer *VAR_1)
{
 int VAR_2;

 if (!VAR_1->is_opened) {
  return (VAR_0);
 }
 VAR_2 = VAR_1->pdev->methods->tr_close(VAR_1);

 if (VAR_1->pLength) {
  FUNC_0(VAR_1->pLength);
 }
 if (VAR_1->ppBuffer) {
  FUNC_0(VAR_1->ppBuffer);
 }

 VAR_1->priv_sc0 = ((void*)0);
 VAR_1->priv_sc1 = ((void*)0);
 VAR_1->is_opened = 0;
 VAR_1->is_pending = 0;
 VAR_1->is_cancel = 0;
 VAR_1->is_draining = 0;
 VAR_1->is_restart = 0;
 VAR_1->status = 0;
 VAR_1->flags = 0;
 VAR_1->nFrames = 0;
 VAR_1->aFrames = 0;
 VAR_1->timeout = 0;
 VAR_1->maxFrames = 0;
 VAR_1->maxTotalLength = 0;
 VAR_1->maxPacketLen = 0;
 return (VAR_2);
}
