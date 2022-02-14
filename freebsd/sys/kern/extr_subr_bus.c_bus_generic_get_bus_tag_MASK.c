
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef int bus_space_tag_t ;
struct TYPE_5__ {int * parent; } ;


 int FUNC_0 (int *,TYPE_1__*) ;

bus_space_tag_t
FUNC_1(device_t VAR_0, device_t VAR_1)
{


 if (VAR_0->parent != ((void*)0))
  return (FUNC_0(VAR_0->parent, VAR_1));
 return ((bus_space_tag_t)0);
}
