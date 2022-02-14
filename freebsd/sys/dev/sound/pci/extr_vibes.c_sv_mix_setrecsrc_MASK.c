
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct sc_info {int dummy; } ;
struct TYPE_2__ {int iselect; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sc_info* FUNC_1 (struct snd_mixer*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (struct sc_info*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_5(struct snd_mixer *VAR_4, u_int32_t VAR_5)
{
 struct sc_info *VAR_6 = FUNC_1(VAR_4);
 u_int32_t VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_2) & VAR_1;
 for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if ((1 << VAR_7) & VAR_5) {
   VAR_8 |= VAR_3[VAR_7].iselect;
  }
 }
 FUNC_0(FUNC_2("sv_mix_setrecsrc: mask 0x%08x adc_input 0x%02x\n", VAR_5, VAR_8));
 FUNC_4(VAR_6, VAR_2, VAR_8);
 return VAR_5;
}
