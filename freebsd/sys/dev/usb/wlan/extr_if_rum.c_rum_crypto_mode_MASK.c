
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct rum_softc {int sc_dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static uint8_t
FUNC_1(struct rum_softc *VAR_4, u_int VAR_5, int VAR_6)
{
 switch (VAR_5) {
 case 128:
  return (VAR_6 < 8 ? VAR_3 : VAR_2);
 case 129:
  return VAR_1;
 case 130:
  return VAR_0;
 default:
  FUNC_0(VAR_4->sc_dev, "unknown cipher %d\n", VAR_5);
  return 0;
 }
}
