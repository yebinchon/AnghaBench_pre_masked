
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int committing; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; } ;


 int FUNC_0 (struct ring_buffer*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int FUNC_7 (struct ring_buffer_per_cpu*) ;
 int FUNC_8 (struct ring_buffer_event*) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int FUNC_10 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

void FUNC_13(struct ring_buffer *VAR_1,
    struct ring_buffer_event *VAR_2)
{
 struct ring_buffer_per_cpu *VAR_3;
 int VAR_4;


 FUNC_8(VAR_2);

 VAR_4 = FUNC_11();
 VAR_3 = VAR_1->buffers[VAR_4];






 FUNC_0(VAR_1, !FUNC_2(&VAR_3->committing));

 FUNC_6(VAR_3, VAR_2);
 if (FUNC_9(VAR_3, VAR_2))
  goto out;





 FUNC_10(VAR_3, VAR_2);
 out:
 FUNC_7(VAR_3);

 FUNC_12();




 if (FUNC_4() == 1)
  FUNC_1(FUNC_3(VAR_0, VAR_4));
 else
  FUNC_5();

}
