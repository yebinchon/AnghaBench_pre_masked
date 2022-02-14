
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct snd_mixer {int dummy; } ;
struct ad1816_info {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ad1816_info*) ;
 int FUNC_1 (struct ad1816_info*,int) ;
 int FUNC_2 (struct ad1816_info*) ;
 int FUNC_3 (struct ad1816_info*,int,int) ;
 struct ad1816_info* FUNC_4 (struct snd_mixer*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct snd_mixer *VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct ad1816_info *VAR_5 = FUNC_4(VAR_1);
     u_short VAR_6 = 0;


     VAR_3 = VAR_0 - (VAR_0 * VAR_3) / 100;
     VAR_4 = VAR_0 - (VAR_0 * VAR_4) / 100;

     VAR_6 = (VAR_3 << 8) | VAR_4;


     if (VAR_3 == VAR_0) VAR_6 |= 0x8000;
     if (VAR_4 == VAR_0) VAR_6 |= 0x0080;

 FUNC_0(VAR_5);
     switch (VAR_2) {
     case 128:
  FUNC_3(VAR_5, 14, VAR_6);
  break;

     case 136:
     case 133:
  FUNC_3(VAR_5, 15, VAR_6);
  break;

     case 129:
  FUNC_3(VAR_5, 16, VAR_6);
  break;

     case 130:
  FUNC_3(VAR_5, 4, VAR_6);
  break;

     case 134:
     case 132:
  FUNC_3(VAR_5, 18, VAR_6);
  break;

     case 131:
  FUNC_3(VAR_5, 19, VAR_6 & ~0xff);
  break;

     case 135:

  FUNC_3(VAR_5, 20, ((FUNC_1(VAR_5, 20) & ~0x0f0f)
        | (((VAR_0 - VAR_3) / 2) << 8)
        | ((VAR_0 - VAR_4) / 2)));
  break;

     default:
  FUNC_5("ad1816_mixer_set(): unknown device.\n");
  break;
     }
 FUNC_2(VAR_5);

     VAR_3 = ((VAR_0 - VAR_3) * 100) / VAR_0;
     VAR_4 = ((VAR_0 - VAR_4) * 100) / VAR_0;

     return VAR_3 | (VAR_4 << 8);
}
