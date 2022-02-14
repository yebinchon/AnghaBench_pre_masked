
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2661_softc {int dummy; } ;


 int FUNC_0 (struct rt2661_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct rt2661_softc *VAR_3, const uint8_t *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = VAR_4[0] | VAR_4[1] << 8 | VAR_4[2] << 16 | VAR_4[3] << 24;
 FUNC_0(VAR_3, VAR_0, VAR_5);

 VAR_5 = VAR_4[4] | VAR_4[5] << 8 | VAR_2 << 16;
 FUNC_0(VAR_3, VAR_1, VAR_5);
}
