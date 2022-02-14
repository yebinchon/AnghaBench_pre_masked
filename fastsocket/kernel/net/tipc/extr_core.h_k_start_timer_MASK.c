
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int FUNC_0 (char*,struct timer_list*,unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct timer_list*,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct timer_list *VAR_1, unsigned long VAR_2)
{
 FUNC_0("starting timer %p for %u\n", VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_0 + FUNC_2(VAR_2) + 1);
}
