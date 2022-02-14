
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_lintc_softc {int * bls_mem; int bls_bsh; int bls_bst; int bls_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_lintc_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct bcm_lintc_softc*) ;
 struct bcm_lintc_softc* VAR_6 ;
 int FUNC_5 (struct bcm_lintc_softc*,int ,int ) ;
 int * FUNC_6 (int ,int ,int*,int ) ;
 struct bcm_lintc_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_7)
{
 struct bcm_lintc_softc *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_7(VAR_7);

 VAR_8->bls_dev = VAR_7;
 if (VAR_6 != ((void*)0))
  return (VAR_3);

 VAR_10 = 0;
 VAR_8->bls_mem = FUNC_6(VAR_7, VAR_5, &VAR_10,
     VAR_4);
 if (VAR_8->bls_mem == ((void*)0)) {
  FUNC_8(VAR_7, "could not allocate memory resource\n");
  return (VAR_3);
 }

 VAR_8->bls_bst = FUNC_10(VAR_8->bls_mem);
 VAR_8->bls_bsh = FUNC_9(VAR_8->bls_mem);

 FUNC_5(VAR_8, VAR_0, 0);
 FUNC_5(VAR_8, VAR_1, VAR_2);


 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  FUNC_5(VAR_8, FUNC_3(VAR_9), 0);
 if (FUNC_4(VAR_8) != 0) {
  FUNC_8(VAR_7, "could not attach PIC\n");
  return (VAR_3);
 }

 FUNC_0(VAR_8);
 VAR_6 = VAR_8;
 return (0);
}
