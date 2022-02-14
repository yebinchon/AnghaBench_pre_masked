
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sf_callback {int sample_reset; int sample_free; int sample_new; struct snd_emux* private_data; } ;
struct snd_emux_voice {int dummy; } ;
struct TYPE_2__ {scalar_t__ sample_reset; scalar_t__ sample_free; scalar_t__ sample_new; } ;
struct snd_emux {scalar_t__ max_voices; int * sflist; int memhdr; TYPE_1__ ops; int * voices; int name; struct snd_card* card; int hw; } ;
struct snd_card {int dummy; } ;
typedef int sf_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct snd_sf_callback*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct snd_emux*) ;
 int FUNC_5 (struct snd_emux*,struct snd_card*,int) ;
 int FUNC_6 (struct snd_emux*) ;
 int FUNC_7 (struct snd_emux*,struct snd_card*) ;
 int FUNC_8 (struct snd_emux*) ;
 int FUNC_9 (struct snd_emux*,struct snd_card*,int) ;
 int * FUNC_10 (struct snd_sf_callback*,int ) ;

int FUNC_11(struct snd_emux *VAR_6, struct snd_card *VAR_7, int VAR_8, char *VAR_9)
{
 int VAR_10;
 struct snd_sf_callback VAR_11;

 if (FUNC_3(!VAR_6->hw || VAR_6->max_voices <= 0))
  return -VAR_0;
 if (FUNC_3(!VAR_7 || !VAR_9))
  return -VAR_0;

 VAR_6->card = VAR_7;
 VAR_6->name = FUNC_1(VAR_9, VAR_2);
 VAR_6->voices = FUNC_0(VAR_6->max_voices, sizeof(struct snd_emux_voice),
         VAR_2);
 if (VAR_6->voices == ((void*)0))
  return -VAR_1;


 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.private_data = VAR_6;
 if (VAR_6->ops.sample_new)
  VAR_11.sample_new = VAR_4;
 if (VAR_6->ops.sample_free)
  VAR_11.sample_free = VAR_3;
 if (VAR_6->ops.sample_reset)
  VAR_11.sample_reset = VAR_5;
 VAR_6->sflist = FUNC_10(&VAR_11, VAR_6->memhdr);
 if (VAR_6->sflist == ((void*)0))
  return -VAR_1;

 if ((VAR_10 = FUNC_4(VAR_6)) < 0)
  return VAR_10;

 FUNC_8(VAR_6);

 FUNC_5(VAR_6, VAR_7, VAR_8);



 FUNC_7(VAR_6, VAR_7);




 return 0;
}
