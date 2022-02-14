
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {int msk_pflags; int msk_mtx; int * msk_res; int msk_res_spec; int * msk_irq; int msk_irq_spec; int * msk_intrhand; int ** msk_devs; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ) ;
 int FUNC_2 (struct msk_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 struct msk_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct msk_softc*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_9)
{
 struct msk_softc *VAR_10;

 VAR_10 = FUNC_9(VAR_9);
 FUNC_3(FUNC_14(&VAR_10->msk_mtx), ("msk mutex not initialized"));

 if (FUNC_10(VAR_9)) {
  if (VAR_10->msk_devs[VAR_5] != ((void*)0)) {
   FUNC_11(FUNC_8(VAR_10->msk_devs[VAR_5]),
       VAR_7);
   FUNC_7(VAR_9, VAR_10->msk_devs[VAR_5]);
  }
  if (VAR_10->msk_devs[VAR_6] != ((void*)0)) {
   FUNC_11(FUNC_8(VAR_10->msk_devs[VAR_6]),
       VAR_7);
   FUNC_7(VAR_9, VAR_10->msk_devs[VAR_6]);
  }
  FUNC_4(VAR_9);
 }


 FUNC_2(VAR_10, VAR_2, 0);
 FUNC_0(VAR_10, VAR_2);
 FUNC_2(VAR_10, VAR_1, 0);
 FUNC_0(VAR_10, VAR_1);


 FUNC_1(VAR_10, VAR_0, VAR_8);


 FUNC_1(VAR_10, VAR_0, VAR_3);

 FUNC_12(VAR_10);

 if (VAR_10->msk_intrhand) {
  FUNC_6(VAR_9, VAR_10->msk_irq[0], VAR_10->msk_intrhand);
  VAR_10->msk_intrhand = ((void*)0);
 }
 FUNC_5(VAR_9, VAR_10->msk_irq_spec, VAR_10->msk_irq);
 if ((VAR_10->msk_pflags & VAR_4) != 0)
  FUNC_15(VAR_9);
 FUNC_5(VAR_9, VAR_10->msk_res_spec, VAR_10->msk_res);
 FUNC_13(&VAR_10->msk_mtx);

 return (0);
}
