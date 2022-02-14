
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_elem {int dummy; } ;
struct list_set {int dsize; scalar_t__ members; } ;



__attribute__((used)) static inline struct set_elem *
FUNC_0(const struct list_set *VAR_0, u32 VAR_1)
{
 return (struct set_elem *)((void *)VAR_0->members + VAR_1 * VAR_0->dsize);
}
