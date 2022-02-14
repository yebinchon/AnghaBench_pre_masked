
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct resource_list*,int,int,scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6)
{
 struct resource_list * VAR_7 = ((void*)0);

 VAR_7 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_7)
  return (VAR_0);

 FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5, (VAR_5 + VAR_6 - 1), VAR_6);

 return (0);
}
