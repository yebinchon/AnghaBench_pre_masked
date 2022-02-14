
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct dme_softc {scalar_t__ dme_txready; TYPE_1__* dme_ifp; scalar_t__ dme_txbusy; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dme_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dme_softc*) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct dme_softc*) ;
 int FUNC_4 (struct dme_softc*,int ) ;
 scalar_t__ FUNC_5 (struct dme_softc*) ;
 int FUNC_6 (struct dme_softc*) ;
 int FUNC_7 (struct dme_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_9)
{
 struct dme_softc *VAR_10;
 uint32_t VAR_11;

 VAR_10 = (struct dme_softc *)VAR_9;

 FUNC_0(VAR_10);

 VAR_11 = FUNC_4(VAR_10, VAR_0);
 FUNC_7(VAR_10, VAR_0, VAR_11);

 FUNC_2("dme_intr flags %#x busy %d ready %d intr %#x",
     VAR_10->dme_ifp->if_drv_flags, VAR_10->dme_txbusy,
     VAR_10->dme_txready, VAR_11);

 if (VAR_11 & VAR_6) {
  uint8_t VAR_12, VAR_13;

  VAR_10->dme_txbusy = 0;

  VAR_12 = FUNC_4(VAR_10, VAR_1);

  if (VAR_12 & VAR_7)
   VAR_13 = FUNC_4(VAR_10, VAR_2);
  else if (VAR_12 & VAR_8)
   VAR_13 = FUNC_4(VAR_10, VAR_3);
  else
   VAR_13 = 1;

  FUNC_2("dme_intr flags %#x busy %d ready %d nsr %#x",
      VAR_10->dme_ifp->if_drv_flags, VAR_10->dme_txbusy,
      VAR_10->dme_txready, VAR_12);


  if (VAR_10->dme_txready == 0)
   FUNC_3(VAR_10);

  if (VAR_10->dme_txready != 0) {

   FUNC_6(VAR_10);

   FUNC_3(VAR_10);




   if (VAR_10->dme_txready != 0)
    VAR_10->dme_ifp->if_drv_flags |= VAR_4;
  }
 }

 if (VAR_11 & VAR_5) {

  while (FUNC_5(VAR_10) == 0)
   continue;
 }
 FUNC_1(VAR_10);
}
