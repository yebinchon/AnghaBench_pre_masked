
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct onyx {int mutex; int open_count; } ;
struct codec_info_item {struct onyx* codec_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct codec_info_item *VAR_0,
       struct snd_pcm_substream *VAR_1)
{
 struct onyx *VAR_2 = VAR_0->codec_data;

 FUNC_0(&VAR_2->mutex);
 VAR_2->open_count++;
 FUNC_1(&VAR_2->mutex);

 return 0;
}
