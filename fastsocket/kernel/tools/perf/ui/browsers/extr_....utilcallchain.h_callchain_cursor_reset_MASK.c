
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_cursor {int first; int * last; scalar_t__ nr; } ;



__attribute__((used)) static inline void FUNC_0(struct callchain_cursor *VAR_0)
{
 VAR_0->nr = 0;
 VAR_0->last = &VAR_0->first;
}
