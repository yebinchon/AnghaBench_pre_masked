
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bxe_softc *VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 uint32_t VAR_5, VAR_6;
 *VAR_4 = 0;

 if (VAR_3 > 31) {
  FUNC_0(VAR_2, "Invalid EPIO pin %d to get\n", VAR_3);
  return;
 }

 VAR_5 = 1 << VAR_3;

 VAR_6 = FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_1, VAR_6 & ~VAR_5);

 *VAR_4 = (FUNC_1(VAR_2, VAR_0) & VAR_5) >> VAR_3;
}
