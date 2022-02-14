
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mrsas_softc {int mrsas_dev; } ;
struct mrsas_mfi_cmd {int dummy; } ;
struct TYPE_5__ {int high; int low; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ addr; } ;
typedef TYPE_3__ MRSAS_REQUEST_DESCRIPTOR_UNION ;


 int FUNC_0 (int ,char*) ;
 TYPE_3__* FUNC_1 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_2 (struct mrsas_softc*,int ,int ) ;

int
FUNC_3(struct mrsas_softc *VAR_0, struct mrsas_mfi_cmd *VAR_1)
{
 MRSAS_REQUEST_DESCRIPTOR_UNION *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_0(VAR_0->mrsas_dev, "Cannot build MPT cmd.\n");
  return (1);
 }
 FUNC_2(VAR_0, VAR_2->addr.u.low, VAR_2->addr.u.high);

 return (0);
}
