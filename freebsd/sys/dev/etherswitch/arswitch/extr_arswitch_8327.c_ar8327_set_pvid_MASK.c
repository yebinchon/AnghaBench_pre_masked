
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct arswitch_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct arswitch_softc *VAR_2, int VAR_3, int VAR_4)
{
 uint32_t VAR_5;


 VAR_4 &= 0x7f;

 VAR_5 = VAR_4 << VAR_1;
 VAR_5 |= VAR_4 << VAR_0;
 FUNC_1(VAR_2->sc_dev, FUNC_0(VAR_3), VAR_5);

 return (0);
}
