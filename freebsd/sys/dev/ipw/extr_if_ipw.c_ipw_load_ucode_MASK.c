
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int sc_dev; } ;


 int FUNC_0 (struct ipw_softc*,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ipw_softc*,int) ;
 int FUNC_3 (struct ipw_softc*,int,int) ;
 int FUNC_4 (struct ipw_softc*,int,int) ;
 int FUNC_5 (struct ipw_softc*,int,int) ;
 int FUNC_6 (struct ipw_softc*,int,char const*,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct ipw_softc *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_5(VAR_2, 0x3000e0, 0x80000000);
 FUNC_0(VAR_2, VAR_1, 0);

 FUNC_4(VAR_2, 0x220000, 0x0703);
 FUNC_4(VAR_2, 0x220000, 0x0707);

 FUNC_3(VAR_2, 0x210014, 0x72);
 FUNC_3(VAR_2, 0x210014, 0x72);

 FUNC_3(VAR_2, 0x210000, 0x40);
 FUNC_3(VAR_2, 0x210000, 0x00);
 FUNC_3(VAR_2, 0x210000, 0x40);

 FUNC_6(VAR_2, 0x210010, VAR_3, VAR_4);

 FUNC_3(VAR_2, 0x210000, 0x00);
 FUNC_3(VAR_2, 0x210000, 0x00);
 FUNC_3(VAR_2, 0x210000, 0x80);

 FUNC_4(VAR_2, 0x220000, 0x0703);
 FUNC_4(VAR_2, 0x220000, 0x0707);

 FUNC_3(VAR_2, 0x210014, 0x72);
 FUNC_3(VAR_2, 0x210014, 0x72);

 FUNC_3(VAR_2, 0x210000, 0x00);
 FUNC_3(VAR_2, 0x210000, 0x80);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  if (FUNC_2(VAR_2, 0x210000) & 1)
   break;
  FUNC_1(10);
 }
 if (VAR_5 == 10) {
  FUNC_7(VAR_2->sc_dev,
      "timeout waiting for ucode to initialize\n");
  return VAR_0;
 }

 FUNC_5(VAR_2, 0x3000e0, 0);

 return 0;
}
