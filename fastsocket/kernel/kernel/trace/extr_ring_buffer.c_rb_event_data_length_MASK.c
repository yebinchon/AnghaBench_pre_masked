
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int type_len; unsigned int* array; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned
FUNC_0(struct ring_buffer_event *VAR_2)
{
 unsigned VAR_3;

 if (VAR_2->type_len)
  VAR_3 = VAR_2->type_len * VAR_0;
 else
  VAR_3 = VAR_2->array[0];
 return VAR_3 + VAR_1;
}
