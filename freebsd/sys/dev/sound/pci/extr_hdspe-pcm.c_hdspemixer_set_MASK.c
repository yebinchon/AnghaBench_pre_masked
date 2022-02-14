
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sc_pcminfo {int chnum; struct sc_chinfo* chan; int dev; } ;
struct sc_chinfo {scalar_t__ dir; unsigned int lvol; unsigned int rvol; scalar_t__ run; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct sc_chinfo*) ;
 struct sc_pcminfo* FUNC_2 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_3(struct snd_mixer *VAR_4, unsigned VAR_5,
    unsigned VAR_6, unsigned VAR_7)
{
 struct sc_pcminfo *VAR_8;
 struct sc_chinfo *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_4);






 for (VAR_10 = 0; VAR_10 < VAR_8->chnum; VAR_10++) {
  VAR_9 = &VAR_8->chan[VAR_10];
  if ((VAR_5 == VAR_3 && VAR_9->dir == VAR_0) ||
      (VAR_5 == VAR_2 && VAR_9->dir == VAR_1)) {
   VAR_9->lvol = VAR_6;
   VAR_9->rvol = VAR_7;
   if (VAR_9->run)
    FUNC_1(VAR_9);
  }
 }

 return (0);
}
