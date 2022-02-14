
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int dummy; } ;
struct list_head {scalar_t__ next; } ;
struct buffer_page {int list; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int inline
FUNC_0(struct ring_buffer_per_cpu *VAR_2,
  struct buffer_page *VAR_3, struct list_head *VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = (unsigned long)VAR_4->next;

 if ((VAR_5 & ~VAR_0) != (unsigned long)&VAR_3->list)
  return VAR_1;

 return VAR_5 & VAR_0;
}
