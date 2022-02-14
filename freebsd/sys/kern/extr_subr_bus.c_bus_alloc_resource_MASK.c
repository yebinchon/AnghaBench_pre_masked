
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef TYPE_1__* device_t ;
struct TYPE_4__ {int * parent; } ;


 struct resource* FUNC_0 (int *,TYPE_1__*,int,int*,int ,int ,int ,int ) ;

struct resource *
FUNC_1(device_t VAR_0, int VAR_1, int *VAR_2, rman_res_t VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5, u_int VAR_6)
{
 struct resource *VAR_7;

 if (VAR_0->parent == ((void*)0))
  return (((void*)0));
 VAR_7 = FUNC_0(VAR_0->parent, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6);
 return (VAR_7);
}
