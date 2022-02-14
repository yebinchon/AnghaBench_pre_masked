
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct sc_info {int dummy; } ;
struct TYPE_2__ {int iselect; scalar_t__ stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct sc_info*,int,int) ;
 TYPE_1__* VAR_3 ;
 struct sc_info* FUNC_3 (struct snd_mixer*) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_5(struct snd_mixer *VAR_4, u_int32_t VAR_5)
{
 struct sc_info *VAR_6 = FUNC_3(VAR_4);
 u_int32_t VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_9 = 0;
 for(VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if ((1<<VAR_7) & VAR_5) {
   if (VAR_3[VAR_7].stereo) {
    VAR_9 |= VAR_3[VAR_7].iselect;
   } else {
    VAR_8 |= VAR_3[VAR_7].iselect;
   }
  }
 }
 FUNC_2(VAR_6, VAR_1, VAR_9|VAR_8);
 FUNC_1(FUNC_4("cmimix_setrecsrc: reg 0x%02x val 0x%02x\n",
        VAR_1, VAR_9|VAR_8));
 VAR_8 = FUNC_0(VAR_8);
 FUNC_2(VAR_6, VAR_0, VAR_9|VAR_8);
 FUNC_1(FUNC_4("cmimix_setrecsrc: reg 0x%02x val 0x%02x\n",
        VAR_0, VAR_9|VAR_8));

 return VAR_5;
}
