
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int data; } ;
struct cpu_workqueue_struct {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long* FUNC_2 (struct work_struct*) ;
 int FUNC_3 (struct work_struct*) ;

__attribute__((used)) static inline void FUNC_4(struct work_struct *VAR_2,
    struct cpu_workqueue_struct *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(!FUNC_3(VAR_2));

 VAR_4 = (unsigned long) VAR_3 | (1UL << VAR_1);
 VAR_4 |= VAR_0 & *FUNC_2(VAR_2);
 FUNC_1(&VAR_2->data, VAR_4);
}
