
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct hme_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hme_softc*,int,int,int) ;
 int FUNC_2 (struct hme_softc*,int) ;
 int FUNC_3 (struct hme_softc*,int,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct hme_softc *VAR_2, u_int32_t VAR_3, u_int32_t VAR_4,
    u_int32_t VAR_5, u_int32_t VAR_6)
{
 int VAR_7 = 0;

 VAR_4 &= ~VAR_5;
 VAR_4 |= VAR_6;
 FUNC_3(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_2, VAR_3, 4,
     VAR_0 | VAR_1);
 if (VAR_5 == 0 && VAR_6 == 0)
  return (1);
 do {
  FUNC_0(100);
  VAR_7++;
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (VAR_7 > 40) {

   FUNC_4(VAR_2->sc_dev, "timeout while writing to "
       "MAC configuration register\n");
   return (0);
  }
 } while ((VAR_4 & VAR_5) != 0 && (VAR_4 & VAR_6) != VAR_6);
 return (1);
}
