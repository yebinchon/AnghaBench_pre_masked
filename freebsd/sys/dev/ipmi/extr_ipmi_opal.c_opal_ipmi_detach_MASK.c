
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_ipmi_softc {int sc_msg; } ;
typedef int device_t ;


 int VAR_0 ;
 struct opal_ipmi_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct opal_ipmi_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == 0)
  FUNC_1(VAR_2->sc_msg, VAR_0);

 return (VAR_3);
}
