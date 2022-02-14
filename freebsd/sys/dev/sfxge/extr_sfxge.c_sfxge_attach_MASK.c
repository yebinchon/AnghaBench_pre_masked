
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int dev; struct ifnet* ifnet; int enp; int init_state; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sfxge_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct ifnet* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct sfxge_softc*) ;
 int FUNC_7 (struct sfxge_softc*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*,struct sfxge_softc*) ;
 int FUNC_10 (struct sfxge_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct sfxge_softc *VAR_4;
 struct ifnet *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dev = VAR_3;


 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_3, "Couldn't allocate ifnet\n");
  VAR_6 = VAR_0;
  goto fail;
 }
 VAR_4->ifnet = VAR_5;


 FUNC_0(VAR_4->dev, "create nic");
 if ((VAR_6 = FUNC_6(VAR_4)) != 0)
  goto fail2;


 FUNC_0(VAR_4->dev, "init ifnet");
 if ((VAR_6 = FUNC_9(VAR_5, VAR_4)) != 0)
  goto fail3;

 FUNC_0(VAR_4->dev, "init vpd");
 if ((VAR_6 = FUNC_10(VAR_4)) != 0)
  goto fail4;






 FUNC_3(VAR_4->enp);

 VAR_4->init_state = VAR_2;

 FUNC_0(VAR_4->dev, "success");
 return (0);

fail4:
 FUNC_8(VAR_5);
fail3:
 FUNC_3(VAR_4->enp);
 FUNC_7(VAR_4);

fail2:
 FUNC_5(VAR_4->ifnet);

fail:
 FUNC_0(VAR_4->dev, "failed %d", VAR_6);
 return (VAR_6);
}
