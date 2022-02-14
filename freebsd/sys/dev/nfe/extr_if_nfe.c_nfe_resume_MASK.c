
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {scalar_t__ nfe_suspended; int nfe_ifp; } ;
typedef int if_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct nfe_softc*) ;
 int FUNC_1 (struct nfe_softc*) ;
 struct nfe_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfe_softc*) ;
 int FUNC_5 (struct nfe_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct nfe_softc *VAR_2;
 if_t VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 FUNC_5(VAR_2);
 VAR_3 = VAR_2->nfe_ifp;
 if (FUNC_3(VAR_3) & VAR_0)
  FUNC_4(VAR_2);
 VAR_2->nfe_suspended = 0;
 FUNC_1(VAR_2);

 return (0);
}
