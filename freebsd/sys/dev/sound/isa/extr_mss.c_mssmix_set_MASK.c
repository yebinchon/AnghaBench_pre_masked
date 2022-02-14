
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct mss_info {int dummy; } ;


 struct mss_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct mss_info*) ;
 int FUNC_2 (struct mss_info*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (struct mss_info*) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct mss_info *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_4);
 FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_4);

 return VAR_2 | (VAR_3 << 8);
}
