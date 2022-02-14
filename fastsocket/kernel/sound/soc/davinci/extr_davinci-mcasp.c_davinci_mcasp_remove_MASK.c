
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_platform_data {size_t op_mode; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_4__ {struct snd_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct davinci_audio_dev {int * clk; } ;
struct TYPE_5__ {struct davinci_audio_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct davinci_audio_dev*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct snd_platform_data *VAR_3 = VAR_2->dev.platform_data;
 struct davinci_audio_dev *VAR_4;
 struct resource *VAR_5;

 FUNC_5(&VAR_1[VAR_3->op_mode]);
 VAR_4 = VAR_1[VAR_3->op_mode].private_data;
 FUNC_0(VAR_4->clk);
 FUNC_1(VAR_4->clk);
 VAR_4->clk = ((void*)0);

 VAR_5 = FUNC_3(VAR_2, VAR_0, 0);
 FUNC_4(VAR_5->start, (VAR_5->end - VAR_5->start) + 1);

 FUNC_2(VAR_4);

 return 0;
}
