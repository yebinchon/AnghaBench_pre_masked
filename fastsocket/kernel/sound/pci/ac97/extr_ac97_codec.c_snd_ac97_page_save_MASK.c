
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_ac97 {int ext_id; int page_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int ,int,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 *VAR_4, int VAR_5, struct snd_kcontrol *VAR_6)
{
 int VAR_7 = -1;
 if ((VAR_6->private_value & (1<<25)) &&
     (VAR_4->ext_id & VAR_1) >= VAR_0 &&
     (VAR_5 >= 0x60 && VAR_5 < 0x70)) {
  unsigned short VAR_8 = (VAR_6->private_value >> 26) & 0x0f;
  FUNC_0(&VAR_4->page_mutex);
  VAR_7 = FUNC_1(VAR_4, VAR_2) & VAR_3;
  FUNC_2(VAR_4, VAR_2, VAR_3, VAR_8);
 }
 return VAR_7;
}
