
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tvec_base {int dummy; } ;
struct timer_list {struct tvec_base* base; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct timer_list *VAR_1)
{
 VAR_1->base = ((struct tvec_base *)((unsigned long)(VAR_1->base) |
           VAR_0));
}
