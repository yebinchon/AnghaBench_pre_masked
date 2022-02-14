
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9aclc_plat_drvdata {scalar_t__ base; } ;
struct snd_soc_dai {int dev; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct txx9aclc_plat_drvdata* FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_2(VAR_4->dev);
 struct txx9aclc_plat_drvdata *VAR_6 = FUNC_1(VAR_5);


 FUNC_0(VAR_1, VAR_6->base + VAR_0);
 VAR_2 = ((void*)0);
}
