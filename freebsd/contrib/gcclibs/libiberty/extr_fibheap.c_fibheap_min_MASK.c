
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* fibheap_t ;
struct TYPE_5__ {TYPE_1__* min; } ;
struct TYPE_4__ {void* data; } ;



void *
FUNC_0 (fibheap_t VAR_0)
{

  if (VAR_0->min == ((void*)0))
    return ((void*)0);
  return VAR_0->min->data;
}
