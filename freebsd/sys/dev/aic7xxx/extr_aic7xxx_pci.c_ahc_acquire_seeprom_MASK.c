
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seeprom_descriptor {int sd_RDY; int sd_MS; } ;
struct ahc_softc {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seeprom_descriptor*,int ) ;
 int FUNC_1 (struct seeprom_descriptor*) ;
 int VAR_2 ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (int) ;

int
FUNC_4(struct ahc_softc *VAR_3, struct seeprom_descriptor *VAR_4)
{
 int VAR_5;

 if ((VAR_3->features & VAR_0) != 0
  && (FUNC_2(VAR_3, VAR_2) & VAR_1) == 0)
  return (0);
 FUNC_0(VAR_4, VAR_4->sd_MS);
 VAR_5 = 1000;
 while (--VAR_5 && ((FUNC_1(VAR_4) & VAR_4->sd_RDY) == 0)) {
  FUNC_3(1000);
 }
 if ((FUNC_1(VAR_4) & VAR_4->sd_RDY) == 0) {
  FUNC_0(VAR_4, 0);
  return (0);
 }
 return(1);
}
