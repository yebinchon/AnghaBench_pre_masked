
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97mixtable_entry {int reg; int enable; int bits; int ofs; int mute; scalar_t__ mask; int stereo; } ;
struct ac97_info {int lock; struct ac97mixtable_entry* mix; } ;


 int VAR_0 ;
 int FUNC_0 (struct ac97_info*,int) ;
 int FUNC_1 (struct ac97_info*,int,int) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct ac97_info *VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct ac97mixtable_entry *VAR_5 = &VAR_1->mix[VAR_2];

 if (VAR_5->reg && VAR_5->enable && VAR_5->bits) {
  int VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_9 = (VAR_5->reg >= 0) ? VAR_5->reg : -VAR_5->reg;
  VAR_7 = (1 << VAR_5->bits) - 1;
  VAR_6 = (VAR_7 << 8) | VAR_7;

  if (!VAR_5->stereo)
   VAR_4 = VAR_3;







  if (VAR_5->reg > 0) {
   VAR_3 = 100 - VAR_3;
   VAR_4 = 100 - VAR_4;
  }

  VAR_3 = (VAR_3 * VAR_7) / 100;
  VAR_4 = (VAR_4 * VAR_7) / 100;

  VAR_8 = (VAR_3 << 8) | VAR_4;

  VAR_3 = (VAR_3 * 100) / VAR_7;
  VAR_4 = (VAR_4 * 100) / VAR_7;

  if (VAR_5->reg > 0) {
   VAR_3 = 100 - VAR_3;
   VAR_4 = 100 - VAR_4;
  }





  if (VAR_5->ofs) {
   VAR_8 &= VAR_7;
   VAR_8 <<= VAR_5->ofs;
   VAR_6 = (VAR_7 << VAR_5->ofs);
  }






  if (VAR_5->mute == 1) {
   VAR_6 |= VAR_0;
   if (VAR_3 == 0 && VAR_4 == 0)
    VAR_8 = VAR_0;
  }




  FUNC_3(VAR_1->lock);
  if (VAR_5->mask) {
   int VAR_10 = FUNC_0(VAR_1, VAR_9);
   VAR_8 |= VAR_10 & ~(VAR_6);
  }
  FUNC_1(VAR_1, VAR_9, VAR_8);
  FUNC_4(VAR_1->lock);
  return VAR_3 | (VAR_4 << 8);
 } else {



  return -1;
 }
}
