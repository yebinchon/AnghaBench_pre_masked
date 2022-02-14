
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_event {int type; int code; int value; } ;
struct evdev_client {size_t ec_buffer_head; size_t ec_buffer_tail; size_t ec_buffer_ready; size_t ec_buffer_size; struct input_event* ec_buffer; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct evdev_client *VAR_0)
{
 struct input_event *VAR_1;
 size_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_0->ec_buffer_head;
 VAR_4 = VAR_0->ec_buffer_tail;
 VAR_5 = VAR_0->ec_buffer_ready;
 VAR_6 = VAR_0->ec_buffer_size;

 FUNC_0("evdev client: %p\n", VAR_0);
 FUNC_0("event queue: head=%zu ready=%zu tail=%zu size=%zu\n",
     VAR_3, VAR_5, VAR_4, VAR_6);

 FUNC_0("queue contents:\n");

 for (VAR_2 = 0; VAR_2 < VAR_6; VAR_2++) {
  VAR_1 = &VAR_0->ec_buffer[VAR_2];
  FUNC_0("%zu: ", VAR_2);

  if (VAR_2 < VAR_3 || VAR_2 > VAR_4)
   FUNC_0("unused\n");
  else
   FUNC_0("type=%d code=%d value=%d ", VAR_1->type,
       VAR_1->code, VAR_1->value);

  if (VAR_2 == VAR_3)
   FUNC_0("<- head\n");
  else if (VAR_2 == VAR_4)
   FUNC_0("<- tail\n");
  else if (VAR_2 == VAR_5)
   FUNC_0("<- ready\n");
  else
   FUNC_0("\n");
 }
}
