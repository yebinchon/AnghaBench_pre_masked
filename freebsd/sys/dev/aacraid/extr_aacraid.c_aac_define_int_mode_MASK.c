
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aac_softc {int flags; int aac_max_msix; int aac_vector_cap; int aac_max_fibs; scalar_t__ aac_hwif; void* msi_enabled; void* msi_tupelo; int aac_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (struct aac_softc*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct aac_softc*,char*,char*,void*,int,int,int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct aac_softc *VAR_9)
{
 device_t VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;
 uint32_t VAR_14;

 VAR_10 = VAR_9->aac_dev;

 if (VAR_9->flags & VAR_1) {
  FUNC_2(VAR_10, "using line interrupts\n");
  VAR_9->aac_max_msix = 1;
  VAR_9->aac_vector_cap = VAR_9->aac_max_fibs;
  return;
 }


 if (VAR_9->aac_max_msix == 0) {
  if (VAR_9->aac_hwif == VAR_2) {
   VAR_12 = 1;
   if ((VAR_13 = FUNC_4(VAR_10, &VAR_12)) != 0) {
    FUNC_2(VAR_10, "alloc msi failed - err=%d; "
        "will use INTx\n", VAR_13);
    FUNC_8(VAR_10);
   } else {
    VAR_9->msi_tupelo = VAR_8;
   }
  }
  if (VAR_9->msi_tupelo)
   FUNC_2(VAR_10, "using MSI interrupts\n");
  else
   FUNC_2(VAR_10, "using line interrupts\n");

  VAR_9->aac_max_msix = 1;
  VAR_9->aac_vector_cap = VAR_9->aac_max_fibs;
  return;
 }


 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12 > VAR_3)
  VAR_12 = VAR_3;
 if (VAR_12 > VAR_9->aac_max_msix)
  VAR_12 = VAR_9->aac_max_msix;
 if (VAR_12 == 0 || (VAR_13 = FUNC_5(VAR_10, &VAR_12)) != 0) {
  FUNC_2(VAR_10, "alloc msix failed - msi_count=%d, err=%d; "
       "will try MSI\n", VAR_12, VAR_13);
  FUNC_8(VAR_10);
 } else {
  VAR_9->msi_enabled = VAR_8;
  FUNC_2(VAR_10, "using MSI-X interrupts (%u vectors)\n",
   VAR_12);
 }

 if (!VAR_9->msi_enabled) {
  VAR_12 = 1;
  if ((VAR_13 = FUNC_4(VAR_10, &VAR_12)) != 0) {
   FUNC_2(VAR_10, "alloc msi failed - err=%d; "
               "will use INTx\n", VAR_13);
   FUNC_8(VAR_10);
  } else {
   VAR_9->msi_enabled = VAR_8;
   FUNC_2(VAR_10, "using MSI interrupts\n");
  }
 }

 if (VAR_9->msi_enabled) {

  VAR_11 = FUNC_1(VAR_9, VAR_7);
  VAR_14 = (VAR_11 != 0 ? FUNC_7(VAR_10, VAR_11 + 2, 2) : 0);
  if (!(VAR_14 & VAR_4)) {
   FUNC_8(VAR_10);
   VAR_9->msi_enabled = VAR_5;
  }
 }

 if (!VAR_9->msi_enabled) {
  FUNC_2(VAR_10, "using legacy interrupts\n");
  VAR_9->aac_max_msix = 1;
 } else {
  FUNC_0(VAR_9, VAR_0);
  if (VAR_9->aac_max_msix > VAR_12)
   VAR_9->aac_max_msix = VAR_12;
 }
 VAR_9->aac_vector_cap = VAR_9->aac_max_fibs / VAR_9->aac_max_msix;

 FUNC_3(VAR_9, VAR_6, "msi_enabled %d vector_cap %d max_fibs %d max_msix %d",
  VAR_9->msi_enabled,VAR_9->aac_vector_cap, VAR_9->aac_max_fibs, VAR_9->aac_max_msix);
}
