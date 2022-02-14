
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cursor_attr {int* bg; int mouse_ba; int mouse_ia; int base; int height; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct cursor_attr *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    if (VAR_5 & VAR_0) {
 VAR_4->bg[0] = VAR_6 & 0xff;
 VAR_4->bg[1] = VAR_7 & 0xff;
    } else if (VAR_5 & VAR_2) {
 VAR_4->mouse_ba = VAR_6 & 0xff;
 VAR_4->mouse_ia = VAR_7 & 0xff;
    } else {
 if (VAR_6 >= 0)
     VAR_4->base = VAR_6;
 if (VAR_7 >= 0)
     VAR_4->height = VAR_7;
 if (!(VAR_5 & VAR_3))
  VAR_4->flags = VAR_5 & VAR_1;
    }
}
