
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int VAR_0 ;
 int FUNC_6 () ;

int FUNC_7(struct ring_buffer *VAR_1,
         struct ring_buffer_event *VAR_2)
{
 struct ring_buffer_per_cpu *VAR_3;
 int VAR_4 = FUNC_4();

 VAR_3 = VAR_1->buffers[VAR_4];

 FUNC_5(VAR_3, VAR_2);

 FUNC_6();




 if (FUNC_2() == 1)
  FUNC_0(FUNC_1(VAR_0, VAR_4));
 else
  FUNC_3();

 return 0;
}
