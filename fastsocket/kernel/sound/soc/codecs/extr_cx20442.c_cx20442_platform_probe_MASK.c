
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int * dev; scalar_t__ pop_time; int * hw_write; int * control_data; } ;
struct platform_device {int dev; } ;
struct cx20442_priv {struct snd_soc_codec codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx20442_priv*) ;
 struct cx20442_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (struct platform_device*,struct cx20442_priv*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct cx20442_priv *VAR_3;
 struct snd_soc_codec *VAR_4;

 VAR_3 = FUNC_1(sizeof(struct cx20442_priv), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_4 = &VAR_3->codec;

 VAR_4->control_data = ((void*)0);
 VAR_4->hw_write = ((void*)0);
 VAR_4->pop_time = 0;

 VAR_4->dev = &VAR_2->dev;
 FUNC_2(VAR_2, VAR_3);

 return FUNC_0(VAR_3);
}
