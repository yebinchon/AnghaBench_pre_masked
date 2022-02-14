
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef TYPE_1__* device_t ;
struct TYPE_4__ {int * parent; } ;


 int FUNC_0 (int *,TYPE_1__*,struct resource*) ;
 int VAR_0 ;

int
FUNC_1(device_t VAR_1, struct resource *VAR_2)
{
 if (VAR_1->parent == ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_1->parent, VAR_1, VAR_2));
}
