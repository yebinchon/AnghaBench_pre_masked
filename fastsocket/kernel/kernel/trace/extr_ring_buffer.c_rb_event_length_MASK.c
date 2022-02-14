
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int type_len; int* array; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_1 (struct ring_buffer_event*) ;
 int FUNC_2 (struct ring_buffer_event*) ;

__attribute__((used)) static unsigned
FUNC_3(struct ring_buffer_event *VAR_3)
{
 switch (VAR_3->type_len) {
 case 130:
  if (FUNC_2(VAR_3))

   return -1;
  return VAR_3->array[0] + VAR_0;

 case 129:
  return VAR_1;

 case 128:
  return VAR_2;

 case 131:
  return FUNC_1(VAR_3);
 default:
  FUNC_0();
 }

 return 0;
}
