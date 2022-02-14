
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;


 if (VAR_3 > 31) {
  FUNC_0(VAR_2, "Invalid EPIO pin %d to set\n", VAR_3);
  return;
 }
 FUNC_1(VAR_2, "Setting EPIO pin %d to %d\n", VAR_3, VAR_4);
 VAR_5 = 1 << VAR_3;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (VAR_4)
  VAR_6 |= VAR_5;
 else
  VAR_6 &= ~VAR_5;

 FUNC_3(VAR_2, VAR_1, VAR_6);


 VAR_7 = FUNC_2(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_0, VAR_7 | VAR_5);
}
