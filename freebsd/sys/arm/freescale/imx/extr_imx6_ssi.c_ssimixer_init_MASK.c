
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sc_pcminfo* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct snd_mixer*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_3)
{
 struct sc_pcminfo *VAR_4;
 struct sc_info *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_4->sc;

 if (VAR_5 == ((void*)0))
  return -1;

 VAR_6 = VAR_1;
 VAR_6 |= VAR_2;

 FUNC_4(VAR_5->lock);
 FUNC_3(VAR_4->dev, FUNC_2(VAR_4->dev) | VAR_0);
 FUNC_1(VAR_3, VAR_6);
 FUNC_5(VAR_5->lock);

 return (0);
}
