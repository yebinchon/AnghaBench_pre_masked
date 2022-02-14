
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {TYPE_1__* binding; int name; int * win; struct TYPE_5__* link; } ;
struct TYPE_4__ {int is_function_key; int curses_key; } ;
typedef TYPE_2__ LIST_BINDINGS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(WINDOW *VAR_3, const char *VAR_4, int VAR_5, int VAR_6)
{
    LIST_BINDINGS *VAR_7;

    for (VAR_7 = VAR_2; VAR_7 != 0; VAR_7 = VAR_7->link) {
 if (VAR_7->win == VAR_3 && !FUNC_0(VAR_7->name, VAR_4)) {
     int VAR_8;
     for (VAR_8 = 0; VAR_7->binding[VAR_8].is_function_key >= 0; ++VAR_8) {
  if (VAR_7->binding[VAR_8].curses_key == VAR_5
      && VAR_7->binding[VAR_8].is_function_key == VAR_6) {
      return VAR_1;
  }
     }
 }
    }
    return VAR_0;
}
