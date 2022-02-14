
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ring_buffer_per_cpu {scalar_t__ tail_page; scalar_t__ commit_page; scalar_t__ write_stamp; int buffer; int commits; int committing; } ;
struct ring_buffer_event {scalar_t__ time_delta; } ;
struct ring_buffer {int dummy; } ;


 struct ring_buffer* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ring_buffer_event*) ;
 scalar_t__ FUNC_2 (struct ring_buffer_per_cpu*,int) ;
 struct ring_buffer_event* FUNC_3 (struct ring_buffer_per_cpu*,int ,unsigned long,scalar_t__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ring_buffer_per_cpu*,scalar_t__*,scalar_t__*) ;
 unsigned long FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (struct ring_buffer_per_cpu*) ;
 int FUNC_10 (struct ring_buffer_per_cpu*) ;
 int FUNC_11 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_17(struct ring_buffer *VAR_2,
        struct ring_buffer_per_cpu *VAR_3,
        unsigned long VAR_4)
{
 struct ring_buffer_event *VAR_5;
 u64 VAR_6, VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_13(VAR_3);
 VAR_4 = FUNC_8(VAR_4);
 again:
 if (FUNC_2(VAR_3, ++VAR_9 > 1000))
  goto out_fail;

 VAR_6 = FUNC_14(VAR_3->buffer);
 if (FUNC_5(VAR_3->tail_page == VAR_3->commit_page &&
     FUNC_12(VAR_3->tail_page) ==
     FUNC_9(VAR_3))) {
  u64 VAR_10;

  VAR_10 = VAR_6 - VAR_3->write_stamp;


  FUNC_4();


  if (FUNC_16(VAR_6 < VAR_3->write_stamp))
   goto get_event;

  VAR_7 = VAR_10;
  if (FUNC_16(FUNC_15(VAR_7))) {

   VAR_8 = FUNC_7(VAR_3, &VAR_6, &VAR_7);
   if (VAR_8 == -VAR_1)
    goto out_fail;

   if (VAR_8 == -VAR_0)
    goto again;

   FUNC_2(VAR_3, VAR_8 < 0);
  }
 }

 get_event:
 VAR_5 = FUNC_3(VAR_3, 0, VAR_4, &VAR_6);
 if (FUNC_16(FUNC_1(VAR_5) == -VAR_0))
  goto again;

 if (!VAR_5)
  goto out_fail;

 if (!FUNC_11(VAR_3, VAR_5))
  VAR_7 = 0;

 VAR_5->time_delta = VAR_7;

 return VAR_5;

 out_fail:
 FUNC_10(VAR_3);
 return ((void*)0);
}
