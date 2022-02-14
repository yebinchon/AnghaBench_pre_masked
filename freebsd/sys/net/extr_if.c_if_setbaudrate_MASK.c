
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ifnet {int if_baudrate; } ;



uint64_t
FUNC_0(struct ifnet *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = VAR_0->if_baudrate;
 VAR_0->if_baudrate = VAR_1;
 return (VAR_2);
}
