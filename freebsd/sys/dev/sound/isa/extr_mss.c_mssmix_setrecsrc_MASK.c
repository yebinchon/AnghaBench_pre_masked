
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_mixer {int dummy; } ;
struct mss_info {int dummy; } ;


 struct mss_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct mss_info*) ;
 int FUNC_2 (struct mss_info*,int ) ;
 int FUNC_3 (struct mss_info*) ;

__attribute__((used)) static u_int32_t
FUNC_4(struct snd_mixer *VAR_0, u_int32_t VAR_1)
{
 struct mss_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2);
 VAR_1 = FUNC_2(VAR_2, VAR_1);
 FUNC_3(VAR_2);
 return VAR_1;
}
