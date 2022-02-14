
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_5__ {scalar_t__ parent; } ;


 int FUNC_0 (scalar_t__,TYPE_1__*,int*) ;
 int VAR_0 ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int *VAR_3)
{

 if (VAR_1->parent)
  return (FUNC_0(VAR_1->parent, VAR_1, VAR_3));

 return (VAR_0);
}
