
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sb_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (struct snd_mixer*,int) ;
 int FUNC_2 (struct snd_mixer*,int ) ;
 int FUNC_3 (struct sb_info*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_4)
{
     struct sb_info *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_4, VAR_2 | VAR_1 | VAR_0 | VAR_3);

 FUNC_2(VAR_4, 0);

 FUNC_3(VAR_5, 0, 1);

     return 0;
}
