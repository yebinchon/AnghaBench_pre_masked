
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int xoc_effects; scalar_t__ xoc_col_fg; scalar_t__ xoc_col_bg; } ;
struct TYPE_5__ {int xo_color_buf; TYPE_2__ xo_colors; } ;
typedef TYPE_1__ xo_handle_t ;
typedef TYPE_2__ xo_colors_t ;
typedef int xo_buffer_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 char** VAR_2 ;
 char const** VAR_3 ;

__attribute__((used)) static void
FUNC_2 (xo_handle_t *VAR_4, xo_colors_t *VAR_5)
{
    xo_colors_t *VAR_6 = &VAR_4->xo_colors;







    if (VAR_6->xoc_effects == VAR_5->xoc_effects
 && VAR_6->xoc_col_fg == VAR_5->xoc_col_fg
 && VAR_6->xoc_col_bg == VAR_5->xoc_col_bg)
 return;

    unsigned VAR_7, VAR_8;
    xo_buffer_t *VAR_9 = &VAR_4->xo_color_buf;

    FUNC_1(VAR_9);

    for (VAR_7 = 0, VAR_8 = 1; VAR_3[VAR_7]; VAR_7++, VAR_8 <<= 1) {
 if (!(VAR_5->xoc_effects & VAR_8))
     continue;

 FUNC_0(VAR_9, " effect-");
 FUNC_0(VAR_9, VAR_3[VAR_7]);
    }

    const char *VAR_10 = ((void*)0);
    const char *VAR_11 = ((void*)0);

    if (VAR_5->xoc_col_fg != VAR_0)
 VAR_10 = VAR_2[VAR_5->xoc_col_fg];
    if (VAR_5->xoc_col_bg != VAR_0)
 VAR_11 = VAR_2[VAR_5->xoc_col_bg];

    if (VAR_5->xoc_effects & VAR_1) {
 const char *VAR_12 = VAR_10;
 VAR_10 = VAR_11;
 VAR_11 = VAR_12;
 if (VAR_10 == ((void*)0))
     VAR_10 = "inverse";
 if (VAR_11 == ((void*)0))
     VAR_11 = "inverse";

    }

    if (VAR_10) {
 FUNC_0(VAR_9, " color-fg-");
 FUNC_0(VAR_9, VAR_10);
    }

    if (VAR_11) {
 FUNC_0(VAR_9, " color-bg-");
 FUNC_0(VAR_9, VAR_11);
    }
}
