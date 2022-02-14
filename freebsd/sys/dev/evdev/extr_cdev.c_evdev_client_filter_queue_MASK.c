
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct input_event {scalar_t__ type; scalar_t__ code; } ;
struct evdev_client {size_t ec_buffer_head; size_t ec_buffer_tail; size_t ec_buffer_size; size_t ec_buffer_ready; struct input_event* ec_buffer; } ;


 int FUNC_0 (struct evdev_client*) ;
 int FUNC_1 (struct evdev_client*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct input_event*,struct input_event*,int) ;

__attribute__((used)) static void
FUNC_3(struct evdev_client *VAR_2, uint16_t VAR_3)
{
 struct input_event *VAR_4;
 size_t VAR_5, VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;

 FUNC_0(VAR_2);

 VAR_8 = VAR_5 = VAR_2->ec_buffer_head;
 VAR_6 = VAR_2->ec_buffer_tail;
 VAR_7 = VAR_2->ec_buffer_size;
 VAR_2->ec_buffer_ready = VAR_2->ec_buffer_tail;

 while (VAR_8 != VAR_2->ec_buffer_tail) {
  VAR_4 = &VAR_2->ec_buffer[VAR_8];
  VAR_8 = (VAR_8 + 1) % VAR_7;


  if (VAR_4->type == VAR_3)
   continue;


  if (VAR_4->type == VAR_0 && VAR_4->code == VAR_1) {
   if (VAR_9)
    continue;
   else
    VAR_2->ec_buffer_ready = (VAR_6 + 1) % VAR_7;
  }


  FUNC_2(&VAR_2->ec_buffer[VAR_6], VAR_4,
      sizeof(struct input_event));

  VAR_9 = (VAR_4->type == VAR_0 &&
      VAR_4->code == VAR_1);

  VAR_6 = (VAR_6 + 1) % VAR_7;
 }

 VAR_2->ec_buffer_head = VAR_8;
 VAR_2->ec_buffer_tail = VAR_6;

 FUNC_1(VAR_2);
}
