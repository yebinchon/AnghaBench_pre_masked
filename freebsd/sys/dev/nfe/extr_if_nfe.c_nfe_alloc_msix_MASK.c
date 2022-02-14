
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int nfe_msix; int * nfe_msix_res; int * nfe_msix_pba_res; int nfe_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct nfe_softc *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(2);
 VAR_4->nfe_msix_res = FUNC_1(VAR_4->nfe_dev, VAR_2,
     &VAR_6, VAR_1);
 if (VAR_4->nfe_msix_res == ((void*)0)) {
  FUNC_3(VAR_4->nfe_dev,
      "couldn't allocate MSIX table resource\n");
  return;
 }
 VAR_6 = FUNC_0(3);
 VAR_4->nfe_msix_pba_res = FUNC_1(VAR_4->nfe_dev,
     VAR_2, &VAR_6, VAR_1);
 if (VAR_4->nfe_msix_pba_res == ((void*)0)) {
  FUNC_3(VAR_4->nfe_dev,
      "couldn't allocate MSIX PBA resource\n");
  FUNC_2(VAR_4->nfe_dev, VAR_2, FUNC_0(2),
      VAR_4->nfe_msix_res);
  VAR_4->nfe_msix_res = ((void*)0);
  return;
 }

 if (FUNC_4(VAR_4->nfe_dev, &VAR_5) == 0) {
  if (VAR_5 == VAR_0) {
   if (VAR_3)
    FUNC_3(VAR_4->nfe_dev,
        "Using %d MSIX messages\n", VAR_5);
   VAR_4->nfe_msix = 1;
  } else {
   if (VAR_3)
    FUNC_3(VAR_4->nfe_dev,
        "couldn't allocate MSIX\n");
   FUNC_5(VAR_4->nfe_dev);
   FUNC_2(VAR_4->nfe_dev, VAR_2,
       FUNC_0(3), VAR_4->nfe_msix_pba_res);
   FUNC_2(VAR_4->nfe_dev, VAR_2,
       FUNC_0(2), VAR_4->nfe_msix_res);
   VAR_4->nfe_msix_pba_res = ((void*)0);
   VAR_4->nfe_msix_res = ((void*)0);
  }
 }
}
