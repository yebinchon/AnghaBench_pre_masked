
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ring_buffer_per_cpu {scalar_t__ commit_page; scalar_t__ tail_page; scalar_t__ reader_page; int commit_overrun; struct ring_buffer* buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int flags; } ;
struct buffer_page {TYPE_1__* page; int list; } ;
struct TYPE_2__ {int time_stamp; } ;


 int VAR_0 ;
 struct ring_buffer_event* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*) ;
 int FUNC_3 (struct ring_buffer_per_cpu*,struct buffer_page**) ;
 scalar_t__ FUNC_4 (struct ring_buffer_per_cpu*,struct buffer_page*,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct ring_buffer_per_cpu*,struct buffer_page*,unsigned long,unsigned long) ;
 int FUNC_7 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*) ;
 int FUNC_8 (struct ring_buffer*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_10(struct ring_buffer_per_cpu *VAR_2,
      unsigned long VAR_3, unsigned long VAR_4,
      struct buffer_page *VAR_5,
      struct buffer_page *VAR_6, u64 *VAR_7)
{
 struct ring_buffer *VAR_8 = VAR_2->buffer;
 struct buffer_page *VAR_9;
 int VAR_10;

 VAR_9 = VAR_6;

 FUNC_3(VAR_2, &VAR_9);






 if (FUNC_9(VAR_9 == VAR_5)) {
  FUNC_1(&VAR_2->commit_overrun);
  goto out_reset;
 }
 if (FUNC_4(VAR_2, VAR_9, &VAR_6->list)) {





  if (!FUNC_5(VAR_2->commit_page)) {




   if (!(VAR_8->flags & VAR_1))
    goto out_reset;

   VAR_10 = FUNC_2(VAR_2,
        VAR_6,
        VAR_9);
   if (VAR_10 < 0)
    goto out_reset;
   if (VAR_10)
    goto out_again;
  } else {
   if (FUNC_9((VAR_2->commit_page !=
          VAR_2->tail_page) &&
         (VAR_2->commit_page ==
          VAR_2->reader_page))) {
    FUNC_1(&VAR_2->commit_overrun);
    goto out_reset;
   }
  }
 }

 VAR_10 = FUNC_7(VAR_2, VAR_6, VAR_9);
 if (VAR_10) {




  *VAR_7 = FUNC_8(VAR_8);
  VAR_9->page->time_stamp = *VAR_7;
 }

 out_again:

 FUNC_6(VAR_2, VAR_6, VAR_4, VAR_3);


 return FUNC_0(-VAR_0);

 out_reset:

 FUNC_6(VAR_2, VAR_6, VAR_4, VAR_3);

 return ((void*)0);
}
