
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int mixer_lock; int mode; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct snd_sb*) ;
 int FUNC_1 (struct snd_sb*,int ,int ) ;
 struct snd_sb* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_sb *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = 0;







 FUNC_3(&VAR_5->mixer_lock);
 switch (VAR_4) {
 case 130:
 case 131:
  VAR_5->mode |= VAR_2;
  FUNC_1(VAR_5, VAR_0,
        FUNC_0(VAR_5));
  break;
 case 129:
 case 128:
  VAR_5->mode &= ~VAR_2;
  FUNC_1(VAR_5, VAR_0,
        FUNC_0(VAR_5));
  break;
 default:
  VAR_6 = -VAR_1;
  break;
 }
 FUNC_4(&VAR_5->mixer_lock);
 return VAR_6;
}
