
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uath_softc {int sc_dev; int * sc_serial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct uath_softc*,int ,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct uath_softc *VAR_3, uint8_t VAR_4[VAR_0])
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_4, VAR_0);
 if (VAR_5 != 0) {
  FUNC_0(VAR_3->sc_dev, "could not read MAC address\n");
  return (VAR_5);
 }

 VAR_5 = FUNC_1(VAR_3, VAR_2,
     &VAR_3->sc_serial[0], sizeof(VAR_3->sc_serial));
 if (VAR_5 != 0) {
  FUNC_0(VAR_3->sc_dev,
      "could not read device serial number\n");
  return (VAR_5);
 }
 return (0);
}
