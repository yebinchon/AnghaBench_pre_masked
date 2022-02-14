
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int reader_lock; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ring_buffer_per_cpu*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ring_buffer *VAR_0, int VAR_1)
{
 struct ring_buffer_per_cpu *VAR_2;
 unsigned long VAR_3;
 int VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_1, VAR_0->cpumask))
  return 1;

 VAR_4 = FUNC_3();

 VAR_2 = VAR_0->buffers[VAR_1];
 FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_5(&VAR_2->reader_lock);
 VAR_5 = FUNC_4(VAR_2);
 if (VAR_4)
  FUNC_6(&VAR_2->reader_lock);
 FUNC_1(VAR_3);

 return VAR_5;
}
