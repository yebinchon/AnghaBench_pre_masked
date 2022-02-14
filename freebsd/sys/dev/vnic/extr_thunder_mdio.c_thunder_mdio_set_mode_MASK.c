
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thunder_mdio_softc {int mode; } ;
typedef enum thunder_mdio_mode { ____Placeholder_thunder_mdio_mode } thunder_mdio_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thunder_mdio_softc*,int ) ;
 int FUNC_1 (struct thunder_mdio_softc*,int ,int ) ;

__attribute__((used)) static __inline void
FUNC_2(struct thunder_mdio_softc *VAR_4,
    enum thunder_mdio_mode VAR_5)
{
 uint64_t VAR_6;

 if (VAR_4->mode == VAR_5)
  return;


 VAR_6 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 == VAR_0)
  VAR_6 &= ~VAR_2;
 else
  VAR_6 |= VAR_2;

 VAR_6 |= VAR_3;

 FUNC_1(VAR_4, VAR_1, VAR_6);
 VAR_4->mode = VAR_5;
}
