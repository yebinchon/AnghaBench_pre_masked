
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int next; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0(struct list_head *VAR_1)
{
 unsigned long *VAR_2 = (unsigned long *)&VAR_1->next;

 *VAR_2 &= ~VAR_0;
}
