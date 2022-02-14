
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2560_softc {int dummy; } ;


 int FUNC_0 (struct rt2560_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct rt2560_softc *VAR_2, uint8_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_3[0] = VAR_4 & 0xff;
 VAR_3[1] = (VAR_4 >> 8) & 0xff;
 VAR_3[2] = (VAR_4 >> 16) & 0xff;
 VAR_3[3] = (VAR_4 >> 24);

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_3[4] = VAR_4 & 0xff;
 VAR_3[5] = (VAR_4 >> 8) & 0xff;
}
