
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct xaddr {int af; int scope_id; scalar_t__* addr8; TYPE_1__ v4; } ;




 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct xaddr *VAR_0, const struct xaddr *VAR_1)
{
 int VAR_2;

 if (VAR_0->af != VAR_1->af)
  return VAR_0->af == 128 ? 1 : -1;

 switch (VAR_0->af) {
 case 129:
  if (VAR_0->v4.s_addr == VAR_1->v4.s_addr)
   return 0;
  return FUNC_0(VAR_0->v4.s_addr) > FUNC_0(VAR_1->v4.s_addr) ? 1 : -1;
 case 128:
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
   if (VAR_0->addr8[VAR_2] - VAR_1->addr8[VAR_2] != 0)
    return VAR_0->addr8[VAR_2] > VAR_1->addr8[VAR_2] ? 1 : -1;
  if (VAR_0->scope_id == VAR_1->scope_id)
   return 0;
  return VAR_0->scope_id > VAR_1->scope_id ? 1 : -1;
 default:
  return -1;
 }
}
