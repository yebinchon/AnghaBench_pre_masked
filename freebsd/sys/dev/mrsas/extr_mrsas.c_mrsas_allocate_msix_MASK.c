
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int mrsas_dev; int msix_vectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mrsas_softc*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct mrsas_softc *VAR_2)
{
 if (FUNC_2(VAR_2->mrsas_dev, &VAR_2->msix_vectors) == 0) {
  FUNC_0(VAR_2->mrsas_dev, "Using MSI-X with %d number"
      " of vectors\n", VAR_2->msix_vectors);
 } else {
  FUNC_0(VAR_2->mrsas_dev, "MSI-x setup failed\n");
  goto irq_alloc_failed;
 }
 return VAR_1;

irq_alloc_failed:
 FUNC_1(VAR_2);
 return (VAR_0);
}
