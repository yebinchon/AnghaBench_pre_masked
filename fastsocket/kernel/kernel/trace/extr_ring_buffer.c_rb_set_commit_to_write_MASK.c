
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ring_buffer_per_cpu {TYPE_3__* tail_page; TYPE_3__* commit_page; int write_stamp; TYPE_1__* buffer; } ;
struct TYPE_8__ {TYPE_2__* page; } ;
struct TYPE_7__ {int commit; int time_stamp; } ;
struct TYPE_6__ {int pages; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ring_buffer_per_cpu*) ;
 int FUNC_5 (struct ring_buffer_per_cpu*,TYPE_3__**) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct ring_buffer_per_cpu *VAR_1)
{
 unsigned long VAR_2;
 again:
 VAR_2 = VAR_1->buffer->pages * 100;

 while (VAR_1->commit_page != VAR_1->tail_page) {
  if (FUNC_0(VAR_1, !(--VAR_2)))
   return;
  if (FUNC_0(VAR_1,
          FUNC_6(VAR_1->tail_page)))
   return;
  FUNC_3(&VAR_1->commit_page->page->commit,
     FUNC_7(VAR_1->commit_page));
  FUNC_5(VAR_1, &VAR_1->commit_page);
  VAR_1->write_stamp =
   VAR_1->commit_page->page->time_stamp;

  FUNC_1();
 }
 while (FUNC_4(VAR_1) !=
        FUNC_7(VAR_1->commit_page)) {

  FUNC_3(&VAR_1->commit_page->page->commit,
     FUNC_7(VAR_1->commit_page));
  FUNC_0(VAR_1,
      FUNC_2(&VAR_1->commit_page->page->commit) &
      ~VAR_0);
  FUNC_1();
 }


 FUNC_1();






 if (FUNC_8(VAR_1->commit_page != VAR_1->tail_page))
  goto again;
}
