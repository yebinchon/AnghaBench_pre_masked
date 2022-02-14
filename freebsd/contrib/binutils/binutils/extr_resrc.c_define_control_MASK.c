
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* rc_uint_type ;
typedef int rc_res_id ;
struct TYPE_3__ {scalar_t__ help; int * data; int text; int class; void* height; void* width; void* y; void* x; void* exstyle; void* style; void* id; int * next; } ;
typedef TYPE_1__ rc_dialog_control ;


 scalar_t__ FUNC_0 (int) ;

rc_dialog_control *
FUNC_1 (const rc_res_id VAR_0, rc_uint_type VAR_1, rc_uint_type VAR_2,
  rc_uint_type VAR_3, rc_uint_type VAR_4, rc_uint_type VAR_5,
  const rc_res_id VAR_6, rc_uint_type VAR_7,
  rc_uint_type VAR_8)
{
  rc_dialog_control *VAR_9;

  VAR_9 = (rc_dialog_control *) FUNC_0 (sizeof (rc_dialog_control));
  VAR_9->next = ((void*)0);
  VAR_9->id = VAR_1;
  VAR_9->style = VAR_7;
  VAR_9->exstyle = VAR_8;
  VAR_9->x = VAR_2;
  VAR_9->y = VAR_3;
  VAR_9->width = VAR_4;
  VAR_9->height = VAR_5;
  VAR_9->class = VAR_6;
  VAR_9->text = VAR_0;
  VAR_9->data = ((void*)0);
  VAR_9->help = 0;

  return VAR_9;
}
