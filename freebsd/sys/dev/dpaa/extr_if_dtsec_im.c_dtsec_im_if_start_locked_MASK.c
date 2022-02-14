
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct mbuf {int dummy; } ;
struct dtsec_softc {int sc_txph; TYPE_2__* sc_ifnet; TYPE_1__* sc_mii; } ;
struct TYPE_4__ {int if_drv_flags; int if_snd; } ;
struct TYPE_3__ {int mii_media_status; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct mbuf*,int ,int ,int *) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*,int *) ;

void
FUNC_9(struct dtsec_softc *VAR_4)
{
 uint8_t *VAR_5;
 uint16_t VAR_6;
 struct mbuf *VAR_7;
 int VAR_8;

 FUNC_0(VAR_4);


 if ((VAR_4->sc_mii->mii_media_status & VAR_2) == 0)
  return;

 if ((VAR_4->sc_ifnet->if_drv_flags & VAR_1) != VAR_1)
  return;

 while (!FUNC_3(&VAR_4->sc_ifnet->if_snd)) {
  FUNC_2(&VAR_4->sc_ifnet->if_snd, VAR_7);
  if (VAR_7 == ((void*)0))
   break;

  VAR_6 = FUNC_8(VAR_7, ((void*)0));
  VAR_5 = FUNC_5(VAR_6, 0, sizeof(void *));
  if (!VAR_5) {
   FUNC_7(VAR_7);
   break;
  }

  FUNC_6(VAR_7, 0, VAR_6, VAR_5);
  FUNC_7(VAR_7);

  VAR_8 = FUNC_1(VAR_4->sc_txph, VAR_5, VAR_6, VAR_3, VAR_5);
  if (VAR_8 != VAR_0) {

   FUNC_4(VAR_5);
   break;
  }
 }
}
