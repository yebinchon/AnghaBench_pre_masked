
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int dummy; } ;
struct list_head {int next; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ring_buffer_per_cpu *VAR_2,
    struct list_head *VAR_3)
{
 unsigned long *VAR_4;

 VAR_4 = (unsigned long *)&VAR_3->next;
 *VAR_4 |= VAR_0;
 *VAR_4 &= ~VAR_1;
}
