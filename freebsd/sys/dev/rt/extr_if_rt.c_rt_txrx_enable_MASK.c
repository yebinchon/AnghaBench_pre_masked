
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt_softc {int pdma_glo_cfg; int dev; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rt_softc*,int ) ;
 int FUNC_2 (struct rt_softc*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct rt_softc *VAR_5)
{
 struct ifnet *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_6 = VAR_5->ifp;


 for (VAR_8 = 0; VAR_8 < 200; VAR_8++) {
  VAR_7 = FUNC_1(VAR_5, VAR_5->pdma_glo_cfg);
  if (!(VAR_7 & (VAR_2 | VAR_0)))
   break;

  FUNC_0(1000);
 }

 if (VAR_8 == 200) {
  FUNC_3(VAR_5->dev, "timeout waiting for DMA engine\n");
  return (-1);
 }

 FUNC_0(50);

 VAR_7 |= VAR_4 | VAR_1 | VAR_3;
 FUNC_2(VAR_5, VAR_5->pdma_glo_cfg, VAR_7);


 return (0);
}
