
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const struct in_addr *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(FUNC_1(VAR_0->s_addr));
 return (VAR_1 == 0 ? 0 : 33 - VAR_1);
}
