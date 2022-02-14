
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpr_softc {int custom_nvme_tm_handling; int nvme_abort_timeout; int iounit_pg8; int ioc_pg8; } ;
struct TYPE_3__ {int NVMeAbortTO; int AddlFlags2; } ;
typedef TYPE_1__ Mpi2ManufacturingPage11_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mpr_softc*,int *,int *) ;
 scalar_t__ FUNC_2 (struct mpr_softc*,int *,int *) ;
 int FUNC_3 (struct mpr_softc*,int *,TYPE_1__*) ;

void
FUNC_4(struct mpr_softc *VAR_1)
{
 Mpi2ConfigReply_t VAR_2;
 Mpi2ManufacturingPage11_t VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = 0;
 while (FUNC_1(VAR_1, &VAR_2, &VAR_1->ioc_pg8)) {
  VAR_4++;
  if (VAR_4 > 5) {


   break;
  }
 }
 VAR_4 = 0;
 while (FUNC_2(VAR_1, &VAR_2, &VAR_1->iounit_pg8)) {
  VAR_4++;
  if (VAR_4 > 5) {


   break;
  }
 }
 VAR_4 = 0;
 while ((VAR_5 = FUNC_3(VAR_1, &VAR_2, &VAR_3))) {
  VAR_4++;
  if (VAR_4 > 5) {


   break;
  }
 }

 if (!VAR_5) {
  VAR_1->custom_nvme_tm_handling = (FUNC_0(VAR_3) &
      VAR_0);
  VAR_1->nvme_abort_timeout = VAR_3;




  if (VAR_1->nvme_abort_timeout < 6)
   VAR_1->nvme_abort_timeout = 6;
  if (VAR_1->nvme_abort_timeout > 60)
   VAR_1->nvme_abort_timeout = 60;
 }
}
