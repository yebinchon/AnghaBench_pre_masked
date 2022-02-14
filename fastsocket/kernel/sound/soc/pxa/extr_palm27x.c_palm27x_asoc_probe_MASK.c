
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_9__ dev; } ;
struct palm27x_asoc_info {int jack_gpio; } ;
struct TYPE_12__ {int gpio; } ;
struct TYPE_11__ {int * dev; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*,char*) ;
 TYPE_8__* VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 int VAR_6;

 if (!(FUNC_4() || FUNC_2() ||
  FUNC_1() || FUNC_3()))
  return -VAR_0;

 if (!VAR_5->dev.platform_data) {
  FUNC_0(&VAR_5->dev, "please supply platform_data\n");
  return -VAR_0;
 }

 VAR_2[0].gpio = ((struct palm27x_asoc_info *)
   (VAR_5->dev.platform_data))->jack_gpio;

 VAR_4 = FUNC_6("soc-audio", -1);
 if (!VAR_4)
  return -VAR_1;

 FUNC_8(VAR_4, &VAR_3);
 VAR_3.dev = &VAR_4->dev;
 VAR_6 = FUNC_5(VAR_4);

 if (VAR_6 != 0)
  goto put_device;

 return 0;

put_device:
 FUNC_7(VAR_4);

 return VAR_6;
}
