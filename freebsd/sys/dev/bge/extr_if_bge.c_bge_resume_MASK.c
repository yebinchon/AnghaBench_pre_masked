
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_ifp; } ;
typedef int if_t ;
typedef int device_t ;


 int FUNC_0 (struct bge_softc*) ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bge_softc*) ;
 int FUNC_3 (int ) ;
 struct bge_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct bge_softc *VAR_3;
 if_t VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 FUNC_0(VAR_3);
 VAR_4 = VAR_3->bge_ifp;
 if (FUNC_6(VAR_4) & VAR_1) {
  FUNC_2(VAR_3);
  if (FUNC_5(VAR_4) & VAR_0)
   FUNC_3(VAR_4);
 }
 FUNC_1(VAR_3);

 return (0);
}
