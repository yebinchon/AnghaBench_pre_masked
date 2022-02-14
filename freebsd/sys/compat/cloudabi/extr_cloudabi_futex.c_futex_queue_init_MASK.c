
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_queue {scalar_t__ fq_count; int fq_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct futex_queue *VAR_0)
{

 FUNC_0(&VAR_0->fq_list);
 VAR_0->fq_count = 0;
}
