
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int size; } ;
typedef TYPE_1__ sli4_queue_t ;
struct TYPE_8__ {int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_1, int32_t VAR_2, sli4_queue_t *VAR_3)
{
 uint8_t VAR_4[VAR_0];

 if (!FUNC_1(&VAR_1->sli, VAR_3, VAR_4)) {
  FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3->size);
 }

 return 0;
}
