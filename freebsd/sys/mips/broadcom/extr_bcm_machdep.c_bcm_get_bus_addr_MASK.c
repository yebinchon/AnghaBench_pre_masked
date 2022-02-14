
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int bus_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char*,long*) ;

__attribute__((used)) static bus_addr_t
FUNC_1(void)
{
 long VAR_1;

 if (FUNC_0("bhnd", 0, "maddr", &VAR_1) == 0)
  return ((u_long)VAR_1);

 return (VAR_0);
}
