
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct musbotg_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct musbotg_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct musbotg_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct musbotg_softc *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;

 FUNC_1(VAR_2, VAR_1, VAR_4);
}
