
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_3__ {int tgt_data; int is_vport; int * ocs; } ;
typedef TYPE_1__ ocs_sport_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int ) ;

int32_t
FUNC_1(ocs_sport_t *VAR_0)
{
 ocs_t *VAR_1 = VAR_0->ocs;

 if(!VAR_0->is_vport) {
  VAR_0->tgt_data = FUNC_0(VAR_1, 0);
 }

 return 0;
}
