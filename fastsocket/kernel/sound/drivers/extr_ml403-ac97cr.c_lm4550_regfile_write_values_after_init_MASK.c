
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int dummy; } ;
struct TYPE_2__ {int flag; scalar_t__ value; scalar_t__ def; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct snd_ac97*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
  if ((VAR_3[VAR_5].flag & VAR_2) &&
      (VAR_3[VAR_5].value != VAR_3[VAR_5].def)) {
   FUNC_0(VAR_0, "lm4550_regfile_write_values_after_"
          "init(): reg=0x%x value=0x%x / %d is different "
          "from def=0x%x / %d\n",
          VAR_5, VAR_3[VAR_5].value,
          VAR_3[VAR_5].value, VAR_3[VAR_5].def,
          VAR_3[VAR_5].def);
   FUNC_1(VAR_4, VAR_5 * 2, VAR_3[VAR_5].value);
   VAR_3[VAR_5].flag |= VAR_1;
  }
}
