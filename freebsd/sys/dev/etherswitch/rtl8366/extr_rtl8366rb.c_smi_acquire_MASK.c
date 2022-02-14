
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366rb_softc {scalar_t__ smi_acquired; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8366rb_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct rtl8366rb_softc*) ;
 int FUNC_2 (struct rtl8366rb_softc*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct rtl8366rb_softc *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 if (VAR_7 == VAR_5)
  FUNC_0(VAR_6);
 else
  if (FUNC_1(VAR_6) == 0)
   return (VAR_1);
 if (VAR_6->smi_acquired == VAR_4)
  VAR_8 = VAR_0;
 else {
  VAR_8 = FUNC_4(FUNC_3(VAR_6->dev), VAR_6->dev, VAR_7 == VAR_5 ? VAR_3 : VAR_2);

  if (VAR_8 == 0)
   VAR_6->smi_acquired = VAR_4;
 }
 FUNC_2(VAR_6);
 return (VAR_8);
}
