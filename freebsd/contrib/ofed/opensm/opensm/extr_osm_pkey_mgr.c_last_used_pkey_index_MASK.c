
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_12__ {TYPE_2__* p_node; } ;
typedef TYPE_3__ osm_port_t ;
struct TYPE_13__ {scalar_t__ used_blocks; scalar_t__ max_blocks; } ;
typedef TYPE_4__ osm_pkey_tbl_t ;
struct TYPE_14__ {int * pkey_entry; } ;
typedef TYPE_5__ ib_pkey_table_t ;
struct TYPE_10__ {int partition_cap; } ;
struct TYPE_11__ {TYPE_1__ node_info; } ;


 int FUNC_0 (size_t*) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (TYPE_4__ const*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(const osm_port_t * const VAR_1,
    const osm_pkey_tbl_t * VAR_2,
    uint16_t * VAR_3)
{
 ib_pkey_table_t *VAR_4;
 uint16_t VAR_5, VAR_6 = 0;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_3(VAR_2,
      VAR_2->used_blocks - 1);
 if (!VAR_4)
  return 1;

 if (VAR_2->used_blocks == VAR_2->max_blocks)
  VAR_6 = FUNC_1(VAR_1->p_node->node_info.partition_cap) % VAR_0;
 if (VAR_6 == 0)
  VAR_6 = VAR_0;
 VAR_5 = VAR_6;
 do {
  VAR_5--;
  if (!FUNC_2(VAR_4->pkey_entry[VAR_5]))
   break;
 } while (VAR_5 != 0);

 *VAR_3 = VAR_5;
 return 0;
}
