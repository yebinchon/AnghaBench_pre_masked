
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ state; TYPE_2__** hw_eq; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int int32_t ;
struct TYPE_7__ {int use_count; } ;
typedef TYPE_2__ hw_eq_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,size_t) ;

int32_t
FUNC_3(ocs_hw_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 hw_eq_t *VAR_4;
 int32_t VAR_5 = 0;

 FUNC_0("");
 if (VAR_1->state == VAR_0) {
  return 0;
 }


 VAR_4 = VAR_1->hw_eq[VAR_2];

 FUNC_1(VAR_4->use_count++);

 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_3);

 return VAR_5;
}
