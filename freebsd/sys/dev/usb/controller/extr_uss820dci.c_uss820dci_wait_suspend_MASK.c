
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct uss820dci_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct uss820dci_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct uss820dci_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct uss820dci_softc *VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6;
 uint8_t VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_0);
 VAR_7 = FUNC_0(VAR_4, VAR_1);

 if (VAR_5) {
  VAR_6 |= VAR_3;
  VAR_7 &= ~VAR_2;
 } else {
  VAR_6 &= ~VAR_3;
  VAR_7 |= VAR_2;
 }

 FUNC_1(VAR_4, VAR_0, VAR_6);
 FUNC_1(VAR_4, VAR_1, VAR_7);
}
