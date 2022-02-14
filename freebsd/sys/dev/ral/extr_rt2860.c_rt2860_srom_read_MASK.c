
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rt2860_softc {int (* sc_srom_read ) (struct rt2860_softc*,int ) ;} ;


 int FUNC_0 (struct rt2860_softc*,int ) ;

__attribute__((used)) static __inline uint16_t
FUNC_1(struct rt2860_softc *VAR_0, uint8_t VAR_1)
{

 return VAR_0->sc_srom_read(VAR_0, VAR_1);
}
