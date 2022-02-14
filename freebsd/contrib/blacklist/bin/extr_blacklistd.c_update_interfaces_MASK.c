
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {int dummy; } ;


 int FUNC_0 (struct ifaddrs*) ;
 int FUNC_1 (struct ifaddrs**) ;
 struct ifaddrs* VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct ifaddrs *VAR_1, *VAR_2;

 if (FUNC_1(&VAR_2) == -1)
  return;

 VAR_1 = VAR_0;
 VAR_0 = VAR_2;

 if (VAR_1)
  FUNC_0(VAR_1);
}
