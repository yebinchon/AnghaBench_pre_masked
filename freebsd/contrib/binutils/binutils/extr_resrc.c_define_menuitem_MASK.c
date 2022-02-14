
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int unichar ;
typedef void* rc_uint_type ;
struct TYPE_4__ {struct TYPE_4__* popup; void* help; int text; void* id; void* state; void* type; int * next; } ;
typedef TYPE_1__ rc_menuitem ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const*) ;

rc_menuitem *
FUNC_2 (const unichar *VAR_0, rc_uint_type VAR_1, rc_uint_type VAR_2,
   rc_uint_type VAR_3, rc_uint_type VAR_4,
   rc_menuitem *VAR_5)
{
  rc_menuitem *VAR_6;

  VAR_6 = (rc_menuitem *) FUNC_0 (sizeof (rc_menuitem));
  VAR_6->next = ((void*)0);
  VAR_6->type = VAR_2;
  VAR_6->state = VAR_3;
  VAR_6->id = VAR_1;
  VAR_6->text = FUNC_1 (VAR_0);
  VAR_6->help = VAR_4;
  VAR_6->popup = VAR_5;
  return VAR_6;
}
