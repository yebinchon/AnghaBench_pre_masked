
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct futex_queue {int fq_list; } ;
typedef int cloudabi_tid_t ;
struct TYPE_2__ {int fw_tid; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static cloudabi_tid_t
FUNC_1(const struct futex_queue *VAR_0)
{

 return (FUNC_0(&VAR_0->fq_list)->fw_tid);
}
