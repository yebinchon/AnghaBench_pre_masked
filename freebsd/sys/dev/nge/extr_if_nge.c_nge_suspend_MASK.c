
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_softc {int nge_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct nge_softc*) ;
 int FUNC_1 (struct nge_softc*) ;
 struct nge_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct nge_softc*) ;
 int FUNC_4 (struct nge_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct nge_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 VAR_2->nge_flags |= VAR_0;
 FUNC_1(VAR_2);

 return (0);
}
