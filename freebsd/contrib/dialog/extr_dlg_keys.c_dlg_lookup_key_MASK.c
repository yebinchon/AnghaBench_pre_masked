
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {int is_function_key; int curses_key; int dialog_key; } ;
struct TYPE_4__ {char* name; scalar_t__ buttons; TYPE_2__* binding; int * win; struct TYPE_4__* link; } ;
typedef TYPE_1__ LIST_BINDINGS ;
typedef TYPE_2__ DLG_KEYS_BINDING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;

int
FUNC_2(WINDOW *VAR_5, int VAR_6, int *VAR_7)
{
    LIST_BINDINGS *VAR_8;
    DLG_KEYS_BINDING *VAR_9;
    if (*VAR_7 == 0 || VAR_6 < VAR_0) {
 const char *VAR_10 = VAR_3;
 if (VAR_5 != 0) {
     for (VAR_8 = VAR_4; VAR_8 != 0; VAR_8 = VAR_8->link) {
  if (VAR_8->win == VAR_5) {
      VAR_10 = VAR_8->name;
      break;
  }
     }
 }
 for (VAR_8 = VAR_4; VAR_8 != 0; VAR_8 = VAR_8->link) {
     if (VAR_8->win == VAR_5 ||
  (VAR_8->win == 0 &&
   (!FUNC_1(VAR_8->name, VAR_10) || !FUNC_1(VAR_8->name, VAR_3)))) {
  int VAR_11 = (*VAR_7 != 0);
  for (VAR_9 = VAR_8->binding; VAR_9->is_function_key >= 0; ++VAR_9) {
      if (VAR_8->buttons
   && !VAR_11
   && VAR_9->curses_key == (int) FUNC_0(VAR_6)) {
   *VAR_7 = 0;
   return VAR_9->dialog_key;
      }
      if (VAR_9->curses_key == VAR_6
   && VAR_9->is_function_key == VAR_11) {
   *VAR_7 = VAR_9->dialog_key;
   return *VAR_7;
      }
  }
     }
 }
    }
    return VAR_6;
}
