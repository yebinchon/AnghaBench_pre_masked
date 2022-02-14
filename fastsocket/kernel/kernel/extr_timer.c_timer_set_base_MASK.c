
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tvec_base {int dummy; } ;
struct timer_list {struct tvec_base* base; } ;


 unsigned long FUNC_0 (struct tvec_base*) ;

__attribute__((used)) static inline void
FUNC_1(struct timer_list *VAR_0, struct tvec_base *VAR_1)
{
 VAR_0->base = (struct tvec_base *)((unsigned long)(VAR_1) |
          FUNC_0(VAR_0->base));
}
