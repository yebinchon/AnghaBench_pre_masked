
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ipmi_softc {int ipmi_dev; } ;


 int FUNC_0 (struct ipmi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct ipmi_softc*,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ipmi_softc*,int) ;
 int FUNC_5 (struct ipmi_softc*,int ) ;
 int FUNC_6 (struct ipmi_softc*,int) ;

__attribute__((used)) static void
FUNC_7(struct ipmi_softc *VAR_8)
{
 int VAR_9, VAR_10;
 u_char VAR_11;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {


  VAR_10 = FUNC_5(VAR_8, 0);


  FUNC_2(VAR_8, VAR_1, VAR_0);


  VAR_10 = FUNC_5(VAR_8, 0);


  FUNC_4(VAR_8, VAR_10);

  if (VAR_10 & VAR_4) {
   VAR_11 = FUNC_0(VAR_8, VAR_2);
   if (VAR_11 != 0)
    FUNC_3(VAR_8->ipmi_dev,
        "KCS Error Data %02x\n", VAR_11);
  }


  FUNC_2(VAR_8, VAR_2, 0x00);


  VAR_10 = FUNC_5(VAR_8, 0);

  if (FUNC_1(VAR_10) == VAR_6) {


   VAR_10 = FUNC_6(VAR_8, 1);


   VAR_11 = FUNC_0(VAR_8, VAR_2);
   if (VAR_11 != 0 && (VAR_11 != 0xff || VAR_7))
    FUNC_3(VAR_8->ipmi_dev, "KCS error: %02x\n",
        VAR_11);


   FUNC_2(VAR_8, VAR_2, VAR_3);


   VAR_10 = FUNC_5(VAR_8, 0);
  }


  if (FUNC_1(VAR_10) == VAR_5) {

   VAR_10 = FUNC_6(VAR_8, 1);


   FUNC_4(VAR_8, VAR_10);
   return;
  }
 }
 FUNC_3(VAR_8->ipmi_dev, "KCS: Error retry exhausted\n");
}
