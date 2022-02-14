
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8523_priv {int supplies; int * reg_cache; } ;
struct snd_soc_codec {int bias_level; int dev; struct wm8523_priv* private_data; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ,int) ;
 int FUNC_6 (struct snd_soc_codec*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_codec *VAR_4,
     enum snd_soc_bias_level VAR_5)
{
 struct wm8523_priv *VAR_6 = VAR_4->private_data;
 int VAR_7, VAR_8;

 switch (VAR_5) {
 case 130:
  break;

 case 129:

  FUNC_5(VAR_4, VAR_2,
        VAR_3, 3);
  break;

 case 128:
  if (VAR_4->bias_level == 131) {
   VAR_7 = FUNC_4(FUNC_0(VAR_6->supplies),
          VAR_6->supplies);
   if (VAR_7 != 0) {
    FUNC_1(VAR_4->dev,
     "Failed to enable supplies: %d\n",
     VAR_7);
    return VAR_7;
   }


   FUNC_5(VAR_4, VAR_2,
         VAR_3, 1);


   for (VAR_8 = VAR_0;
        VAR_8 < VAR_1; VAR_8++)
    FUNC_6(VAR_4, VAR_8, VAR_6->reg_cache[VAR_8]);


   FUNC_2(100);
  }


  FUNC_5(VAR_4, VAR_2,
        VAR_3, 2);

  break;

 case 131:

  FUNC_5(VAR_4, VAR_2,
        VAR_3, 0);
  FUNC_2(100);

  FUNC_3(FUNC_0(VAR_6->supplies),
           VAR_6->supplies);
  break;
 }
 VAR_4->bias_level = VAR_5;
 return 0;
}
