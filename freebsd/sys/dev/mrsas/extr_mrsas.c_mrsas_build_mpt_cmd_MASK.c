
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct mrsas_softc {int mrsas_dev; } ;
struct TYPE_10__ {scalar_t__ smid; } ;
struct TYPE_11__ {TYPE_3__ context; } ;
struct mrsas_mfi_cmd {TYPE_4__ cmd_id; } ;
struct TYPE_9__ {int RequestFlags; scalar_t__ SMID; } ;
struct TYPE_8__ {scalar_t__ Words; } ;
struct TYPE_12__ {TYPE_2__ SCSIIO; TYPE_1__ addr; } ;
typedef TYPE_5__ MRSAS_REQUEST_DESCRIPTOR_UNION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 TYPE_5__* FUNC_2 (struct mrsas_softc*,scalar_t__) ;

MRSAS_REQUEST_DESCRIPTOR_UNION *
FUNC_3(struct mrsas_softc *VAR_2, struct mrsas_mfi_cmd *VAR_3)
{
 MRSAS_REQUEST_DESCRIPTOR_UNION *VAR_4;
 u_int16_t VAR_5;

 if (FUNC_1(VAR_2, VAR_3)) {
  FUNC_0(VAR_2->mrsas_dev, "Cannot build MPT-MFI passthru cmd.\n");
  return ((void*)0);
 }
 VAR_5 = VAR_3->cmd_id.context.smid;

 VAR_4 = FUNC_2(VAR_2, VAR_5 - 1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->addr.Words = 0;
 VAR_4->SCSIIO.RequestFlags = (VAR_0 << VAR_1);

 VAR_4->SCSIIO.SMID = VAR_5;

 return (VAR_4);
}
