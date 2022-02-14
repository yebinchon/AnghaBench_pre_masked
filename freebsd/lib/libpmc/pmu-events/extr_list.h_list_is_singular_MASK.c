
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {scalar_t__ next; scalar_t__ prev; } ;


 int FUNC_0 (struct list_head const*) ;

__attribute__((used)) static inline int FUNC_1(const struct list_head *VAR_0)
{
 return !FUNC_0(VAR_0) && (VAR_0->next == VAR_0->prev);
}
