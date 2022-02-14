
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_3__ {int dds_dsize; int dds_ref_dsize; int member_0; } ;
typedef TYPE_1__ ddt_stat_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

uint64_t
FUNC_1(spa_t *VAR_0)
{
 ddt_stat_t VAR_1 = { 0 };

 FUNC_0(VAR_0, &VAR_1);
 if (VAR_1.dds_dsize == 0)
  return (100);

 return (VAR_1.dds_ref_dsize * 100 / VAR_1.dds_dsize);
}
