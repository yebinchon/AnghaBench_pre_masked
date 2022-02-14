
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_debug_entry {scalar_t__ ptr; } ;



__attribute__((used)) static inline int
FUNC_0(const struct event_debug_entry *VAR_0,
    const struct event_debug_entry *VAR_1)
{
 return VAR_0->ptr == VAR_1->ptr;
}
