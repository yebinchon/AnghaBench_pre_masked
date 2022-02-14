
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_3__ {int xoc_col_fg; int xoc_col_bg; int xoc_effects; } ;
typedef TYPE_1__ xo_colors_t ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;


 int const VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,char*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void
FUNC_8 (xo_handle_t *VAR_4, xo_colors_t *VAR_5, char *VAR_6)
{
    if (FUNC_7())
 return;

    char *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    ssize_t VAR_11 = FUNC_3(VAR_6);
    int VAR_12;




    for (VAR_7 = VAR_6, VAR_8 = VAR_7 + VAR_11 - 1; VAR_7 && VAR_7 < VAR_8; VAR_7 = VAR_9) {

 while (FUNC_1((int) *VAR_7))
     VAR_7 += 1;

 VAR_9 = FUNC_2(VAR_7, ',');
 if (VAR_9)
     *VAR_9++ = '\0';


 VAR_10 = VAR_7 + FUNC_3(VAR_7) - 1;
 while (FUNC_1(*VAR_10) && VAR_10 > VAR_7)
     *VAR_10-- = '\0';

 if (VAR_7[0] == 'f' && VAR_7[1] == 'g' && VAR_7[2] == '-') {
     VAR_12 = FUNC_4(VAR_7 + 3);
     if (VAR_12 < 0)
  goto unknown;

     VAR_5->xoc_col_fg = VAR_12;

 } else if (VAR_7[0] == 'b' && VAR_7[1] == 'g' && VAR_7[2] == '-') {
     VAR_12 = FUNC_4(VAR_7 + 3);
     if (VAR_12 < 0)
  goto unknown;
     VAR_5->xoc_col_bg = VAR_12;

 } else if (VAR_7[0] == 'n' && VAR_7[1] == 'o' && VAR_7[2] == '-') {
     VAR_12 = FUNC_5(VAR_7 + 3);
     if (VAR_12 < 0)
  goto unknown;
     VAR_5->xoc_effects &= ~(1 << VAR_12);

 } else {
     VAR_12 = FUNC_5(VAR_7);
     if (VAR_12 < 0)
  goto unknown;
     VAR_5->xoc_effects |= 1 << VAR_12;

     switch (1 << VAR_12) {
     case 128:
  VAR_5->xoc_col_fg = VAR_5->xoc_col_bg = 0;

  VAR_5->xoc_effects = 128;
  break;

     case 129:
  VAR_5->xoc_effects &= ~(VAR_1 | VAR_3
          | VAR_2 | 129);
  break;
     }
 }
 continue;

    unknown:
 if (FUNC_0(VAR_4, VAR_0))
     FUNC_6(VAR_4, "unknown color/effect string detected: '%s'", VAR_7);
    }
}
