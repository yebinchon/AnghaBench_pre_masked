
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,int *,char*,void*) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, void *VAR_1)
{
 if (FUNC_1(VAR_1))
  FUNC_0(VAR_0, ((void*)0), "DMA-API: device driver maps memory from"
    "stack [addr=%p]\n", VAR_1);
}
