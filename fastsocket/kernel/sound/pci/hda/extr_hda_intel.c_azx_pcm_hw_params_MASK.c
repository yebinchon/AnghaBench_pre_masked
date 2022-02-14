
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct azx_pcm {struct azx* chip; } ;
struct azx_dev {scalar_t__ format_val; scalar_t__ period_bytes; scalar_t__ bufsize; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct azx_dev*) ;
 int FUNC_1 (struct azx_dev*) ;
 int FUNC_2 (struct azx_dev*) ;
 struct azx_dev* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct azx*,struct azx_dev*,struct snd_pcm_substream*,int) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 struct azx_pcm* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1,
        struct snd_pcm_hw_params *VAR_2)
{
 struct azx_pcm *VAR_3 = FUNC_7(VAR_1);
 struct azx *VAR_4 = VAR_3->chip;
 struct azx_dev *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 FUNC_1(VAR_5);
 if (FUNC_0(VAR_5)) {
  VAR_6 = -VAR_0;
  goto unlock;
 }

 FUNC_4(VAR_4, VAR_5, VAR_1, 0);
 VAR_5->bufsize = 0;
 VAR_5->period_bytes = 0;
 VAR_5->format_val = 0;
 VAR_6 = FUNC_6(VAR_1,
     FUNC_5(VAR_2));
 if (VAR_6 < 0)
  goto unlock;
 FUNC_4(VAR_4, VAR_5, VAR_1, 1);
 unlock:
 FUNC_2(VAR_5);
 return VAR_6;
}
