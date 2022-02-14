
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cbb_softc {scalar_t__ cbdev; TYPE_1__* exca; } ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {scalar_t__ pccarddev; } ;


 int FUNC_0 (scalar_t__) ;
 struct cbb_softc* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,int ) ;

void
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct cbb_softc *VAR_2 = FUNC_1(VAR_0);


 if (VAR_1 != VAR_2->cbdev && VAR_1 != VAR_2->exca[0].pccarddev)
  FUNC_2(VAR_0, "Unknown child detached: %s\n",
      FUNC_0(VAR_1));
}
