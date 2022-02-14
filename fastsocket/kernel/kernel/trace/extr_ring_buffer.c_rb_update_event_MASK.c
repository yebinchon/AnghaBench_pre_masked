
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {unsigned int type_len; unsigned int* array; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;




__attribute__((used)) static void
FUNC_2(struct ring_buffer_event *VAR_3,
    unsigned VAR_4, unsigned VAR_5)
{
 VAR_3->type_len = VAR_4;

 switch (VAR_4) {

 case 130:
 case 129:
 case 128:
  break;

 case 0:
  VAR_5 -= VAR_1;
  if (VAR_5 > VAR_2)
   VAR_3->array[0] = VAR_5;
  else
   VAR_3->type_len = FUNC_1(VAR_5, VAR_0);
  break;
 default:
  FUNC_0();
 }
}
