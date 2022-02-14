
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
struct ichss_softc {struct cf_setting* sets; int ctrl_reg; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 size_t VAR_1 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,int*) ;
 struct ichss_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, struct cf_setting *VAR_3)
{
 struct ichss_softc *VAR_4;
 uint64_t VAR_5;
 uint8_t VAR_6;

 VAR_4 = FUNC_3(VAR_2);
 VAR_6 = FUNC_1(VAR_4->ctrl_reg) & VAR_1;


 if (VAR_4->sets[VAR_6].freq == VAR_0) {
  FUNC_2(0, &VAR_5);
  VAR_4->sets[VAR_6].freq = VAR_5 / 1000000;
  FUNC_0("ichss: get calibrated new rate of %d\n",
      VAR_4->sets[VAR_6].freq);
 }
 *VAR_3 = VAR_4->sets[VAR_6];

 return (0);
}
