
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct ess_info {int dummy; } ;
 int FUNC_0 (struct ess_info*,int,int) ;
 struct ess_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
     struct ess_info *VAR_4 = FUNC_1(VAR_0);
     int VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;

 VAR_7 = (VAR_2 * 15) / 100;
 VAR_8 = (VAR_3 * 15) / 100;
 switch (VAR_1) {
 case 129:
  VAR_5 = 0x36;
  VAR_6 = 0x6b;
  break;

 case 131:
  VAR_5 = 0x14;
  VAR_6 = 0x7c;
  break;

 case 134:
  VAR_5 = 0x3e;
  VAR_6 = 0x6e;
  break;

 case 132:
  VAR_5 = 0x1a;
  VAR_6 = 0x68;
  break;

 case 133:
  VAR_5 = 0x3a;
  VAR_6 = 0x6c;
  break;

 case 135:
  VAR_5 = 0x38;
  VAR_6 = 0x6a;
  break;

 case 130:
  VAR_5 = 0x3c;
  break;

  case 128:
  VAR_7 = VAR_2? (VAR_2 * 63) / 100 : 64;
  VAR_8 = VAR_3? (VAR_3 * 63) / 100 : 64;
  FUNC_0(VAR_4, 0x60, VAR_7);
  FUNC_0(VAR_4, 0x62, VAR_8);
  VAR_2 = (VAR_7 == 64)? 0 : (VAR_7 * 100) / 63;
  VAR_3 = (VAR_8 == 64)? 0 : (VAR_8 * 100) / 63;
      return VAR_2 | (VAR_3 << 8);
 }

 if (VAR_5)
  FUNC_0(VAR_4, VAR_5, (VAR_7 << 4) | VAR_8);
 if (VAR_6)
  FUNC_0(VAR_4, VAR_6, (VAR_7 << 4) | VAR_8);

 VAR_2 = (VAR_7 * 100) / 15;
 VAR_3 = (VAR_8 * 100) / 15;

     return VAR_2 | (VAR_3 << 8);
}
