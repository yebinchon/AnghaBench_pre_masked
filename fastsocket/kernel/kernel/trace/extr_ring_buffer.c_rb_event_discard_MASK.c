
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int time_delta; int type_len; scalar_t__* array; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ring_buffer_event*) ;

__attribute__((used)) static inline void FUNC_1(struct ring_buffer_event *VAR_2)
{

 VAR_2->array[0] = FUNC_0(VAR_2) - VAR_0;
 VAR_2->type_len = VAR_1;

 if (!VAR_2->time_delta)
  VAR_2->time_delta = 1;
}
