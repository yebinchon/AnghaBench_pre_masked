
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct ipmi_softc {int ipmi_dev; } ;


 scalar_t__ FUNC_0 (struct ipmi_softc*,int ) ;
 int FUNC_1 (struct ipmi_softc*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct ipmi_softc*) ;
 int FUNC_4 (struct ipmi_softc*) ;
 int FUNC_5 (struct ipmi_softc*) ;

__attribute__((used)) static int
FUNC_6(struct ipmi_softc *VAR_4, u_char VAR_5)
{
 u_char VAR_6, VAR_7;

 FUNC_5(VAR_4);
 FUNC_1(VAR_4, VAR_1, VAR_0);
 FUNC_1(VAR_4, VAR_2, VAR_5);
 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 VAR_7 = FUNC_0(VAR_4, VAR_1);
 if (VAR_7 != VAR_3) {
  VAR_6 = FUNC_0(VAR_4, VAR_2);
  FUNC_2(VAR_4->ipmi_dev, "SMIC: Write did not end %02x\n",
      VAR_6);
  return (0);
 }
 return (1);
}
