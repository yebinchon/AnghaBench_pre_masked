
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct sc_info {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;
 struct sc_info* FUNC_2 (struct snd_mixer*) ;
 int FUNC_3 (struct snd_mixer*,int ) ;
 int FUNC_4 (struct snd_mixer*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct snd_mixer *VAR_4)
{
 struct sc_info *VAR_5 = FUNC_2(VAR_4);




 if (VAR_5 == ((void*)0))
  return -1;


 FUNC_7(VAR_5->lock);




 FUNC_6(VAR_5->dev, FUNC_5(VAR_5->dev) | VAR_3);

 FUNC_3(VAR_4, VAR_0);
 FUNC_4(VAR_4, VAR_1);

 FUNC_8(VAR_5->lock);

 return 0;
}
