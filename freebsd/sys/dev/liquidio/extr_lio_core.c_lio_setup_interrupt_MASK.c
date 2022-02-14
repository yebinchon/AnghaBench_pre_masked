
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_pf_rings; } ;
struct octeon_device {int num_msix_irqs; int vector; int aux_vector; int * msix_res; int * tag; int affinity_mask; int device; TYPE_1__ sriov_info; struct octeon_device* ioq_vector; int msix_on; } ;
struct lio_ioq_vector {int num_msix_irqs; int vector; int aux_vector; int * msix_res; int * tag; int affinity_mask; int device; TYPE_1__ sriov_info; struct lio_ioq_vector* ioq_vector; int msix_on; } ;
typedef int device_t ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int *,char*,...) ;
 int FUNC_4 (int ,int ,int,int *) ;
 int FUNC_5 (int ,int *,int,int *,int ,struct octeon_device*,int **) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (struct octeon_device*,char*,...) ;
 int FUNC_8 (struct octeon_device*,char*,...) ;
 int FUNC_9 (struct octeon_device*,char*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ,int*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;

int
FUNC_14(struct octeon_device *VAR_8, uint32_t VAR_9)
{
 device_t VAR_10;
 struct lio_ioq_vector *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 if (!VAR_8->msix_on)
  return (1);

 VAR_11 = VAR_8->ioq_vector;
 VAR_10 = VAR_8->device;

 VAR_8->num_msix_irqs = VAR_9;

 VAR_8->num_msix_irqs += 1;
 VAR_15 = VAR_8->num_msix_irqs;

 if (FUNC_10(VAR_10, &VAR_15) ||
     (VAR_15 != VAR_8->num_msix_irqs))
  goto err;

 VAR_16 = VAR_8->num_msix_irqs;


 for (VAR_14 = 0; VAR_14 < VAR_16 - 1; VAR_14++, VAR_11++) {
  VAR_17 = VAR_14 + 1;

  VAR_11->msix_res =
      FUNC_1(VAR_10, VAR_4, &VAR_17,
        VAR_3 | VAR_2);
  if (VAR_11->msix_res == ((void*)0)) {
   FUNC_8(VAR_8,
        "Unable to allocate bus res msix[%d]\n", VAR_14);
   goto err_1;
  }

  VAR_13 = FUNC_5(VAR_10, VAR_11->msix_res,
         VAR_1 | VAR_0, ((void*)0),
         VAR_6, VAR_11,
         &VAR_11->tag);
  if (VAR_13) {
   FUNC_4(VAR_10, VAR_4, VAR_17,
          VAR_11->msix_res);
   VAR_11->msix_res = ((void*)0);
   FUNC_8(VAR_8, "Failed to register intr handler");
   goto err_1;
  }

  FUNC_3(VAR_10, VAR_11->msix_res, VAR_11->tag,
      "rxtx%u", VAR_14);
  VAR_11->vector = VAR_17;




  VAR_12 = VAR_14 % VAR_7;

  FUNC_0(VAR_12, &VAR_11->affinity_mask);


  VAR_13 = FUNC_2(VAR_10, VAR_11->msix_res, VAR_12);
  if (VAR_13)
   FUNC_8(VAR_8, "bus bind interrupt fail");



  FUNC_7(VAR_8, "Bound Queue %d to CPU %d\n", VAR_14, VAR_12);

 }

 FUNC_7(VAR_8, "MSI-X enabled\n");

 VAR_17 = VAR_16;
 VAR_8->msix_res = FUNC_1(VAR_10, VAR_4, &VAR_17,
            VAR_3 | VAR_2);
 if (VAR_8->msix_res == ((void*)0)) {
  FUNC_8(VAR_8, "Unable to allocate bus res msix for non-ioq interrupt\n");
  goto err_1;
 }

 VAR_13 = FUNC_5(VAR_10, VAR_8->msix_res, VAR_1 | VAR_0,
        ((void*)0), VAR_5, VAR_8, &VAR_8->tag);
 if (VAR_13) {
  FUNC_4(VAR_10, VAR_4, VAR_17,
         VAR_8->msix_res);
  VAR_8->msix_res = ((void*)0);
  FUNC_8(VAR_8, "Failed to register intr handler");
  goto err_1;
 }

 FUNC_3(VAR_10, VAR_8->msix_res, VAR_8->tag, "aux");
 VAR_8->aux_vector = VAR_17;

 return (0);
err_1:
 if (VAR_8->tag != ((void*)0)) {
  FUNC_6(VAR_10, VAR_8->msix_res, VAR_8->tag);
  VAR_8->tag = ((void*)0);
 }

 while (VAR_14) {
  VAR_14--;
  VAR_11--;

  if (VAR_11->tag != ((void*)0)) {
   FUNC_6(VAR_10, VAR_11->msix_res,
       VAR_11->tag);
   VAR_11->tag = ((void*)0);
  }

  if (VAR_11->msix_res != ((void*)0)) {
   FUNC_4(VAR_10, VAR_4,
          VAR_11->vector,
          VAR_11->msix_res);
   VAR_11->msix_res = ((void*)0);
  }
 }

 if (VAR_8->msix_res != ((void*)0)) {
  FUNC_4(VAR_10, VAR_4, VAR_8->aux_vector,
         VAR_8->msix_res);
  VAR_8->msix_res = ((void*)0);
 }
err:
 FUNC_11(VAR_10);
 FUNC_8(VAR_8, "MSI-X disabled\n");
 return (1);
}
