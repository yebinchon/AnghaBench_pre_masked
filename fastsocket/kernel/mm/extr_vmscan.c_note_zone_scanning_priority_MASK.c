
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int prev_priority; } ;



__attribute__((used)) static inline void FUNC_0(struct zone *VAR_0, int VAR_1)
{
 if (VAR_1 < VAR_0->prev_priority)
  VAR_0->prev_priority = VAR_1;
}
