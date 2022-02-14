
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* if_softc_ctx_t ;
typedef TYPE_2__* if_shared_ctx_t ;
typedef TYPE_3__* if_ctx_t ;
typedef int device_t ;
struct TYPE_5__ {int isc_ntxqsets; int isc_nrxqsets; int isc_msix_bar; int isc_vectors; int isc_intr; scalar_t__ isc_disable_msix; } ;
struct TYPE_7__ {int ifc_sysctl_ntxqs; int ifc_sysctl_nrxqs; scalar_t__ ifc_sysctl_qs_eq_override; int * ifc_msix_mem; int ifc_cpus; TYPE_1__ ifc_softc_ctx; TYPE_2__* ifc_sctx; int ifc_dev; } ;
struct TYPE_6__ {int isc_admin_intrcnt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(if_ctx_t VAR_7)
{
 device_t VAR_8 = VAR_7->ifc_dev;
 if_shared_ctx_t VAR_9 = VAR_7->ifc_sctx;
 if_softc_ctx_t VAR_10 = &VAR_7->ifc_softc_ctx;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_15 = VAR_7->ifc_sysctl_ntxqs;
 VAR_14 = VAR_7->ifc_sysctl_nrxqs;

 if (VAR_5)
  FUNC_3(VAR_8, "msix_init qsets capped at %d\n",
      FUNC_4(VAR_10->isc_ntxqsets, VAR_10->isc_nrxqsets));


 if (VAR_10->isc_disable_msix)
  goto msi;


 if ((VAR_16 = FUNC_10(VAR_8)) == 0) {
  if (VAR_5)
   FUNC_3(VAR_8, "MSI-X not supported or disabled\n");
  goto msi;
 }

 VAR_12 = VAR_7->ifc_softc_ctx.isc_msix_bar;







 if (VAR_12 != -1) {
  VAR_7->ifc_msix_mem = FUNC_1(VAR_8,
             VAR_4, &VAR_12, VAR_3);
  if (VAR_7->ifc_msix_mem == ((void*)0)) {
   FUNC_3(VAR_8, "Unable to map MSI-X table\n");
   goto msi;
  }
 }

 VAR_11 = VAR_9->isc_admin_intrcnt;




 VAR_17 = VAR_16 - VAR_11;




 VAR_18 = VAR_17;

 VAR_18 = FUNC_5(FUNC_0(&VAR_7->ifc_cpus), VAR_18);
 if (VAR_5)
  FUNC_3(VAR_8,
      "intr CPUs: %d queue msgs: %d admincnt: %d\n",
      FUNC_0(&VAR_7->ifc_cpus), VAR_17, VAR_11);





 if (VAR_14 > 0 && VAR_14 < VAR_17 - VAR_11)
  VAR_19 = VAR_14;
 else
  VAR_19 = VAR_18;

 if (VAR_19 > VAR_10->isc_nrxqsets)
  VAR_19 = VAR_10->isc_nrxqsets;




 if (VAR_15 > 0 && VAR_15 < VAR_18)
  VAR_20 = VAR_15;
 else
  VAR_20 = VAR_6;

 if (VAR_20 > VAR_10->isc_ntxqsets)
  VAR_20 = VAR_10->isc_ntxqsets;

 if (VAR_7->ifc_sysctl_qs_eq_override == 0) {






  VAR_20 = FUNC_6(VAR_19, VAR_20);
  VAR_19 = FUNC_6(VAR_19, VAR_20);
 }

 VAR_21 = VAR_19 + VAR_11;
 if (VAR_16 < VAR_21) {
  FUNC_3(VAR_8,
      "insufficient number of MSI-X vectors "
      "(supported %d, need %d)\n", VAR_16, VAR_21);
  goto msi;
 }

 FUNC_3(VAR_8, "Using %d RX queues %d TX queues\n", VAR_19,
     VAR_20);
 VAR_16 = VAR_21;
 if ((VAR_13 = FUNC_8(VAR_8, &VAR_21)) == 0) {
  if (VAR_21 != VAR_16) {
   FUNC_3(VAR_8,
       "Unable to allocate sufficient MSI-X vectors "
       "(got %d, need %d)\n", VAR_21, VAR_16);
   FUNC_11(VAR_8);
   if (VAR_12 != -1) {
    FUNC_2(VAR_8, VAR_4, VAR_12,
        VAR_7->ifc_msix_mem);
    VAR_7->ifc_msix_mem = ((void*)0);
   }
   goto msi;
  }
  FUNC_3(VAR_8, "Using MSI-X interrupts with %d vectors\n",
      VAR_21);
  VAR_10->isc_vectors = VAR_21;
  VAR_10->isc_nrxqsets = VAR_19;
  VAR_10->isc_ntxqsets = VAR_20;
  VAR_10->isc_intr = VAR_2;

  return (VAR_21);
 } else {
  FUNC_3(VAR_8,
      "failed to allocate %d MSI-X vectors, err: %d\n", VAR_21,
      VAR_13);
  if (VAR_12 != -1) {
   FUNC_2(VAR_8, VAR_4, VAR_12,
       VAR_7->ifc_msix_mem);
   VAR_7->ifc_msix_mem = ((void*)0);
  }
 }

msi:
 VAR_21 = FUNC_9(VAR_8);
 VAR_10->isc_nrxqsets = 1;
 VAR_10->isc_ntxqsets = 1;
 VAR_10->isc_vectors = VAR_21;
 if (VAR_21 == 1 && FUNC_7(VAR_8, &VAR_21) == 0) {
  FUNC_3(VAR_8,"Using an MSI interrupt\n");
  VAR_10->isc_intr = VAR_1;
 } else {
  VAR_10->isc_vectors = 1;
  FUNC_3(VAR_8,"Using a Legacy interrupt\n");
  VAR_10->isc_intr = VAR_0;
 }

 return (VAR_21);
}
