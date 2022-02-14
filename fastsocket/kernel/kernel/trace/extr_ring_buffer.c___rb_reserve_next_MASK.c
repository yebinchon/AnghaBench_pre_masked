
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ring_buffer_per_cpu {struct buffer_page* tail_page; struct buffer_page* commit_page; } ;
struct ring_buffer_event {int dummy; } ;
struct buffer_page {TYPE_1__* page; int entries; int write; } ;
struct TYPE_2__ {int time_stamp; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct ring_buffer_event* FUNC_0 (struct buffer_page*,unsigned long) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct ring_buffer_event*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned long FUNC_4 (unsigned long,int *) ;
 int FUNC_5 (int *) ;
 struct ring_buffer_event* FUNC_6 (struct ring_buffer_per_cpu*,unsigned long,unsigned long,struct buffer_page*,struct buffer_page*,int *) ;
 int FUNC_7 (struct ring_buffer_event*,unsigned int,unsigned long) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_8(struct ring_buffer_per_cpu *VAR_3,
    unsigned VAR_4, unsigned long VAR_5, u64 *VAR_6)
{
 struct buffer_page *VAR_7, *VAR_8;
 struct ring_buffer_event *VAR_9;
 unsigned long VAR_10, VAR_11;

 VAR_8 = VAR_3->commit_page;

 FUNC_1();
 VAR_7 = VAR_3->tail_page;
 VAR_11 = FUNC_4(VAR_5, &VAR_7->write);


 VAR_11 &= VAR_1;
 VAR_10 = VAR_11 - VAR_5;


 if (VAR_11 > VAR_0)
  return FUNC_6(VAR_3, VAR_5, VAR_10,
        VAR_8, VAR_7, VAR_6);



 VAR_9 = FUNC_0(VAR_7, VAR_10);
 FUNC_2(VAR_9, VAR_2);
 FUNC_7(VAR_9, VAR_4, VAR_5);


 if (FUNC_3(!VAR_4))
  FUNC_5(&VAR_7->entries);





 if (!VAR_10)
  VAR_7->page->time_stamp = *VAR_6;

 return VAR_9;
}
