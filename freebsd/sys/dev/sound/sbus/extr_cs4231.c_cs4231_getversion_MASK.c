
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct cs4231_softc {int sc_codecv; int sc_chipvid; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cs4231_softc*,int ) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_2(struct cs4231_softc *VAR_5)
{
 u_int8_t VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_5->sc_codecv = VAR_6 & VAR_0;
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_6 &= (VAR_4 | VAR_2);
 VAR_5->sc_chipvid = VAR_6;
 switch(VAR_6) {
  case 0x80:
   FUNC_1(VAR_5->sc_dev, "<CS4231 Codec Id. %d>\n",
       VAR_5->sc_codecv);
   break;
  case 0xa0:
   FUNC_1(VAR_5->sc_dev, "<CS4231A Codec Id. %d>\n",
       VAR_5->sc_codecv);
   break;
  case 0x82:
   FUNC_1(VAR_5->sc_dev, "<CS4232 Codec Id. %d>\n",
       VAR_5->sc_codecv);
   break;
  default:
   FUNC_1(VAR_5->sc_dev,
       "<Unknown 0x%x Codec Id. %d\n", VAR_6, VAR_5->sc_codecv);
   break;
 }
}
