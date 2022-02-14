
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ipmi_softc {int dummy; } ;


 int FUNC_0 (struct ipmi_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ipmi_softc*,int ,int ) ;
 int FUNC_3 (struct ipmi_softc*,int ) ;
 int FUNC_4 (struct ipmi_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct ipmi_softc *VAR_5, u_char *VAR_6)
{
 int VAR_7;
 u_char VAR_8;


 VAR_7 = FUNC_3(VAR_5, 0);


 if (FUNC_1(VAR_7) == VAR_4) {


  VAR_7 = FUNC_4(VAR_5, 1);
  if ((VAR_7 & VAR_2) == 0)
   return (0);


  *VAR_6 = FUNC_0(VAR_5, VAR_0);


  FUNC_2(VAR_5, VAR_0, VAR_1);
  return (1);
 }


 if (FUNC_1(VAR_7) == VAR_3) {


  VAR_7 = FUNC_4(VAR_5, 1);
  if ((VAR_7 & VAR_2) == 0)
   return (0);


  VAR_8 = FUNC_0(VAR_5, VAR_0);
  return (2);
 }


 return (0);
}
