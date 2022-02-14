
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nlm_xlpnae_softc {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct nlm_xlpnae_softc *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;
 int VAR_4, VAR_5;


 for (VAR_2 = 0; VAR_2 < 20; VAR_2++) {
  FUNC_1(VAR_1->base, VAR_0,
      (0x80000000 | VAR_2));
  VAR_3 = FUNC_0(VAR_1->base, VAR_0);
  VAR_5 = 2 * ((VAR_3 >> 20) & 0x3ff);
  VAR_4 = 2 * ((VAR_3 >> 8) & 0x1ff);
 }
}
