
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;



 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *,char*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct device *VAR_4 = VAR_3;
 int VAR_5;

 if (VAR_0)
  return 0;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 == 0)
   break;
  FUNC_1(VAR_4, ((void*)0), "DMA-API: device driver has pending "
    "DMA allocations while released from device "
    "[count=%d]\n", VAR_5);
  break;
 default:
  break;
 }

 return 0;
}
