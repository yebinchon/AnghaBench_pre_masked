
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_9__ {int v; } ;
struct TYPE_10__ {TYPE_3__ t_size; } ;
struct TYPE_7__ {int v; scalar_t__ h; } ;
struct TYPE_8__ {TYPE_1__ r_cursor; } ;
struct TYPE_11__ {char** el_vdisplay; TYPE_4__ el_terminal; TYPE_2__ el_refresh; } ;
typedef TYPE_5__ EditLine ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(EditLine *VAR_1)
{
 VAR_1->el_refresh.r_cursor.h = 0;







 if (VAR_1->el_refresh.r_cursor.v + 1 >= VAR_1->el_terminal.t_size.v) {
  int VAR_2, VAR_3 = VAR_1->el_terminal.t_size.v;
  wchar_t *VAR_4 = VAR_1->el_vdisplay[0];

  for(VAR_2 = 1; VAR_2 < VAR_3; VAR_2++)
   VAR_1->el_vdisplay[VAR_2 - 1] = VAR_1->el_vdisplay[VAR_2];

  VAR_4[0] = '\0';
  VAR_1->el_vdisplay[VAR_2 - 1] = VAR_4;
 } else
  VAR_1->el_refresh.r_cursor.v++;

 FUNC_0(VAR_1->el_refresh.r_cursor.v >= VAR_1->el_terminal.t_size.v,
     (VAR_0, "\r\nre_putc: overflow! r_cursor.v == %d > %d\r\n",
     VAR_1->el_refresh.r_cursor.v, VAR_1->el_terminal.t_size.v),
     FUNC_1());
}
