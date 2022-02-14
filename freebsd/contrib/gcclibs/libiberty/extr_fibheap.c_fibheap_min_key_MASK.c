
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fibheapkey_t ;
typedef TYPE_2__* fibheap_t ;
struct TYPE_5__ {TYPE_1__* min; } ;
struct TYPE_4__ {int key; } ;



fibheapkey_t
FUNC_0 (fibheap_t VAR_0)
{

  if (VAR_0->min == ((void*)0))
    return 0;
  return VAR_0->min->key;
}
