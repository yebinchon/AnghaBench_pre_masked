
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sge_softc {int sge_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct sge_softc*,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sge_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8, int VAR_9, int VAR_10)
{
 struct sge_softc *VAR_11;
 uint32_t VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_8);
 FUNC_1(VAR_11, VAR_0, (VAR_9 << VAR_4) |
     (VAR_10 << VAR_5) | VAR_3 | VAR_6);
 FUNC_2(10);
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_12 = FUNC_0(VAR_11, VAR_0);
  if ((VAR_12 & VAR_6) == 0)
   break;
  FUNC_2(10);
 }
 if (VAR_13 == VAR_7) {
  FUNC_4(VAR_11->sge_dev, "PHY read timeout : %d\n", VAR_10);
  return (0);
 }
 return ((VAR_12 & VAR_1) >> VAR_2);
}
