
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sc_info {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;
 struct sc_info* FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (struct snd_mixer*,int ) ;
 int FUNC_4 (struct snd_mixer*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct snd_mixer *VAR_3)
{
 struct sc_info *VAR_4 = FUNC_2(VAR_3);




 if (VAR_4 == ((void*)0))
  return -1;


 FUNC_5(VAR_4->lock);
 FUNC_1(VAR_4, VAR_2, 0x30, 1);

 FUNC_3(VAR_3, VAR_0);
 FUNC_4(VAR_3, VAR_1);
 FUNC_6(VAR_4->lock);

 return 0;
}
