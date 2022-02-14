
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_jack {TYPE_2__* input_dev; int registered; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct snd_jack *VAR_0, struct device *VAR_1)
{
 FUNC_0(VAR_0->registered);

 VAR_0->input_dev->dev.parent = VAR_1;
}
