
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {TYPE_1__* p_sw; } ;
struct TYPE_9__ {TYPE_2__ hca_or_sw; } ;
typedef TYPE_3__ ftree_port_group_t ;
struct TYPE_7__ {scalar_t__ counter_up_changed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static inline void
FUNC_1(ftree_port_group_t ** VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = 0;
 ftree_port_group_t *VAR_5 = VAR_1[0];



 if (VAR_5->hca_or_sw.p_sw->counter_up_changed == VAR_0) {
  return;
 }



 for (VAR_3 = 0; VAR_5; VAR_3++) {

  VAR_5 = ((void*)0);

  for (VAR_4 = 1; VAR_4 < (VAR_2 - VAR_3); VAR_4++) {

   if (FUNC_0(VAR_1[VAR_4],
             VAR_1[VAR_4 - 1]) < 0) {

    VAR_5 = VAR_1[VAR_4 - 1];
    VAR_1[VAR_4 - 1] = VAR_1[VAR_4];
    VAR_1[VAR_4] = VAR_5;

   }
  }
 }



 VAR_1[0]->hca_or_sw.p_sw->counter_up_changed = VAR_0;
}
