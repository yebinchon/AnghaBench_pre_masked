
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct sc_info {int dummy; } ;
struct TYPE_2__ {int iselect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 TYPE_1__* VAR_3 ;
 struct sc_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct snd_mixer *VAR_4, u_int32_t VAR_5)
{
 struct sc_info *VAR_6 = FUNC_1(VAR_4);
 u_int32_t VAR_7, VAR_8, VAR_9;

 for (VAR_7 = VAR_8 = VAR_9 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_5 & (1 << VAR_7)) {
   if (VAR_3[VAR_7].iselect == 1) {
    VAR_8 |= VAR_3[VAR_7].iselect;
    VAR_9 |= VAR_3[VAR_7].iselect;
   } else {
    VAR_8 |= VAR_3[VAR_7].iselect;
    VAR_9 |= VAR_3[VAR_7].iselect >> 1;
   }
  }
 }

 FUNC_0(VAR_6, VAR_0, VAR_8);
 FUNC_0(VAR_6, VAR_1, VAR_9);
 return VAR_5;
}
