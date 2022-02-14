
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int xoc_effects; scalar_t__ xoc_col_fg; scalar_t__ xoc_col_bg; } ;
struct TYPE_5__ {int xo_data; TYPE_2__ xo_colors; } ;
typedef TYPE_1__ xo_handle_t ;
typedef TYPE_2__ xo_colors_t ;
typedef scalar_t__ xo_color_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,int,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__* VAR_3 ;
 char** VAR_4 ;

__attribute__((used)) static void
FUNC_2 (xo_handle_t *VAR_5, xo_colors_t *VAR_6)
{
    char VAR_7[VAR_0];
    char *VAR_8 = VAR_7, *VAR_9 = VAR_7 + sizeof(VAR_7);
    unsigned VAR_10, VAR_11;
    xo_colors_t *VAR_12 = &VAR_5->xo_colors;
    const char *VAR_13 = ((void*)0);






    *VAR_8++ = 0x1b;
    if (VAR_12->xoc_effects != (VAR_6->xoc_effects & VAR_12->xoc_effects)) {
 VAR_6->xoc_effects |= VAR_2;
 VAR_12->xoc_effects = 0;
    }

    for (VAR_10 = 0, VAR_11 = 1; VAR_3[VAR_10]; VAR_10++, VAR_11 <<= 1) {
 if ((VAR_6->xoc_effects & VAR_11) == (VAR_12->xoc_effects & VAR_11))
     continue;

 VAR_13 = VAR_4[VAR_10];

 VAR_8 += FUNC_0(VAR_8, VAR_9 - VAR_8, ";%s", VAR_13);
 if (VAR_8 >= VAR_9)
     return;

 if (VAR_11 == VAR_2) {

     VAR_12->xoc_effects = 0;
     VAR_12->xoc_col_fg = VAR_12->xoc_col_bg = VAR_1;
 }
    }

    xo_color_t VAR_14 = VAR_6->xoc_col_fg;
    if (VAR_14 != VAR_12->xoc_col_fg) {
 VAR_8 += FUNC_0(VAR_8, VAR_9 - VAR_8, ";3%u",
         (VAR_14 != VAR_1) ? VAR_14 - 1 : 9);
    }

    xo_color_t VAR_15 = VAR_6->xoc_col_bg;
    if (VAR_15 != VAR_12->xoc_col_bg) {
 VAR_8 += FUNC_0(VAR_8, VAR_9 - VAR_8, ";4%u",
         (VAR_15 != VAR_1) ? VAR_15 - 1 : 9);
    }

    if (VAR_8 - VAR_7 != 1 && VAR_8 < VAR_9 - 3) {
 VAR_7[1] = '[';
 *VAR_8++ = 'm';
 *VAR_8 = '\0';
 FUNC_1(&VAR_5->xo_data, VAR_7, VAR_8 - VAR_7);
    }
}
