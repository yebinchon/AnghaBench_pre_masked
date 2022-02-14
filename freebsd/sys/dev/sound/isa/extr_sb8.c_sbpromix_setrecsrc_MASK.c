
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int u_char ;
struct snd_mixer {int dummy; } ;
struct sb_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sb_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct sb_info*,int ) ;
 int FUNC_2 (struct sb_info*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_3(struct snd_mixer *VAR_4, u_int32_t VAR_5)
{
     struct sb_info *VAR_6 = FUNC_0(VAR_4);
     u_char VAR_7;

 if (VAR_5 == VAR_2)
  VAR_7 = 0x06;
 else if (VAR_5 == VAR_1)
  VAR_7 = 0x02;
 else {
      VAR_5 = VAR_3;
      VAR_7 = 0;
 }
 FUNC_2(VAR_6, VAR_0, VAR_7 | (FUNC_1(VAR_6, VAR_0) & ~0x07));

 return VAR_5;
}
