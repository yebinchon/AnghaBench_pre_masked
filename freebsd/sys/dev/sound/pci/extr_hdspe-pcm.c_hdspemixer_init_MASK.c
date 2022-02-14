
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_mixer {int dummy; } ;
struct sc_pcminfo {int dev; TYPE_1__* hc; struct sc_info* sc; } ;
struct sc_info {int lock; } ;
struct TYPE_2__ {scalar_t__ rec; scalar_t__ play; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sc_pcminfo* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct snd_mixer*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_4)
{
 struct sc_pcminfo *VAR_5;
 struct sc_info *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = VAR_5->sc;
 if (VAR_6 == ((void*)0))
  return (-1);

 VAR_7 = VAR_1;

 if (VAR_5->hc->play)
  VAR_7 |= VAR_3;

 if (VAR_5->hc->rec)
  VAR_7 |= VAR_2;

 FUNC_4(VAR_6->lock);
 FUNC_3(VAR_5->dev, FUNC_2(VAR_5->dev) | VAR_0);
 FUNC_1(VAR_4, VAR_7);
 FUNC_5(VAR_6->lock);

 return (0);
}
