
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int dummy; } ;


 int FUNC_0 (struct ipmi_softc*,int ) ;
 int FUNC_1 (struct ipmi_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct ipmi_softc *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_1;
 VAR_4 &= ~VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
