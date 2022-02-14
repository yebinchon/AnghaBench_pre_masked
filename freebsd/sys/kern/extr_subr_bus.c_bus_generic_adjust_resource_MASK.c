
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef TYPE_1__* device_t ;
struct TYPE_5__ {scalar_t__ parent; } ;


 int FUNC_0 (scalar_t__,TYPE_1__*,int,struct resource*,int ,int ) ;
 int VAR_0 ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3,
    struct resource *VAR_4, rman_res_t VAR_5, rman_res_t VAR_6)
{

 if (VAR_1->parent)
  return (FUNC_0(VAR_1->parent, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6));
 return (VAR_0);
}
