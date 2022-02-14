
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ua101 {int capture; } ;
struct snd_pcm_substream {struct ua101* private_data; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct ua101*,int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct ua101 *VAR_1 = VAR_0->private_data;

 return FUNC_0(VAR_1, &VAR_1->capture);
}
