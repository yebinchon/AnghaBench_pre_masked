
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int vi_cheight; int vi_width; int vi_height; } ;
typedef TYPE_3__ video_info_t ;
typedef int u_char ;
struct winsize {int ws_col; int ws_row; } ;
struct tty {int dummy; } ;
struct TYPE_22__ {int ysize; int status; int xsize; int xoff; int xpixel; int yoff; int ypixel; int font_size; int font_width; int border; TYPE_2__* sc; int * font; int * history; int * ts; TYPE_1__* tsw; int mode; } ;
typedef TYPE_4__ scr_stat ;
struct TYPE_23__ {int va_name; } ;
struct TYPE_20__ {int fonts_loaded; TYPE_4__* cur_scp; TYPE_5__* adp; int * font_16; int * font_14; int * font_8; } ;
struct TYPE_19__ {int (* te_term ) (TYPE_4__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int * FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_4__*,int *) ;
 int FUNC_13 (struct tty*,struct winsize*) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int ,TYPE_3__*) ;

int
FUNC_15(scr_stat *VAR_12, struct tty *VAR_13, int VAR_14, int VAR_15,
    int VAR_16, int VAR_17)
{

    return VAR_1;
}
