
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_debug_entry {scalar_t__ ptr; } ;
typedef int ev_uintptr_t ;



__attribute__((used)) static inline unsigned
FUNC_0(const struct event_debug_entry *VAR_0)
{




 unsigned VAR_1 = (unsigned) ((ev_uintptr_t) VAR_0->ptr);



 return (VAR_1 >> 6);
}
