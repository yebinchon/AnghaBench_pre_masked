
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_buffer_per_cpu {struct buffer_page* head_page; struct list_head* pages; } ;
struct list_head {TYPE_1__* prev; } ;
struct TYPE_4__ {int prev; } ;
struct buffer_page {TYPE_2__ list; } ;
struct TYPE_3__ {int next; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 int FUNC_1 (struct ring_buffer_per_cpu*,struct buffer_page**) ;
 scalar_t__ FUNC_2 (struct ring_buffer_per_cpu*,struct buffer_page*,int ) ;
 struct list_head* FUNC_3 (int ) ;

__attribute__((used)) static struct buffer_page *
FUNC_4(struct ring_buffer_per_cpu *VAR_0)
{
 struct buffer_page *VAR_1;
 struct buffer_page *VAR_2;
 struct list_head *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_0, !VAR_0->head_page))
  return ((void*)0);


 VAR_3 = VAR_0->pages;
 if (FUNC_0(VAR_0, FUNC_3(VAR_3->prev->next) != VAR_3))
  return ((void*)0);

 VAR_2 = VAR_1 = VAR_0->head_page;






 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  do {
   if (FUNC_2(VAR_0, VAR_2, VAR_2->list.prev)) {
    VAR_0->head_page = VAR_2;
    return VAR_2;
   }
   FUNC_1(VAR_0, &VAR_2);
  } while (VAR_2 != VAR_1);
 }

 FUNC_0(VAR_0, 1);

 return ((void*)0);
}
