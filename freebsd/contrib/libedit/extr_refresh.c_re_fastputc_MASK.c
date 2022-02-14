
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char wint_t ;
typedef char wchar_t ;
struct TYPE_10__ {scalar_t__ h; int v; } ;
struct TYPE_11__ {TYPE_3__ t_size; } ;
struct TYPE_9__ {size_t r_oldcv; } ;
struct TYPE_8__ {scalar_t__ h; size_t v; } ;
struct TYPE_12__ {char** el_display; TYPE_4__ el_terminal; TYPE_2__ el_refresh; TYPE_1__ el_cursor; } ;
typedef TYPE_5__ EditLine ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (TYPE_5__*,char) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(EditLine *VAR_3, wint_t VAR_4)
{
 wchar_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 while (VAR_6 > 1 && VAR_3->el_cursor.h + VAR_6 > VAR_3->el_terminal.t_size.h)
     FUNC_3(VAR_3, ' ');

 FUNC_1(VAR_3, VAR_4);
 VAR_3->el_display[VAR_3->el_cursor.v][VAR_3->el_cursor.h++] = VAR_4;
 while (--VAR_6 > 0)
  VAR_3->el_display[VAR_3->el_cursor.v][VAR_3->el_cursor.h++]
   = VAR_2;

 if (VAR_3->el_cursor.h >= VAR_3->el_terminal.t_size.h) {

  VAR_3->el_cursor.h = 0;







  if (VAR_3->el_cursor.v + 1 >= VAR_3->el_terminal.t_size.v) {
   int VAR_7, VAR_8 = VAR_3->el_terminal.t_size.v;

   VAR_5 = VAR_3->el_display[0];
   for(VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
    VAR_3->el_display[VAR_7 - 1] = VAR_3->el_display[VAR_7];

   VAR_3->el_display[VAR_7 - 1] = VAR_5;
  } else {
   VAR_3->el_cursor.v++;
   VAR_5 = VAR_3->el_display[++VAR_3->el_refresh.r_oldcv];
  }
  FUNC_0(VAR_5, L"", (size_t)VAR_3->el_terminal.t_size.h);

  if (VAR_0) {
   if (VAR_1) {
    FUNC_1(VAR_3, ' ');
    FUNC_1(VAR_3, '\b');
   }
  } else {
   FUNC_1(VAR_3, '\r');
   FUNC_1(VAR_3, '\n');
  }
 }
}
