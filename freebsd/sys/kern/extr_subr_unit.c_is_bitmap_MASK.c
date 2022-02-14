
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unrhdr {int dummy; } ;
struct unr {struct unrhdr* ptr; } ;



__attribute__((used)) static __inline int
FUNC_0(struct unrhdr *VAR_0, struct unr *VAR_1)
{
 return (VAR_1->ptr != VAR_0 && VAR_1->ptr != ((void*)0));
}
