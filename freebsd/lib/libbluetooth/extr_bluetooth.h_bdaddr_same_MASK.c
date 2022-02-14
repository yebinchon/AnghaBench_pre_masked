
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* b; } ;
typedef TYPE_1__ bdaddr_t ;



__attribute__((used)) static __inline int
FUNC_0(const bdaddr_t *VAR_0, const bdaddr_t *VAR_1)
{
 return (VAR_0->b[0] == VAR_1->b[0] && VAR_0->b[1] == VAR_1->b[1] &&
  VAR_0->b[2] == VAR_1->b[2] && VAR_0->b[3] == VAR_1->b[3] &&
  VAR_0->b[4] == VAR_1->b[4] && VAR_0->b[5] == VAR_1->b[5]);
}
