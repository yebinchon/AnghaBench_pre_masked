
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_softc {int ifp; } ;


 int FUNC_0 (struct et_softc*,int ) ;
 int FUNC_1 (struct et_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct et_softc *VAR_5)
{

 FUNC_1(VAR_5, VAR_1,
      VAR_2 | VAR_4);

 FUNC_2(5);
 if ((FUNC_0(VAR_5, VAR_1) & VAR_3) == 0) {
  FUNC_3(VAR_5->ifp, "can't stop RX DMA engine\n");
  return (VAR_0);
 }
 return (0);
}
