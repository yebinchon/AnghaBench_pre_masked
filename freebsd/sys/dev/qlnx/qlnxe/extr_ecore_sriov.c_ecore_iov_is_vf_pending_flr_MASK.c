
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_hwfn {TYPE_1__* pf_iov_info; } ;
struct TYPE_2__ {unsigned long long* pending_flr; } ;



bool FUNC_0(struct ecore_hwfn *VAR_0,
     u16 VAR_1)
{
 return !!(VAR_0->pf_iov_info->pending_flr[VAR_1 / 64] &
    (1ULL << (VAR_1 % 64)));
}
