
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ds_dbuf; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dsl_dataset_phys_t ;
struct TYPE_4__ {int * db_data; } ;



inline dsl_dataset_phys_t *
FUNC_0(dsl_dataset_t *VAR_0)
{
 return (VAR_0->ds_dbuf->db_data);
}
