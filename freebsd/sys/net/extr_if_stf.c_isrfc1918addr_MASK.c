
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct in_addr *VAR_1)
{




 if (VAR_0 == 0 && (
     (FUNC_0(VAR_1->s_addr) & 0xff000000) >> 24 == 10 ||
     (FUNC_0(VAR_1->s_addr) & 0xfff00000) >> 16 == 172 * 256 + 16 ||
     (FUNC_0(VAR_1->s_addr) & 0xffff0000) >> 16 == 192 * 256 + 168))
  return 1;

 return 0;
}
