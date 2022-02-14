
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_code {int name; } ;
struct TYPE_2__ {int lock; int name; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_3 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_4 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_5 (struct snd_emu10k1*,struct snd_emu10k1_fx8010_code*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_emu10k1 *VAR_0,
      struct snd_emu10k1_fx8010_code *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->fx8010.lock);
 FUNC_6(VAR_1->name, VAR_0->fx8010.name, sizeof(VAR_1->name));

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  VAR_2 = FUNC_5(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  VAR_2 = FUNC_4(VAR_0, VAR_1);
 FUNC_1(&VAR_0->fx8010.lock);
 return VAR_2;
}
