
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9aclc_soc_device {int dummy; } ;
struct txx9aclc_plat_drvdata {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct txx9aclc_plat_drvdata* FUNC_1 (struct txx9aclc_soc_device*) ;

__attribute__((used)) static int FUNC_2(struct txx9aclc_soc_device *VAR_2)
{
 struct txx9aclc_plat_drvdata *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3->base + VAR_0) & VAR_1;
}
