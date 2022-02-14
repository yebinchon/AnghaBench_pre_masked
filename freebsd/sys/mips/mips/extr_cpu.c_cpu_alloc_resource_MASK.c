
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static struct resource *
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
     rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct resource *VAR_10;

 if (VAR_4 != VAR_0)
  return (((void*)0));
 VAR_10 = FUNC_0(&VAR_1, VAR_6, VAR_7, VAR_8, 0,
        VAR_3);
 return (VAR_10);
}
