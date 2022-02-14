
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int new_blocks; } ;
typedef TYPE_1__ osm_pkey_tbl_t ;
struct TYPE_7__ {scalar_t__* pkey_entry; } ;
typedef TYPE_2__ ib_pkey_table_t ;
typedef scalar_t__ ib_net16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(osm_pkey_tbl_t * VAR_1, ib_net16_t VAR_2)
{
 uint16_t VAR_3;
 uint16_t VAR_4;
 ib_pkey_table_t *VAR_5;
 uint16_t VAR_6;

 VAR_3 = (uint16_t) FUNC_0(&VAR_1->new_blocks);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_1(VAR_1, VAR_4);
  if (!VAR_5)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_0;
       VAR_6++) {
   if (VAR_5->pkey_entry[VAR_6] == VAR_2)
    return 1;
  }
 }
 return 0;
}
