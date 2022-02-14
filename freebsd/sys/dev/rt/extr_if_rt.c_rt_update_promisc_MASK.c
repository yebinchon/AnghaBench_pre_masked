
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int dev; } ;
struct ifnet {int if_flags; struct rt_softc* if_softc; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_1)
{
 struct rt_softc *VAR_2;

 VAR_2 = VAR_1->if_softc;
 FUNC_1("%s: %s promiscuous mode\n",
  FUNC_0(VAR_2->dev),
  (VAR_1->if_flags & VAR_0) ? "entering" : "leaving");
}
