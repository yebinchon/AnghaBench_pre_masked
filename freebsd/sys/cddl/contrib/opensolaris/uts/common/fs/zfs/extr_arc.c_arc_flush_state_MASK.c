
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int boolean_t ;
struct TYPE_4__ {int * arcs_esize; } ;
typedef TYPE_1__ arc_state_t ;
typedef size_t arc_buf_contents_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,size_t) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static uint64_t
FUNC_2(arc_state_t *VAR_1, uint64_t VAR_2, arc_buf_contents_t VAR_3,
    boolean_t VAR_4)
{
 uint64_t VAR_5 = 0;

 while (FUNC_1(&VAR_1->arcs_esize[VAR_3]) != 0) {
  VAR_5 += FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);

  if (!VAR_4)
   break;
 }

 return (VAR_5);
}
