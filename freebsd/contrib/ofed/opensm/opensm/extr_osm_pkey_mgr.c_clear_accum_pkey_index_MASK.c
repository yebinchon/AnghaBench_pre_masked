
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef uintptr_t uint16_t ;
struct TYPE_4__ {uintptr_t last_pkey_idx; int accum_pkeys; } ;
typedef TYPE_1__ osm_pkey_tbl_t ;
typedef scalar_t__ cl_map_iterator_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(osm_pkey_tbl_t * VAR_0,
       uint16_t VAR_1)
{
 uint16_t VAR_2, VAR_3;
 void *VAR_4;
 uintptr_t VAR_5;
 cl_map_iterator_t VAR_6, VAR_7;

 VAR_6 = FUNC_2(&VAR_0->accum_pkeys);

 VAR_2 = VAR_1 + 1;

 while (VAR_6 != FUNC_1(&VAR_0->accum_pkeys)) {
  VAR_7 = FUNC_3(VAR_6);
  VAR_4 = (uint16_t *) FUNC_4(VAR_6);
  FUNC_0(VAR_4);
  VAR_5 = (uintptr_t) VAR_4;
  VAR_3 = VAR_5;
  if (VAR_3 == VAR_2) {
   FUNC_5(&VAR_0->accum_pkeys, VAR_6);
   if (VAR_0->last_pkey_idx == VAR_3)
    FUNC_6(VAR_0);
   break;
  }
  VAR_6 = VAR_7;
 }
}
