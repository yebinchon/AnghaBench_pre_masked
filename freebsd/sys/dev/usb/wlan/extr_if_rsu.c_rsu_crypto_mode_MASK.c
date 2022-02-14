
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct rsu_softc {int sc_dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static uint8_t
FUNC_1(struct rsu_softc *VAR_5, u_int VAR_6, int VAR_7)
{
 switch (VAR_6) {
 case 128:
  return VAR_7 < 8 ? VAR_4 : VAR_3;
 case 129:
  return VAR_2;
 case 130:
  return VAR_0;
 default:
  FUNC_0(VAR_5->sc_dev, "unknown cipher %d\n", VAR_6);
  return VAR_1;
 }
}
