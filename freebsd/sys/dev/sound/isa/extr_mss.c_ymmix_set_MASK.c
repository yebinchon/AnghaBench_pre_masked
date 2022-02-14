
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct mss_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct mss_info*,int ,int) ;
 struct mss_info* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct mss_info*) ;
 int FUNC_3 (struct mss_info*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct mss_info*) ;

__attribute__((used)) static int
FUNC_5(struct snd_mixer *VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
 struct mss_info *VAR_9 = FUNC_1(VAR_5);
 int VAR_10, VAR_11, VAR_12;

 FUNC_2(VAR_9);
 switch (VAR_6) {
 case 128:
  if (VAR_7) VAR_10 = 15 - (VAR_7 * 15) / 100;
  else VAR_10 = 0x80;
  FUNC_0(VAR_9, VAR_3, VAR_10);
  if (VAR_8) VAR_10 = 15 - (VAR_8 * 15) / 100;
  else VAR_10 = 0x80;
  FUNC_0(VAR_9, VAR_4, VAR_10);
  break;

 case 130:
  VAR_10 = VAR_7;
  if (VAR_7) VAR_10 = 31 - (VAR_7 * 31) / 100;
  else VAR_10 = 0x80;
  FUNC_0(VAR_9, VAR_1, VAR_10);
  break;

 case 131:
  VAR_11 = (VAR_7 * 7) / 100;
  VAR_12 = (VAR_8 * 7) / 100;
  VAR_10 = (VAR_12 << 4) | VAR_11;
  FUNC_0(VAR_9, VAR_0, VAR_10);
  break;

 case 129:
  VAR_11 = (VAR_7 * 7) / 100;
  VAR_12 = (VAR_8 * 7) / 100;
  VAR_10 = (VAR_12 << 4) | VAR_11;
  FUNC_0(VAR_9, VAR_2, VAR_10);
  break;

 default:
  FUNC_3(VAR_9, VAR_6, VAR_7, VAR_8);
 }
 FUNC_4(VAR_9);

 return VAR_7 | (VAR_8 << 8);
}
