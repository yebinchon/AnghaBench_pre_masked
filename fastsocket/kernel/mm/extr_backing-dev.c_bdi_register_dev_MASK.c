
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct backing_dev_info*,int *,char*,int ,int ) ;

int FUNC_3(struct backing_dev_info *VAR_0, dev_t VAR_1)
{
 return FUNC_2(VAR_0, ((void*)0), "%u:%u", FUNC_0(VAR_1), FUNC_1(VAR_1));
}
