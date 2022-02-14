
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct resource_list*,int,int) ;

void
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3)
{
 struct resource_list * VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_4)
  return;

 FUNC_1(VAR_4, VAR_2, VAR_3);

 return;
}
