
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef TYPE_1__* device_t ;
struct TYPE_4__ {int * parent; } ;


 int FUNC_0 (int *,TYPE_1__*,int,struct resource*,int ,int ) ;
 int VAR_0 ;

int
FUNC_1(device_t VAR_1, int VAR_2, struct resource *VAR_3, rman_res_t VAR_4,
    rman_res_t VAR_5)
{
 if (VAR_1->parent == ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_1->parent, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
