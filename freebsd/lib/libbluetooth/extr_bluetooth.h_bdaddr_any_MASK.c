
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* b; } ;
typedef TYPE_1__ bdaddr_t ;



__attribute__((used)) static __inline int
FUNC_0(const bdaddr_t *VAR_0)
{
 return (VAR_0->b[0] == 0 && VAR_0->b[1] == 0 && VAR_0->b[2] == 0 &&
  VAR_0->b[3] == 0 && VAR_0->b[4] == 0 && VAR_0->b[5] == 0);
}
