
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {int * port; int * chan; int state; } ;
struct TYPE_2__ {int (* update ) (struct snd_emux_voice*,int) ;} ;
struct snd_emux {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_emux_voice*) ;
 int FUNC_2 (struct snd_emux_voice*) ;
 int FUNC_3 (struct snd_emux_voice*) ;
 int FUNC_4 (struct snd_emux_voice*,int) ;

__attribute__((used)) static void
FUNC_5(struct snd_emux *VAR_3, struct snd_emux_voice *VAR_4, int VAR_5)
{
 if (!FUNC_0(VAR_4->state))
  return;

 if (VAR_4->chan == ((void*)0) || VAR_4->port == ((void*)0))
  return;
 if (VAR_5 & VAR_2)
  FUNC_3(VAR_4);
 if (VAR_5 & VAR_1)
  FUNC_2(VAR_4);
 if (VAR_5 & VAR_0) {
  if (! FUNC_1(VAR_4) && (VAR_5 == VAR_0))
   return;
 }
 VAR_3->ops.update(VAR_4, VAR_5);
}
