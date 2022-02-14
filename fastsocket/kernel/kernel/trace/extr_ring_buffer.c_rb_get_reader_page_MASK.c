
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ring_buffer_per_cpu {int lock; struct buffer_page* reader_page; int head_page; int pages; struct buffer_page* commit_page; } ;
struct TYPE_6__ {TYPE_2__* next; int prev; } ;
struct buffer_page {scalar_t__ read; TYPE_3__ list; TYPE_1__* page; int entries; int write; } ;
struct TYPE_5__ {TYPE_3__* prev; } ;
struct TYPE_4__ {int commit; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct buffer_page*,struct buffer_page*) ;
 int FUNC_7 (struct ring_buffer_per_cpu*,int *) ;
 scalar_t__ FUNC_8 (struct buffer_page*) ;
 int FUNC_9 (struct ring_buffer_per_cpu*) ;
 struct buffer_page* FUNC_10 (struct ring_buffer_per_cpu*) ;
 int FUNC_11 (struct ring_buffer_per_cpu*,TYPE_3__*) ;

__attribute__((used)) static struct buffer_page *
FUNC_12(struct ring_buffer_per_cpu *VAR_0)
{
 struct buffer_page *VAR_1 = ((void*)0);
 unsigned long VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 FUNC_4(VAR_2);
 FUNC_1(&VAR_0->lock);

 again:






 if (FUNC_0(VAR_0, ++VAR_3 > 3)) {
  VAR_1 = ((void*)0);
  goto out;
 }

 VAR_1 = VAR_0->reader_page;


 if (VAR_0->reader_page->read < FUNC_8(VAR_1))
  goto out;


 if (FUNC_0(VAR_0,
         VAR_0->reader_page->read > FUNC_8(VAR_1)))
  goto out;


 VAR_1 = ((void*)0);
 if (VAR_0->commit_page == VAR_0->reader_page)
  goto out;




 FUNC_5(&VAR_0->reader_page->write, 0);
 FUNC_5(&VAR_0->reader_page->entries, 0);
 FUNC_5(&VAR_0->reader_page->page->commit, 0);

 spin:



 VAR_1 = FUNC_10(VAR_0);
 VAR_0->reader_page->list.next = VAR_1->list.next;
 VAR_0->reader_page->list.prev = VAR_1->list.prev;






 VAR_0->pages = VAR_1->list.prev;


 FUNC_11(VAR_0, &VAR_0->reader_page->list);
 VAR_4 = FUNC_6(VAR_1, VAR_0->reader_page);




 if (!VAR_4)
  goto spin;






 VAR_1->list.next->prev = &VAR_0->reader_page->list;
 FUNC_7(VAR_0, &VAR_0->head_page);


 VAR_0->reader_page = VAR_1;
 FUNC_9(VAR_0);

 goto again;

 out:
 FUNC_2(&VAR_0->lock);
 FUNC_3(VAR_2);

 return VAR_1;
}
