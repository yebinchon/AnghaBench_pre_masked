
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_code {int name; } ;
struct TYPE_2__ {int dbg; int lock; int name; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_3 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_4 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_5 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_6 (struct snd_emu10k1*,int ,int ,int) ;
 int FUNC_7 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_8 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct snd_emu10k1 *VAR_4,
      struct snd_emu10k1_fx8010_code *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(&VAR_4->fx8010.lock);
 if ((VAR_6 = FUNC_8(VAR_4, VAR_5)) < 0)
  goto __error;
 FUNC_9(VAR_4->fx8010.name, VAR_5->name, sizeof(VAR_4->fx8010.name));


 if (VAR_4->audigy)
  FUNC_6(VAR_4, VAR_0, 0, VAR_4->fx8010.dbg | VAR_1);
 else
  FUNC_6(VAR_4, VAR_2, 0, VAR_4->fx8010.dbg | VAR_3);

 if ((VAR_6 = FUNC_4(VAR_4, VAR_5)) < 0 ||
     (VAR_6 = FUNC_5(VAR_4, VAR_5)) < 0 ||
     (VAR_6 = FUNC_7(VAR_4, VAR_5)) < 0 ||
     (VAR_6 = FUNC_3(VAR_4, VAR_5)) < 0 ||
     (VAR_6 = FUNC_2(VAR_4, VAR_5)) < 0)
  goto __error;

 if (VAR_4->audigy)
  FUNC_6(VAR_4, VAR_0, 0, VAR_4->fx8010.dbg);
 else
  FUNC_6(VAR_4, VAR_2, 0, VAR_4->fx8010.dbg);
      __error:
 FUNC_1(&VAR_4->fx8010.lock);
 return VAR_6;
}
