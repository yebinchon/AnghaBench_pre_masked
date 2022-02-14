
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sb_info {int dummy; } ;






 struct sb_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct sb_info*,int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
     struct sb_info *VAR_4 = FUNC_0(VAR_0);
     int VAR_5, VAR_6;

 VAR_6 = 7;
 switch (VAR_1) {
 case 128:
  VAR_5 = 0x2;
  break;

 case 129:
  VAR_5 = 0x6;
  break;

 case 131:
  VAR_5 = 0x8;
  break;

 case 130:
  VAR_5 = 0x0a;
  VAR_6 = 3;
  break;

 default:
  return -1;
 }

 VAR_2 = (VAR_2 * VAR_6) / 100;

 FUNC_1(VAR_4, VAR_5, VAR_2 << 1);

 VAR_2 = (VAR_2 * 100) / VAR_6;

     return VAR_2 | (VAR_2 << 8);
}
