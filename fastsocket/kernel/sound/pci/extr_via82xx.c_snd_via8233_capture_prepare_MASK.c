
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {int dummy; } ;
struct via82xx {int ac97; int * rates; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ format; int channels; int rate; struct viadev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct viadev*,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct via82xx* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct via82xx*,struct viadev*) ;
 int FUNC_6 (struct via82xx*,int ) ;
 int FUNC_7 (struct via82xx*,struct viadev*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_8)
{
 struct via82xx *VAR_9 = FUNC_4(VAR_8);
 struct viadev *VAR_10 = VAR_8->runtime->private_data;
 struct snd_pcm_runtime *VAR_11 = VAR_8->runtime;

 if (FUNC_9(&VAR_9->rates[1], VAR_11->rate) < 0)
  return -VAR_1;
 FUNC_3(VAR_9->ac97, VAR_0, VAR_11->rate);
 FUNC_5(VAR_9, VAR_10);
 FUNC_7(VAR_9, VAR_10);
 FUNC_1(VAR_7, FUNC_0(VAR_10, VAR_3));
 FUNC_2((VAR_11->format == VAR_4 ? VAR_5 : 0) |
      (VAR_11->channels > 1 ? VAR_6 : 0) |
      0xff000000,
      FUNC_0(VAR_10, VAR_2));
 FUNC_8(20);
 FUNC_6(VAR_9, 0);
 return 0;
}
