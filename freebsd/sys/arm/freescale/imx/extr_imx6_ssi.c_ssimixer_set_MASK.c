
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sc_pcminfo {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct sc_pcminfo* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_0, unsigned VAR_1,
    unsigned VAR_2, unsigned VAR_3)
{
 struct sc_pcminfo *VAR_4;

 VAR_4 = FUNC_1(VAR_0);




 FUNC_0(VAR_4->dev, "ssimixer_set() %d %d\n",
     VAR_2, VAR_3);


 return (0);
}
