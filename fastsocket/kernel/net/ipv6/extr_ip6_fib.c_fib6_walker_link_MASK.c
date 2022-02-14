
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_walker_t {struct fib6_walker_t* next; struct fib6_walker_t* prev; } ;


 struct fib6_walker_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct fib6_walker_t *VAR_2)
{
 FUNC_0(&VAR_1);
 VAR_2->next = VAR_0.next;
 VAR_2->prev = &VAR_0;
 VAR_2->next->prev = VAR_2;
 VAR_2->prev->next = VAR_2;
 FUNC_1(&VAR_1);
}
