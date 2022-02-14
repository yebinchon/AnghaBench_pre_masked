
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int data; } ;
typedef void cpu_workqueue_struct ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline
struct cpu_workqueue_struct *FUNC_1(struct work_struct *VAR_1)
{
 return (void *) (FUNC_0(&VAR_1->data) & VAR_0);
}
