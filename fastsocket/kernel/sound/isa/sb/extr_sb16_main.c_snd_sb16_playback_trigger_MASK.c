
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int mode; int reg_lock; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 struct snd_sb* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_sb*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_9,
         int VAR_10)
{
 struct snd_sb *VAR_11 = FUNC_0(VAR_9);
 int VAR_12 = 0;

 FUNC_2(&VAR_11->reg_lock);
 switch (VAR_10) {
 case 130:
 case 131:
  VAR_11->mode |= VAR_8;
  FUNC_1(VAR_11, VAR_11->mode & VAR_6 ? VAR_2 : VAR_4);
  break;
 case 129:
 case 128:
  FUNC_1(VAR_11, VAR_11->mode & VAR_6 ? VAR_1 : VAR_3);

  if (VAR_11->mode & VAR_7)
   FUNC_1(VAR_11, VAR_11->mode & VAR_5 ? VAR_2 : VAR_4);
  VAR_11->mode &= ~VAR_8;
  break;
 default:
  VAR_12 = -VAR_0;
 }
 FUNC_3(&VAR_11->reg_lock);
 return VAR_12;
}
