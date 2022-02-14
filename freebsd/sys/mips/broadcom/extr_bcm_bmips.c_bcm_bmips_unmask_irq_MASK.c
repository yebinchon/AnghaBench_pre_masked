
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ num_cpuirqs; } ;
struct bcm_bmips_softc {int cfg; TYPE_1__ bcm_mips; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bcm_bmips_softc *VAR_4, u_int VAR_5, u_int VAR_6)
{
 FUNC_0(VAR_6 < VAR_3, ("invalid sbflag# ivec"));
 FUNC_0(VAR_5 < VAR_4->bcm_mips.num_cpuirqs, ("invalid MIPS IRQ %u",
     VAR_5));

 if (VAR_5 == 0) {
  uint32_t VAR_7;

  VAR_7 = FUNC_3(VAR_4->cfg, VAR_0);
  VAR_7 |= (1 << VAR_6);
  FUNC_4(VAR_4->cfg, VAR_0, VAR_7);
 } else {
  uint32_t VAR_8;


  FUNC_0(((1 << VAR_6) & VAR_2) != 0,
      ("cannot route high sbflag# ivec %u", VAR_6));

  VAR_8 = FUNC_3(VAR_4->cfg, VAR_1);
  VAR_8 |= (VAR_6 << FUNC_2(VAR_5)) &
      FUNC_1(VAR_5);
  FUNC_4(VAR_4->cfg, VAR_1, VAR_8);
 }
}
