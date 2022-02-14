
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct xaddr {int af; int * addr32; TYPE_1__ v4; } ;





__attribute__((used)) static int
FUNC_0(struct xaddr *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return (-1);

 switch (VAR_0->af) {
 case 129:
  VAR_0->v4.s_addr = ~VAR_0->v4.s_addr;
  return (0);
 case 128:
  for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
   VAR_0->addr32[VAR_1] = ~VAR_0->addr32[VAR_1];
  return (0);
 default:
  return (-1);
 }
}
