
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct snd_mixer {int dummy; } ;
struct ess_info {int dummy; } ;






 int FUNC_0 (struct ess_info*,int,int) ;
 struct ess_info* FUNC_1 (struct snd_mixer*) ;

__attribute__((used)) static u_int32_t
FUNC_2(struct snd_mixer *VAR_0, u_int32_t VAR_1)
{
     struct ess_info *VAR_2 = FUNC_1(VAR_0);
     u_char VAR_3;

     switch (VAR_1) {
 case 131:
  VAR_3 = 0x02;
  break;

 case 129:
  VAR_3 = 0x06;
  break;

 case 130:
  VAR_3 = 0x05;
  break;

 case 128:
 default:
  VAR_3 = 0x00;
  VAR_1 = 128;
  break;
 }

 FUNC_0(VAR_2, 0x1c, VAR_3);

 return VAR_1;
}
