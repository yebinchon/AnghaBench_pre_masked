
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* l_dbuf; } ;
typedef TYPE_2__ zap_leaf_t ;
typedef int zap_leaf_phys_t ;
struct TYPE_4__ {int * db_data; } ;



inline zap_leaf_phys_t *
FUNC_0(zap_leaf_t *VAR_0)
{
 return (VAR_0->l_dbuf->db_data);
}
