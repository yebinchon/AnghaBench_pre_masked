
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sc_pcminfo* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct snd_mixer*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_2)
{
 struct sc_pcminfo *VAR_3;
 struct sc_info *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = VAR_3->sc;

 if (VAR_4 == ((void*)0))
  return -1;

 VAR_5 = VAR_1;

 FUNC_4(VAR_4->lock);
 FUNC_3(VAR_3->dev, FUNC_2(VAR_3->dev) | VAR_0);
 FUNC_1(VAR_2, VAR_5);
 FUNC_5(VAR_4->lock);

 return (0);
}
