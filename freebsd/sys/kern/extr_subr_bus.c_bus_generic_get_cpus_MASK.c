
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum cpu_sets { ____Placeholder_cpu_sets } cpu_sets ;
typedef TYPE_1__* device_t ;
typedef int cpuset_t ;
struct TYPE_5__ {int * parent; } ;


 int FUNC_0 (int *,TYPE_1__*,int,size_t,int *) ;
 int VAR_0 ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, enum cpu_sets VAR_3,
    size_t VAR_4, cpuset_t *VAR_5)
{


 if (VAR_1->parent != ((void*)0))
  return (FUNC_0(VAR_1->parent, VAR_2, VAR_3, VAR_4, VAR_5));
 return (VAR_0);
}
