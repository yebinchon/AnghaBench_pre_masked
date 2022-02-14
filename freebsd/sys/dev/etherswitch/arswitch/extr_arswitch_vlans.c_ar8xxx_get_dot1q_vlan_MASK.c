
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct arswitch_softc {int numphys; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arswitch_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct arswitch_softc*,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct arswitch_softc *VAR_5, uint32_t *VAR_6,
    uint32_t *VAR_7, int VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_5, VAR_4);
 VAR_10 = FUNC_1(VAR_5, VAR_1, VAR_8, 0);
 if (VAR_10)
  return (VAR_10);

 VAR_9 = FUNC_2(VAR_5->sc_dev, VAR_0);
 if ((VAR_9 & VAR_2) == 0) {
  *VAR_6 = 0;
  return (VAR_3);
 }
 VAR_9 &= ((1 << (VAR_5->numphys + 1)) - 1);
 *VAR_6 = VAR_9;
 *VAR_7 = VAR_9;
 return (0);
}
