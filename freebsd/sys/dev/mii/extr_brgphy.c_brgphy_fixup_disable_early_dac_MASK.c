
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_2)
{
 uint32_t VAR_3;

 FUNC_1(VAR_2, VAR_0, 0x0f08);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_3 &= ~(1 << 8);
 FUNC_1(VAR_2, VAR_1, VAR_3);

}
