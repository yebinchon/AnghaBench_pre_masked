
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int ,int,int*,int ,int ,int ,int ) ;
 struct resource_list* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct resource* FUNC_3 (struct resource_list*,int ,int ,int,int*,int ,int ,int ,int ) ;

struct resource *
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2,
    int *VAR_3, rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, u_int VAR_7)
{
 struct resource_list * VAR_8 = ((void*)0);

 if (FUNC_2(VAR_1) != VAR_0)
  return (FUNC_0(FUNC_2(VAR_0), VAR_1,
      VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));

 VAR_8 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_8)
  return (((void*)0));

 return (FUNC_3(VAR_8, VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7));
}
