
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cbb_softc {int flags; int mtx; int dev; int intrhand; int * sc_root_token; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_9 ;
 int FUNC_3 (struct cbb_softc*,int ) ;
 int FUNC_4 (struct cbb_softc*) ;
 int FUNC_5 (struct cbb_softc*) ;
 int FUNC_6 (struct cbb_softc*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,int ,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int *) ;

void
FUNC_15(void *VAR_11)
{
 struct cbb_softc *VAR_12 = VAR_11;
 uint32_t VAR_13;
 int VAR_14;
 int VAR_15 = 0;







 FUNC_13("cbbstart", VAR_10 * FUNC_7(VAR_12->dev) * 2);
 FUNC_11(&VAR_12->mtx);
 VAR_12->flags |= VAR_2;
 while ((VAR_12->flags & VAR_1) == 0) {
  FUNC_12(&VAR_12->mtx);
  VAR_13 = FUNC_3(VAR_12, VAR_7);
  FUNC_2(("Status is 0x%x\n", VAR_13));
  if (!FUNC_0(VAR_13)) {
   VAR_15 = 0;
   FUNC_5(VAR_12);
  } else if (VAR_13 & VAR_8) {







   if (VAR_15++ < 10) {
    FUNC_1((VAR_12->dev,
        "Not a card bit set, rescanning\n"));
    FUNC_6(VAR_12, VAR_3, VAR_0);
   } else {
    FUNC_8(VAR_12->dev,
        "Can't determine card type\n");
   }
  } else {
   VAR_15 = 0;
   FUNC_4(VAR_12);
  }





  if (VAR_12->sc_root_token) {
   FUNC_14(VAR_12->sc_root_token);
   VAR_12->sc_root_token = ((void*)0);
  }
  FUNC_11(&VAR_12->mtx);
  FUNC_6(VAR_12, VAR_4, VAR_5 | VAR_6);
  FUNC_10(&VAR_12->intrhand, &VAR_12->mtx, 0, "-", 0);
  VAR_14 = 0;
  while (VAR_14 != VAR_9 &&
      (VAR_12->flags & VAR_1) == 0)
   VAR_14 = FUNC_10(&VAR_12->intrhand, &VAR_12->mtx, 0, "-", VAR_10 / 5);
 }
 FUNC_1((VAR_12->dev, "Thread terminating\n"));
 VAR_12->flags &= ~VAR_2;
 FUNC_12(&VAR_12->mtx);
 FUNC_9(0);
}
