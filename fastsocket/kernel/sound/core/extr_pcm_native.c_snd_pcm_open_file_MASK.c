
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int ref_count; int pcm_release; struct snd_pcm_file* file; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct snd_pcm {int dummy; } ;
struct file {struct snd_pcm_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_pcm_file* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm*,int,struct file*,struct snd_pcm_substream**) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3,
        struct snd_pcm *VAR_4,
        int VAR_5,
        struct snd_pcm_file **VAR_6)
{
 struct snd_pcm_file *VAR_7;
 struct snd_pcm_substream *VAR_8;
 int VAR_9;

 if (VAR_6)
  *VAR_6 = ((void*)0);

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_3, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }
 VAR_7->substream = VAR_8;
 if (VAR_8->ref_count == 1) {
  VAR_8->file = VAR_7;
  VAR_8->pcm_release = VAR_2;
 }
 VAR_3->private_data = VAR_7;
 if (VAR_6)
  *VAR_6 = VAR_7;
 return 0;
}
