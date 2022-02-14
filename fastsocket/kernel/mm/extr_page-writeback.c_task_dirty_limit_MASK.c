
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct task_struct {int dummy; } ;


 int FUNC_0 (long,long) ;
 int FUNC_1 (struct task_struct*,long*,long*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0, unsigned long *VAR_1)
{
 long VAR_2, VAR_3;
 unsigned long VAR_4 = *VAR_1;
 u64 VAR_5 = VAR_4 >> 3;

 FUNC_1(VAR_0, &VAR_2, &VAR_3);
 VAR_5 *= VAR_2;
 FUNC_0(VAR_5, VAR_3);

 VAR_4 -= VAR_5;
 if (VAR_4 < *VAR_1/2)
  VAR_4 = *VAR_1/2;

 *VAR_1 = VAR_4;
}
