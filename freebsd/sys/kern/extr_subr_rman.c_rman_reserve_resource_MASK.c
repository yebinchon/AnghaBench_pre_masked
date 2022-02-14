
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (struct rman*,int ,int ,int ,int ,int ,int ) ;

struct resource *
FUNC_1(struct rman *VAR_0, rman_res_t VAR_1, rman_res_t VAR_2,
        rman_res_t VAR_3, u_int VAR_4, device_t VAR_5)
{

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0, VAR_4,
     VAR_5));
}
