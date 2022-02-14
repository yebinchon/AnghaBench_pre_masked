
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wint_t ;
typedef char wchar_t ;
typedef size_t ssize_t ;
struct TYPE_8__ {int h; int v; } ;
struct TYPE_7__ {TYPE_2__ r_cursor; } ;
struct TYPE_9__ {TYPE_1__ el_refresh; } ;
typedef TYPE_3__ EditLine ;





 int VAR_0 ;
 int FUNC_0 (char) ;
 size_t FUNC_1 (char*,int,char) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char,int) ;

__attribute__((used)) static void
FUNC_4(EditLine *VAR_1, wint_t VAR_2)
{
 switch (FUNC_0(VAR_2)) {
 case 128:
  for (;;) {
   FUNC_3(VAR_1, ' ', 1);
   if ((VAR_1->el_refresh.r_cursor.h & 07) == 0)
    break;
  }
  break;
 case 130: {
  int VAR_3 = VAR_1->el_refresh.r_cursor.v;
  FUNC_3(VAR_1, '\0', 0);
  if (VAR_3 == VAR_1->el_refresh.r_cursor.v)
   FUNC_2(VAR_1);
  break;
 }
 case 129:
  FUNC_3(VAR_1, VAR_2, 1);
  break;
 default: {
  wchar_t VAR_4[VAR_0];
  ssize_t VAR_5, VAR_6 =
      FUNC_1(VAR_4, VAR_0, VAR_2);
  for (VAR_5 = 0; VAR_6-- > 0; ++VAR_5)
      FUNC_3(VAR_1, VAR_4[VAR_5], 1);
  break;
 }
 }
}
