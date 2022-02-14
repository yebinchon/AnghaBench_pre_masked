
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
 int VAR_5 ;
 int FUNC_0 (struct mss_info*,int ,int) ;
 struct mss_info* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (struct snd_mixer*,int) ;
 int FUNC_4 (struct mss_info*) ;
 int FUNC_5 (struct mss_info*) ;
 int FUNC_6 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_7(struct snd_mixer *VAR_6)
{
 struct mss_info *VAR_7 = FUNC_1(VAR_6);

 FUNC_6(VAR_6);
 FUNC_3(VAR_6, FUNC_2(VAR_6) | VAR_5 | VAR_3
          | VAR_2 | VAR_4);

 FUNC_4(VAR_7);
 FUNC_0(VAR_7, VAR_0, 7);
 FUNC_0(VAR_7, VAR_1, 7);
 FUNC_5(VAR_7);

 return 0;
}
