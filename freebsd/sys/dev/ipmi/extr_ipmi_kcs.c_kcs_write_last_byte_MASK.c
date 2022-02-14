
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ipmi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ipmi_softc*,int ,int ) ;
 int FUNC_2 (struct ipmi_softc*,int) ;
 int FUNC_3 (struct ipmi_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(struct ipmi_softc *VAR_5, u_char VAR_6)
{
 int VAR_7;


 FUNC_1(VAR_5, VAR_1, VAR_0);


 VAR_7 = FUNC_3(VAR_5, 0);
 if (VAR_7 & VAR_3)
  return (0);

 if (FUNC_0(VAR_7) != VAR_4)

  return (0);


 FUNC_2(VAR_5, VAR_7);


 FUNC_1(VAR_5, VAR_2, VAR_6);
 return (1);
}
