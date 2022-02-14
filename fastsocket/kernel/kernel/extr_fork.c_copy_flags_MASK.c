
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned long flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct task_struct*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_3, struct task_struct *VAR_4)
{
 unsigned long VAR_5 = VAR_4->flags;

 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_0;
 VAR_5 |= VAR_1;
 VAR_4->flags = VAR_5;
 FUNC_0(VAR_4);
}
