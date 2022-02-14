
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dc_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct dc_softc *VAR_4, int VAR_5, uint16_t *VAR_6)
{

 FUNC_3(VAR_3 | VAR_2);

 VAR_5 *= 2;
 FUNC_1(VAR_4, VAR_0, VAR_5 | 0x160);
 *VAR_6 = (uint16_t)FUNC_0(VAR_4, VAR_1) & 0xff;
 VAR_5 += 1;
 FUNC_1(VAR_4, VAR_0, VAR_5 | 0x160);
 *VAR_6 |= ((uint16_t)FUNC_0(VAR_4, VAR_1) & 0xff) << 8;

 FUNC_2(VAR_3 | VAR_2);
}
