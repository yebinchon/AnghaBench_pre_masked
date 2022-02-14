
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366rb_softc {scalar_t__ smi_acquired; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366rb_softc*) ;
 int FUNC_1 (struct rtl8366rb_softc*) ;
 scalar_t__ FUNC_2 (struct rtl8366rb_softc*) ;
 int FUNC_3 (struct rtl8366rb_softc*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct rtl8366rb_softc *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_1)
  FUNC_0(VAR_2);
 else
  if (FUNC_2(VAR_2) == 0)
   return (VAR_0);
 FUNC_1(VAR_2);
 FUNC_5(FUNC_4(VAR_2->dev), VAR_2->dev);
 VAR_2->smi_acquired = 0;
 FUNC_3(VAR_2);
 return (0);
}
