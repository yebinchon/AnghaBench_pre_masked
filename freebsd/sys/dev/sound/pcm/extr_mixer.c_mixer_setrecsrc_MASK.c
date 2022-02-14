
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snddev_info {int flags; } ;
struct snd_mixer {int recdevs; int recsrc; int lock; int dev; } ;


 int FUNC_0 (struct snd_mixer*,int) ;
 int FUNC_1 (struct snd_mixer*,int) ;
 int FUNC_2 (struct snd_mixer*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snddev_info* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_4, u_int32_t VAR_5)
{
 struct snddev_info *VAR_6;
 u_int32_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4->dev);
 if (VAR_6 == ((void*)0))
  return -1;
 if (!(VAR_6->flags & VAR_0) && FUNC_5(VAR_4->lock) != 0)
  VAR_8 = 1;
 else
  VAR_8 = 0;
 VAR_5 &= VAR_4->recdevs;
 if (VAR_5 == 0)
  VAR_5 = VAR_4->recdevs & VAR_2;
 if (VAR_5 == 0)
  VAR_5 = VAR_4->recdevs & VAR_3;
 if (VAR_5 == 0)
  VAR_5 = VAR_4->recdevs & VAR_1;
 if (VAR_5 == 0 && VAR_4->recdevs != 0)
  VAR_5 = (1 << (FUNC_4(VAR_4->recdevs) - 1));

 FUNC_2(VAR_4, VAR_8);
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_8);

 VAR_4->recsrc = VAR_7;

 return 0;
}
