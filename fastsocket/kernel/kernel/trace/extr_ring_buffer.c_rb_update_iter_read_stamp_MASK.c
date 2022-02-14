
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ring_buffer_iter {int read_stamp; } ;
struct ring_buffer_event {int type_len; int time_delta; int * array; } ;


 int FUNC_0 () ;




 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct ring_buffer_iter *VAR_1,
     struct ring_buffer_event *VAR_2)
{
 u64 VAR_3;

 switch (VAR_2->type_len) {
 case 130:
  return;

 case 129:
  VAR_3 = VAR_2->array[0];
  VAR_3 <<= VAR_0;
  VAR_3 += VAR_2->time_delta;
  VAR_1->read_stamp += VAR_3;
  return;

 case 128:

  return;

 case 131:
  VAR_1->read_stamp += VAR_2->time_delta;
  return;

 default:
  FUNC_0();
 }
 return;
}
