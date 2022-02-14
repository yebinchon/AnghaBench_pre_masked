
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct ad1816_info {int dummy; } ;







 int FUNC_0 (struct ad1816_info*) ;
 int FUNC_1 (struct ad1816_info*,int) ;
 int FUNC_2 (struct ad1816_info*) ;
 int FUNC_3 (struct ad1816_info*,int,int) ;
 struct ad1816_info* FUNC_4 (struct snd_mixer*) ;

__attribute__((used)) static u_int32_t
FUNC_5(struct snd_mixer *VAR_0, u_int32_t VAR_1)
{
 struct ad1816_info *VAR_2 = FUNC_4(VAR_0);
     int VAR_3;

     switch (VAR_1) {
     case 131:
     case 129:
  VAR_3 = 0x00;
  break;

     case 132:
     case 130:
  VAR_3 = 0x20;
  break;

     case 128:
     default:
  VAR_3 = 0x50;
  VAR_1 = 128;
     }

     VAR_3 |= VAR_3 << 8;
 FUNC_0(VAR_2);
     FUNC_3(VAR_2, 20, (FUNC_1(VAR_2, 20) & ~0x7070) | VAR_3);
 FUNC_2(VAR_2);
     return VAR_1;
}
