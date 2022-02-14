
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_caiaqdev {int n_streams; int* period_out_count; int* period_in_count; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_caiaqdev *VAR_1,
          struct snd_pcm_substream **VAR_2)
{
 int VAR_3, VAR_4, *VAR_5;
 struct snd_pcm_substream *VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_streams; VAR_3++) {
  VAR_6 = VAR_2[VAR_3];
  if (!VAR_6)
   continue;

  VAR_4 = FUNC_0(VAR_6);
  VAR_5 = (VAR_6->stream == VAR_0) ?
     &VAR_1->period_out_count[VAR_3] :
     &VAR_1->period_in_count[VAR_3];

  if (*VAR_5 >= VAR_4) {
   FUNC_1(VAR_6);
   *VAR_5 %= VAR_4;
  }
 }
}
