
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unrhdr {int alloc; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static __inline void *
FUNC_1(struct unrhdr *VAR_0, void **VAR_1, void **VAR_2)
{
 void *VAR_3;

 VAR_0->alloc++;
 FUNC_0(*VAR_1 != ((void*)0) || *VAR_2 != ((void*)0), ("Out of cached memory"));
 if (*VAR_1 != ((void*)0)) {
  VAR_3 = *VAR_1;
  *VAR_1 = ((void*)0);
  return (VAR_3);
 } else {
  VAR_3 = *VAR_2;
  *VAR_2 = ((void*)0);
  return (VAR_3);
 }
}
