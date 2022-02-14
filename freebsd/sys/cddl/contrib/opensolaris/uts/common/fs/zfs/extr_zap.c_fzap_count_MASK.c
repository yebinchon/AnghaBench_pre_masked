
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zap_num_entries_mtx; } ;
struct TYPE_7__ {TYPE_1__ zap_f; int zap_ismicro; } ;
typedef TYPE_2__ zap_t ;
typedef int uint64_t ;
struct TYPE_8__ {int zap_num_entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;

int
FUNC_4(zap_t *VAR_0, uint64_t *VAR_1)
{
 FUNC_0(!VAR_0->zap_ismicro);
 FUNC_1(&VAR_0->zap_f.zap_num_entries_mtx);
 *VAR_1 = FUNC_3(VAR_0)->zap_num_entries;
 FUNC_2(&VAR_0->zap_f.zap_num_entries_mtx);
 return (0);
}
