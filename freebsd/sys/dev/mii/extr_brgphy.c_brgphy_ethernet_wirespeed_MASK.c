
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_1)
{
 uint32_t VAR_2;


 FUNC_1(VAR_1, VAR_0, 0x7007);
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_0, VAR_2 | (1 << 15) | (1 << 4));
}
