
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rt2860_softc {int leds; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2860_softc*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct rt2860_softc *VAR_1, uint16_t VAR_2)
{
 FUNC_0(VAR_1, VAR_0,
     VAR_2 | (VAR_1->leds & 0x7f), 0);
}
