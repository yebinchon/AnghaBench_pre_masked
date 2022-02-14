
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int ddma_chan; } ;


 int VAR_0 ;




 size_t FUNC_0 (struct snd_pcm_substream*) ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 u32 VAR_4 = VAR_1[FUNC_0(VAR_2)]->ddma_chan;

 switch (VAR_3) {
 case 130:
 case 131:
  FUNC_1(VAR_4);
  break;
 case 129:
 case 128:
  FUNC_2(VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
