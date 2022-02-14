
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_9__ {int * dev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 int VAR_5;

 if (!FUNC_1())
  return -VAR_0;

 FUNC_0(&VAR_4->dev, "Be warned that incorrect mixers/muxes setup will"
   "lead to overheating and possible destruction of your device."
   "Do not use without a good knowledge of mio's board design!\n");

 VAR_3 = FUNC_3("soc-audio", -1);
 if (!VAR_3)
  return -VAR_1;

 FUNC_5(VAR_3, &VAR_2);
 VAR_2.dev = &VAR_3->dev;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return 0;

 FUNC_4(VAR_3);
 return VAR_5;
}
