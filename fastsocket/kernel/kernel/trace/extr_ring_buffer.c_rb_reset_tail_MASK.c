
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int dummy; } ;
struct ring_buffer_event {unsigned long* array; int time_delta; int type_len; } ;
struct buffer_page {int write; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct ring_buffer_event* FUNC_0 (struct buffer_page*,unsigned long) ;
 int VAR_4 ;
 int FUNC_1 (struct ring_buffer_event*,int ) ;
 int FUNC_2 (unsigned long,int *) ;
 int FUNC_3 (struct ring_buffer_event*) ;

__attribute__((used)) static inline void
FUNC_4(struct ring_buffer_per_cpu *VAR_5,
       struct buffer_page *VAR_6,
       unsigned long VAR_7, unsigned long VAR_8)
{
 struct ring_buffer_event *VAR_9;





 if (VAR_7 >= VAR_0) {
  FUNC_2(VAR_8, &VAR_6->write);
  return;
 }

 VAR_9 = FUNC_0(VAR_6, VAR_7);
 FUNC_1(VAR_9, VAR_4);
 if (VAR_7 > (VAR_0 - VAR_2)) {



  FUNC_3(VAR_9);


  FUNC_2(VAR_8, &VAR_6->write);
  return;
 }


 VAR_9->array[0] = (VAR_0 - VAR_7) - VAR_1;
 VAR_9->type_len = VAR_3;

 VAR_9->time_delta = 1;


 VAR_8 = (VAR_7 + VAR_8) - VAR_0;
 FUNC_2(VAR_8, &VAR_6->write);
}
