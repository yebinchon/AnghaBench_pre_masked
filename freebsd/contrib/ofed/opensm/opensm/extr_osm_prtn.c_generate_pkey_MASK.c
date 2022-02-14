
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int prtn_pkey_tbl; } ;
typedef TYPE_1__ osm_subn_t ;
typedef int cl_qmap_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static uint16_t FUNC_4(osm_subn_t * VAR_2)
{
 uint16_t VAR_3;

 cl_qmap_t *VAR_4 = &VAR_2->prtn_pkey_tbl;
 while (VAR_1 < FUNC_1(VAR_0) - 1) {
  VAR_3 = ++VAR_1;
  VAR_3 = FUNC_0(VAR_3);
  if (FUNC_3(VAR_4, VAR_3) == FUNC_2(VAR_4))
   return VAR_3;
 }
 return 0;
}
