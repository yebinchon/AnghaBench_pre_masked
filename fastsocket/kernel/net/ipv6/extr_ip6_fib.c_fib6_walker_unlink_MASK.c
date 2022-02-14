
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_walker_t {struct fib6_walker_t* next; struct fib6_walker_t* prev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct fib6_walker_t *VAR_1)
{
 FUNC_0(&VAR_0);
 VAR_1->next->prev = VAR_1->prev;
 VAR_1->prev->next = VAR_1->next;
 VAR_1->prev = VAR_1->next = VAR_1;
 FUNC_1(&VAR_0);
}
