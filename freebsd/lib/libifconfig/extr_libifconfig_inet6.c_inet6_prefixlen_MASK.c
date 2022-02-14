
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * __u6_addr32; } ;
struct in6_addr {TYPE_1__ __u6_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct in6_addr *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  int VAR_3 = FUNC_0(FUNC_1(VAR_0->__u6_addr.__u6_addr32[VAR_2]));
  VAR_1 += VAR_3 == 0 ? 0 : 33 - VAR_3;
  if (VAR_3 != 1) {
   break;
  }
 }
 return (VAR_1);
}
