
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_mmc_softc {TYPE_1__* aw_mmc_conf; int aw_dev; } ;
struct TYPE_2__ {scalar_t__ mask_data0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aw_mmc_softc*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct aw_mmc_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct aw_mmc_softc *VAR_10, uint32_t VAR_11)
{
 uint32_t VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(VAR_10, VAR_0);
 VAR_12 &= ~(VAR_1 | VAR_2 |
     VAR_3);

 if (VAR_11)
  VAR_12 |= VAR_1;
 if (VAR_10->aw_mmc_conf->mask_data0)
  VAR_12 |= VAR_3;

 FUNC_1(VAR_10, VAR_0, VAR_12);

 VAR_12 = VAR_5 | VAR_6 |
     VAR_7;
 FUNC_1(VAR_10, VAR_4, VAR_12);
 VAR_13 = 0xfffff;

 while (VAR_12 & VAR_5 && --VAR_13 > 0) {
  VAR_12 = FUNC_0(VAR_10, VAR_4);
  FUNC_2(10);
 }
 FUNC_1(VAR_10, VAR_8, 0xffffffff);

 if (VAR_12 & VAR_5) {
  FUNC_3(VAR_10->aw_dev, "timeout updating clock\n");
  return (VAR_9);
 }

 if (VAR_10->aw_mmc_conf->mask_data0) {
  VAR_12 = FUNC_0(VAR_10, VAR_0);
  VAR_12 &= ~VAR_3;
  FUNC_1(VAR_10, VAR_0, VAR_12);
 }

 return (0);
}
