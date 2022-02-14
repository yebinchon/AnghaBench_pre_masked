
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
struct ichss_softc {TYPE_1__* sets; int dev; int ctrl_reg; int bm_reg; } ;
struct cf_setting {int freq; } ;
typedef int register_t ;
typedef int device_t ;
struct TYPE_2__ {int freq; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ,int*) ;
 struct ichss_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5, const struct cf_setting *VAR_6)
{
 struct ichss_softc *VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12;
 register_t VAR_13;


 VAR_7 = FUNC_5(VAR_5);
 if (FUNC_0(VAR_6->freq, VAR_7->sets[0].freq))
  VAR_11 = 0;
 else if (FUNC_0(VAR_6->freq, VAR_7->sets[1].freq))
  VAR_11 = VAR_4;
 else
  return (VAR_1);
 FUNC_1("ichss: requested setting %d\n", VAR_11);


 VAR_13 = FUNC_7();
 VAR_10 = FUNC_2(VAR_7->ctrl_reg) & ~VAR_4;





 VAR_8 = FUNC_2(VAR_7->bm_reg) | VAR_3;
 FUNC_3(VAR_7->bm_reg, VAR_8);
 FUNC_3(VAR_7->ctrl_reg, VAR_10 | VAR_11);
 FUNC_3(VAR_7->bm_reg, VAR_8 & ~VAR_3);


 VAR_9 = FUNC_2(VAR_7->ctrl_reg);
 FUNC_8(VAR_13);


 if (VAR_11 != (VAR_9 & VAR_4)) {
     FUNC_6(VAR_7->dev, "transition to %d failed\n", VAR_11);
     return (VAR_2);
 }


 if (VAR_7->sets[VAR_11].freq == VAR_0) {
  FUNC_4(0, &VAR_12);
  VAR_7->sets[VAR_11].freq = VAR_12 / 1000000;
  FUNC_1("ichss: set calibrated new rate of %d\n",
      VAR_7->sets[VAR_11].freq);
 }

 return (0);
}
