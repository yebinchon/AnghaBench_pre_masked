
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef TYPE_1__* device_t ;
struct TYPE_5__ {scalar_t__ parent; } ;


 struct resource* FUNC_0 (scalar_t__,TYPE_1__*,int,int*,int ,int ,int ,int ) ;

struct resource *
FUNC_1(device_t VAR_0, device_t VAR_1, int VAR_2, int *VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, u_int VAR_7)
{

 if (VAR_0->parent)
  return (FUNC_0(VAR_0->parent, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6, VAR_7));
 return (((void*)0));
}
