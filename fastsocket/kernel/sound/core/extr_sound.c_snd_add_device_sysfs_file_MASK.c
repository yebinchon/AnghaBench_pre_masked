
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct device_attribute*) ;
 int FUNC_1 (int,struct snd_card*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

int FUNC_4(int VAR_3, struct snd_card *VAR_4, int VAR_5,
         struct device_attribute *VAR_6)
{
 int VAR_7, VAR_8 = -VAR_0;
 struct device *VAR_9;

 FUNC_2(&VAR_2);
 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_7 >= 0 && (VAR_9 = VAR_1[VAR_7]->dev) != ((void*)0))
  VAR_8 = FUNC_0(VAR_9, VAR_6);
 FUNC_3(&VAR_2);
 return VAR_8;

}
