
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct memory_type {TYPE_1__* mt_percpu_alloc; } ;
struct TYPE_2__ {int mtp_memfreed; } ;



uint64_t
FUNC_0(const struct memory_type *VAR_0, int VAR_1)
{

 return (VAR_0->mt_percpu_alloc[VAR_1].mtp_memfreed);
}
