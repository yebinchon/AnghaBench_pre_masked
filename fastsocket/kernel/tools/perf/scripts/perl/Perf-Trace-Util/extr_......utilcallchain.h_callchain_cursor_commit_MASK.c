
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_cursor {scalar_t__ pos; int first; int curr; } ;



__attribute__((used)) static inline void FUNC_0(struct callchain_cursor *VAR_0)
{
 VAR_0->curr = VAR_0->first;
 VAR_0->pos = 0;
}
