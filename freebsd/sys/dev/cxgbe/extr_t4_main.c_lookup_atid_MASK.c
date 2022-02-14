
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {TYPE_1__* atid_tab; } ;
struct adapter {struct tid_info tids; } ;
struct TYPE_2__ {void* data; } ;



void *
FUNC_0(struct adapter *VAR_0, int VAR_1)
{
 struct tid_info *VAR_2 = &VAR_0->tids;

 return (VAR_2->atid_tab[VAR_1].data);
}
