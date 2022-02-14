
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tegra_abpmisc_softc {int dummy; } ;
struct TYPE_2__ {int chip_id; int revision; } ;


 int FUNC_0 (struct tegra_abpmisc_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void
FUNC_1(struct tegra_abpmisc_softc *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(VAR_6, 4);
 VAR_8 = (VAR_7 >> 8) & 0xff;
 VAR_9 = (VAR_7 >> 16) & 0xf;

 switch (VAR_9) {
 case 1:
  VAR_10 = VAR_0;
  break;
 case 2:
  VAR_10 = VAR_1;
  break;
 case 3:
  VAR_10 = VAR_2;
  break;
 case 4:
  VAR_10 = VAR_3;
  break;
 default:
  VAR_10 = VAR_4;
 }

 VAR_5.chip_id = VAR_8;
 VAR_5.revision = VAR_10;
}
