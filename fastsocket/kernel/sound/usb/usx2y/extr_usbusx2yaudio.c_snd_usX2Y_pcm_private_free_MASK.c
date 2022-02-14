
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usX2Y_substream {int dummy; } ;
struct snd_pcm {struct snd_usX2Y_substream** private_data; } ;


 int FUNC_0 (struct snd_usX2Y_substream**) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_0)
{
 struct snd_usX2Y_substream **VAR_1 = VAR_0->private_data;
 if (VAR_1)
  FUNC_0(VAR_1);
}
