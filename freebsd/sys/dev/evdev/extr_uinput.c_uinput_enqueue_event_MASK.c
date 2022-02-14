
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct uinput_cdev_state {size_t ucs_buffer_head; int ucs_buffer_tail; TYPE_1__* ucs_buffer; } ;
typedef int int32_t ;
struct TYPE_2__ {int value; void* code; void* type; int time; } ;


 int VAR_0 ;
 int FUNC_0 (struct uinput_cdev_state*) ;
 int FUNC_1 (struct uinput_cdev_state*,char*,struct uinput_cdev_state*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct uinput_cdev_state *VAR_1, uint16_t VAR_2,
    uint16_t VAR_3, int32_t VAR_4)
{
 size_t VAR_5, VAR_6;

 FUNC_0(VAR_1);

 VAR_5 = VAR_1->ucs_buffer_head;
 VAR_6 = (VAR_1->ucs_buffer_tail + 1) % VAR_0;

 FUNC_2(&VAR_1->ucs_buffer[VAR_6].time);
 VAR_1->ucs_buffer[VAR_6].type = VAR_2;
 VAR_1->ucs_buffer[VAR_6].code = VAR_3;
 VAR_1->ucs_buffer[VAR_6].value = VAR_4;
 VAR_1->ucs_buffer_tail = VAR_6;


 if (VAR_6 == VAR_5) {
  FUNC_1(VAR_1, "state %p: buffer overflow", VAR_1);

  VAR_5 = (VAR_5 + 1) % VAR_0;
  VAR_1->ucs_buffer_head = VAR_5;
 }
}
