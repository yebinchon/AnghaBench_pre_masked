
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpswp_softc {int lock; int ifp; int mii_callout; int swsc; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cpswp_softc*) ;
 int FUNC_2 (struct cpswp_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cpswp_softc*) ;
 struct cpswp_softc* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_0)
{
 struct cpswp_softc *VAR_1;

 VAR_1 = FUNC_6(VAR_0);
 FUNC_0(VAR_1->swsc, (""));
 if (FUNC_7(VAR_0)) {
  FUNC_8(VAR_1->ifp);
  FUNC_1(VAR_1);
  FUNC_5(VAR_1);
  FUNC_2(VAR_1);
  FUNC_4(&VAR_1->mii_callout);
 }

 FUNC_3(VAR_0);

 FUNC_9(VAR_1->ifp);
 FUNC_10(&VAR_1->lock);

 return (0);
}
