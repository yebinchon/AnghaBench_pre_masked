
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_mpic_softc {int ** mpic_res; int nirqs; void* drbl_bsh; void* drbl_bst; void* cpu_bsh; void* cpu_bst; void* mpic_bsh; void* mpic_bst; int intr_hand; int mtx; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mv_mpic_softc*,scalar_t__) ;
 int FUNC_2 (struct mv_mpic_softc*,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct mv_mpic_softc*,int ) ;
 int FUNC_5 (struct mv_mpic_softc*,int ,int) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int **) ;
 int FUNC_10 (int ,int ,int **) ;
 int FUNC_11 (int ,int *,int ,int ,int *,struct mv_mpic_softc*,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int * FUNC_14 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 () ;
 int FUNC_16 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_17 (struct mv_mpic_softc*) ;
 struct mv_mpic_softc* VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (int ) ;
 void* FUNC_19 (int *) ;
 void* FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_10)
{
 struct mv_mpic_softc *VAR_11;
 int VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 VAR_11 = (struct mv_mpic_softc *)FUNC_12(VAR_10);

 if (VAR_8 != ((void*)0))
  return (VAR_0);
 VAR_8 = VAR_11;

 VAR_11->sc_dev = VAR_10;

 FUNC_16(&VAR_11->mtx, "MPIC lock", ((void*)0), VAR_5);

 VAR_12 = FUNC_9(VAR_10, VAR_9, VAR_11->mpic_res);
 if (VAR_12) {
  FUNC_13(VAR_10, "could not allocate resources\n");
  return (VAR_0);
 }
 if (VAR_11->mpic_res[3] == ((void*)0))
  FUNC_13(VAR_10, "No interrupt to use.\n");
 else
  FUNC_11(VAR_10, VAR_11->mpic_res[3], VAR_1,
      VAR_7, ((void*)0), VAR_11, &VAR_11->intr_hand);

 VAR_11->mpic_bst = FUNC_20(VAR_11->mpic_res[0]);
 VAR_11->mpic_bsh = FUNC_19(VAR_11->mpic_res[0]);

 VAR_11->cpu_bst = FUNC_20(VAR_11->mpic_res[1]);
 VAR_11->cpu_bsh = FUNC_19(VAR_11->mpic_res[1]);

 if (VAR_11->mpic_res[2] != ((void*)0)) {

  VAR_11->drbl_bst = FUNC_20(VAR_11->mpic_res[2]);
  VAR_11->drbl_bsh = FUNC_19(VAR_11->mpic_res[2]);
 }

 FUNC_5(VAR_8, VAR_3, 1);
 FUNC_2(VAR_8, VAR_2, 0);

 VAR_13 = FUNC_4(VAR_8, VAR_3);
 VAR_11->nirqs = FUNC_3(VAR_13);

 if (FUNC_17(VAR_11) != 0) {
  FUNC_13(VAR_10, "could not register PIC ISRCs\n");
  FUNC_10(VAR_10, VAR_9, VAR_11->mpic_res);
  return (VAR_0);
 }

 FUNC_6(FUNC_8(FUNC_18(VAR_10)), VAR_10);

 if (FUNC_14(VAR_10, FUNC_7(VAR_10)) == ((void*)0)) {
  FUNC_13(VAR_10, "could not register PIC\n");
  FUNC_10(VAR_10, VAR_9, VAR_11->mpic_res);
  return (VAR_0);
 }

 FUNC_15();


 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
  FUNC_2(VAR_8, FUNC_0(VAR_14) + VAR_4,
      (1 << VAR_14) | FUNC_1(VAR_8,
      FUNC_0(VAR_14) + VAR_4));

 return (0);
}
