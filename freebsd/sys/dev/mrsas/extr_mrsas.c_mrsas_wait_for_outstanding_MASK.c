
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct mrsas_softc {scalar_t__ msix_vectors; int fw_outstanding; int sim_lock; scalar_t__ remove_in_progress; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mrsas_softc*,int) ;
 int FUNC_3 (struct mrsas_softc*,int ,char*,...) ;
 int FUNC_4 (struct mrsas_softc*,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;

int
FUNC_8(struct mrsas_softc *VAR_8, u_int8_t VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = 0;
 u_int32_t VAR_13, VAR_14, VAR_15;


 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (VAR_8->remove_in_progress) {
   FUNC_3(VAR_8, VAR_3,
       "Driver remove or shutdown called.\n");
   VAR_12 = 1;
   goto out;
  }

  VAR_13 = FUNC_4(VAR_8, FUNC_7(VAR_6,
      VAR_7)) & VAR_2;
  if (VAR_13 == VAR_1) {
   FUNC_3(VAR_8, VAR_3,
       "Found FW in FAULT state, will reset adapter.\n");
   VAR_14 = VAR_8->msix_vectors > 0 ? VAR_8->msix_vectors : 1;
   FUNC_6(&VAR_8->sim_lock);
   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    FUNC_2(VAR_8, VAR_15);
   FUNC_5(&VAR_8->sim_lock);
   VAR_12 = 1;
   goto out;
  }
  if (VAR_9 == VAR_0) {
   FUNC_3(VAR_8, VAR_3,
       "DCMD IO TIMEOUT detected, will reset adapter.\n");
   VAR_12 = 1;
   goto out;
  }
  VAR_11 = FUNC_1(&VAR_8->fw_outstanding);
  if (!VAR_11)
   goto out;

  if (!(VAR_10 % VAR_4)) {
   FUNC_3(VAR_8, VAR_3, "[%2d]waiting for %d "
       "commands to complete\n", VAR_10, VAR_11);
   VAR_14 = VAR_8->msix_vectors > 0 ? VAR_8->msix_vectors : 1;
   FUNC_6(&VAR_8->sim_lock);
   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    FUNC_2(VAR_8, VAR_15);
   FUNC_5(&VAR_8->sim_lock);
  }
  FUNC_0(1000 * 1000);
 }

 if (FUNC_1(&VAR_8->fw_outstanding)) {
  FUNC_3(VAR_8, VAR_3,
      " pending commands remain after waiting,"
      " will reset adapter.\n");
  VAR_12 = 1;
 }
out:
 return VAR_12;
}
