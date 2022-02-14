
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct xaddr {int af; int * addr32; int scope_id; TYPE_1__ v4; } ;




 int FUNC_0 (struct xaddr*,struct xaddr const*,int) ;

__attribute__((used)) static int
FUNC_1(struct xaddr *VAR_0, const struct xaddr *VAR_1, const struct xaddr *VAR_2)
{
 int VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_1->af != VAR_2->af)
  return -1;

 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0));
 switch (VAR_1->af) {
 case 129:
  VAR_0->v4.s_addr &= VAR_2->v4.s_addr;
  return 0;
 case 128:
  VAR_0->scope_id = VAR_1->scope_id;
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   VAR_0->addr32[VAR_3] &= VAR_2->addr32[VAR_3];
  return 0;
 default:
  return -1;
 }
}
