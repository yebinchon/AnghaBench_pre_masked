
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int * arcs_esize; } ;
typedef TYPE_1__ arc_state_t ;
typedef size_t arc_buf_contents_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static uint64_t
FUNC_3(arc_state_t *VAR_0, uint64_t VAR_1, int64_t VAR_2,
    arc_buf_contents_t VAR_3)
{
 int64_t VAR_4;

 if (VAR_2 > 0 && FUNC_2(&VAR_0->arcs_esize[VAR_3]) > 0) {
  VAR_4 = FUNC_0(FUNC_2(&VAR_0->arcs_esize[VAR_3]),
      VAR_2);
  return (FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3));
 }

 return (0);
}
