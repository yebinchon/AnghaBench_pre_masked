
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef scalar_t__ buf ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, size_t VAR_2, void *VAR_3)
{
 FUNC_0(VAR_2 % sizeof (uint64_t));
 for (uint64_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += sizeof (uint64_t)) {
  *(uint64_t *)((char *)(VAR_1) + VAR_4) = VAR_0;
 }
 return (0);
}
