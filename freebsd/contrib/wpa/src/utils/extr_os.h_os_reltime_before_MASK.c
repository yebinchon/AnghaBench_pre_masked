
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_reltime {scalar_t__ sec; scalar_t__ usec; } ;



__attribute__((used)) static inline int FUNC_0(struct os_reltime *VAR_0,
        struct os_reltime *VAR_1)
{
 return (VAR_0->sec < VAR_1->sec) ||
        (VAR_0->sec == VAR_1->sec && VAR_0->usec < VAR_1->usec);
}
