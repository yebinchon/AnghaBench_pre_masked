
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_1)
{

 if (FUNC_0(VAR_1))
  return ("I/O Port");
 if (VAR_1 & VAR_0)
  return ("Prefetchable Memory");
 return ("Memory");
}
