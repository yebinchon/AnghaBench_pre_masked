
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {void* s_addr; } ;
struct xaddr {int af; int* addr32; TYPE_1__ v4; } ;




 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct xaddr*,char,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, u_int VAR_1, struct xaddr *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_0, VAR_1) != 0 || VAR_2 == ((void*)0))
  return -1;

 FUNC_2(VAR_2, '\0', sizeof(*VAR_2));
 switch (VAR_0) {
 case 129:
  VAR_2->af = 129;
  if (VAR_1 == 0)
   return 0;
  VAR_2->v4.s_addr = FUNC_0((0xffffffff << (32 - VAR_1)) & 0xffffffff);
  return 0;
 case 128:
  VAR_2->af = 128;
  for (VAR_3 = 0; VAR_3 < 4 && VAR_1 >= 32; VAR_3++, VAR_1 -= 32)
   VAR_2->addr32[VAR_3] = 0xffffffffU;
  if (VAR_3 < 4 && VAR_1 != 0)
   VAR_2->addr32[VAR_3] = FUNC_0((0xffffffff << (32 - VAR_1)) &
       0xffffffff);
  return 0;
 default:
  return -1;
 }
}
