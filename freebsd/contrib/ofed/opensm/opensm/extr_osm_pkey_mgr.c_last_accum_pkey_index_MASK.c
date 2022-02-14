
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int last_pkey_idx; } ;
typedef TYPE_1__ osm_pkey_tbl_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(osm_pkey_tbl_t * VAR_1,
     uint16_t * VAR_2,
     uint8_t * VAR_3)
{
 if (VAR_1->last_pkey_idx) {
  *VAR_2 = (VAR_1->last_pkey_idx - 1) / VAR_0;
  *VAR_3 = (VAR_1->last_pkey_idx - 1) % VAR_0;
  return 1;
 }

 return 0;
}
