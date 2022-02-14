
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ipmi_softc*,int ,int ) ;
 int FUNC_3 (struct ipmi_softc*,int) ;
 int FUNC_4 (struct ipmi_softc*,int ) ;

__attribute__((used)) static int
FUNC_5(struct ipmi_softc *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {

  VAR_6 = FUNC_4(VAR_4, 0);
  if (VAR_6 & VAR_2)
   return (0);


  FUNC_3(VAR_4, VAR_6);


  FUNC_2(VAR_4, VAR_1, VAR_0);


  VAR_6 = FUNC_4(VAR_4, 0);
  if (VAR_6 & VAR_2)
   return (0);

  if (FUNC_1(VAR_6) == VAR_3)
   break;
  FUNC_0(1000000);
 }

 if (FUNC_1(VAR_6) != VAR_3)

  return (0);


 FUNC_3(VAR_4, VAR_6);

 return (1);
}
