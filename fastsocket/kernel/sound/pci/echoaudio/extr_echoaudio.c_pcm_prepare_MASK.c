
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int format; int channels; int rate; scalar_t__ private_data; } ;
struct echoaudio {int dummy; } ;
struct audiopipe {int index; } ;
struct audioformat {int data_are_bigendian; int bits_per_sample; scalar_t__ mono_to_stereo; int interleave; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;





 int FUNC_1 (struct echoaudio*,int) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*,int,struct audioformat*) ;
 scalar_t__ FUNC_4 (int) ;
 struct echoaudio* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct echoaudio *VAR_2 = FUNC_5(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct audioformat VAR_4;
 int VAR_5 = ((struct audiopipe *)VAR_3->private_data)->index;

 FUNC_0(("Prepare rate=%d format=%d channels=%d\n",
  VAR_3->rate, VAR_3->format, VAR_3->channels));
 VAR_4.interleave = VAR_3->channels;
 VAR_4.data_are_bigendian = 0;
 VAR_4.mono_to_stereo = 0;
 switch (VAR_3->format) {
 case 128:
  VAR_4.bits_per_sample = 8;
  break;
 case 132:
  VAR_4.bits_per_sample = 16;
  break;
 case 131:
  VAR_4.bits_per_sample = 24;
  break;
 case 130:
  VAR_4.data_are_bigendian = 1;
 case 129:
  VAR_4.bits_per_sample = 32;
  break;
 default:
  FUNC_0(("Prepare error: unsupported format %d\n",
   VAR_3->format));
  return -VAR_0;
 }

 if (FUNC_4(VAR_5 >= FUNC_2(VAR_2)))
  return -VAR_0;
 if (FUNC_4(!FUNC_1(VAR_2, VAR_5)))
  return -VAR_0;
 FUNC_3(VAR_2, VAR_5, &VAR_4);
 return 0;
}
