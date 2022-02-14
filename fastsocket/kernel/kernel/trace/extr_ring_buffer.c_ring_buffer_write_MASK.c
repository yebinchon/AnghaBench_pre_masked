
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; int record_disabled; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*,void*,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 void* FUNC_7 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_8 (struct ring_buffer*,struct ring_buffer_per_cpu*,unsigned long) ;
 scalar_t__ VAR_3 ;

int FUNC_9(struct ring_buffer *VAR_4,
   unsigned long VAR_5,
   void *VAR_6)
{
 struct ring_buffer_per_cpu *VAR_7;
 struct ring_buffer_event *VAR_8;
 void *VAR_9;
 int VAR_10 = -VAR_1;
 int VAR_11, VAR_12;

 if (VAR_3 != VAR_2)
  return -VAR_1;

 VAR_12 = FUNC_2();

 if (FUNC_0(&VAR_4->record_disabled))
  goto out;

 VAR_11 = FUNC_5();

 if (!FUNC_1(VAR_11, VAR_4->cpumask))
  goto out;

 VAR_7 = VAR_4->buffers[VAR_11];

 if (FUNC_0(&VAR_7->record_disabled))
  goto out;

 if (VAR_5 > VAR_0)
  goto out;

 VAR_8 = FUNC_8(VAR_4, VAR_7, VAR_5);
 if (!VAR_8)
  goto out;

 VAR_9 = FUNC_7(VAR_8);

 FUNC_4(VAR_9, VAR_6, VAR_5);

 FUNC_6(VAR_7, VAR_8);

 VAR_10 = 0;
 out:
 FUNC_3(VAR_12);

 return VAR_10;
}
