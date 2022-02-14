
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {struct buffer_page* head_page; } ;
struct TYPE_2__ {int prev; } ;
struct buffer_page {TYPE_1__ list; } ;


 int FUNC_0 (struct ring_buffer_per_cpu*,int ) ;

__attribute__((used)) static void FUNC_1(struct ring_buffer_per_cpu *VAR_0)
{
 struct buffer_page *VAR_1;

 VAR_1 = VAR_0->head_page;
 if (!VAR_1)
  return;




 FUNC_0(VAR_0, VAR_1->list.prev);
}
