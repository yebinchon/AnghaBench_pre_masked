
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {int dummy; } ;
struct via82xx_modem {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct viadev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct viadev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 struct via82xx_modem* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct via82xx_modem*,struct viadev*) ;
 int FUNC_4 (struct via82xx_modem*,struct viadev*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct via82xx_modem *VAR_5 = FUNC_2(VAR_4);
 struct viadev *VAR_6 = VAR_4->runtime->private_data;

 FUNC_3(VAR_5, VAR_6);

 FUNC_4(VAR_5, VAR_6);
 FUNC_1(VAR_1|VAR_2|VAR_3,
      FUNC_0(VAR_6, VAR_0));
 return 0;
}
