
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__* tn_member; } ;
typedef TYPE_1__ txg_node_t ;
struct TYPE_5__ {int tl_offset; int tl_spa; } ;
typedef TYPE_2__ txg_list_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

boolean_t
FUNC_1(txg_list_t *VAR_1, void *VAR_2, uint64_t VAR_3)
{
 int VAR_4 = VAR_3 & VAR_0;
 txg_node_t *VAR_5 = (txg_node_t *)((char *)VAR_2 + VAR_1->tl_offset);

 FUNC_0(VAR_1->tl_spa, VAR_3);
 return (VAR_5->tn_member[VAR_4] != 0);
}
