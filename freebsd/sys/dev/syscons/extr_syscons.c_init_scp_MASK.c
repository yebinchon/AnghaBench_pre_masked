
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int vi_flags; int vi_width; int vi_height; int vi_cwidth; int vi_cheight; } ;
typedef TYPE_2__ video_info_t ;
struct TYPE_10__ {int mode; } ;
struct TYPE_12__ {int index; int status; int xpixel; int ypixel; int xsize; int ysize; int font_size; int font_width; int start; int border; int mouse_cut_start; int mouse_cut_end; scalar_t__ history_size; scalar_t__ history_pos; int * history; TYPE_1__ smode; int * proc; scalar_t__ pid; int bell_duration; int bell_pitch; int kbd_mode; int * mouse_proc; scalar_t__ mouse_pid; scalar_t__ mouse_signal; int dflt_curs_attr; int base_curs_attr; int * rndr; int * ts; int * tsw; scalar_t__ end; scalar_t__ ypos; scalar_t__ xpos; scalar_t__ yoff; scalar_t__ xoff; int scr; int vtb; int * font; int mode; TYPE_4__* sc; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_13__ {int curs_attr; int * font_14; int * font_16; int * font_8; int adp; int initial_mode; } ;
typedef TYPE_4__ sc_softc_t ;
struct TYPE_14__ {int shift_state; int bell_pitch; } ;


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
 TYPE_9__ VAR_12 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,int ,int ,int ,int *,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(sc_softc_t *VAR_13, int VAR_14, scr_stat *VAR_15)
{
    video_info_t VAR_16;

    FUNC_0(VAR_15, sizeof(*VAR_15));

    VAR_15->index = VAR_14;
    VAR_15->sc = VAR_13;
    VAR_15->status = 0;
    VAR_15->mode = VAR_13->initial_mode;
    FUNC_2(VAR_13->adp, VAR_15->mode, &VAR_16);
    if (VAR_16.vi_flags & VAR_11) {
 VAR_15->status |= VAR_3;
 VAR_15->xpixel = VAR_16.vi_width;
 VAR_15->ypixel = VAR_16.vi_height;
 VAR_15->xsize = VAR_16.vi_width/VAR_16.vi_cwidth;
 VAR_15->ysize = VAR_16.vi_height/VAR_16.vi_cheight;
 VAR_15->font_size = 0;
 VAR_15->font = ((void*)0);
    } else {
 VAR_15->xsize = VAR_16.vi_width;
 VAR_15->ysize = VAR_16.vi_height;
 VAR_15->xpixel = VAR_15->xsize*VAR_16.vi_cwidth;
 VAR_15->ypixel = VAR_15->ysize*VAR_16.vi_cheight;
    }

    VAR_15->font_size = VAR_16.vi_cheight;
    VAR_15->font_width = VAR_16.vi_cwidth;

    if (VAR_16.vi_cheight < 14)
 VAR_15->font = VAR_13->font_8;
    else if (VAR_16.vi_cheight >= 16)
 VAR_15->font = VAR_13->font_16;
    else
 VAR_15->font = VAR_13->font_14;




    FUNC_1(&VAR_15->vtb, VAR_9, 0, 0, ((void*)0), VAR_2);

    FUNC_1(&VAR_15->scr, VAR_8, 0, 0, ((void*)0), VAR_2);

    VAR_15->xoff = VAR_15->yoff = 0;
    VAR_15->xpos = VAR_15->ypos = 0;
    VAR_15->start = VAR_15->xsize * VAR_15->ysize - 1;
    VAR_15->end = 0;
    VAR_15->tsw = ((void*)0);
    VAR_15->ts = ((void*)0);
    VAR_15->rndr = ((void*)0);
    VAR_15->border = (VAR_7 >> 4) & 0x0f;
    VAR_15->base_curs_attr = VAR_15->dflt_curs_attr = VAR_13->curs_attr;
    VAR_15->mouse_cut_start = VAR_15->xsize*VAR_15->ysize;
    VAR_15->mouse_cut_end = -1;
    VAR_15->mouse_signal = 0;
    VAR_15->mouse_pid = 0;
    VAR_15->mouse_proc = ((void*)0);
    VAR_15->kbd_mode = VAR_4;
    VAR_15->bell_pitch = VAR_12.bell_pitch;
    VAR_15->bell_duration = VAR_0;
    VAR_15->status |= (VAR_12.shift_state & VAR_6);
    VAR_15->status |= VAR_1 | VAR_5;
    VAR_15->pid = 0;
    VAR_15->proc = ((void*)0);
    VAR_15->smode.mode = VAR_10;
    VAR_15->history = ((void*)0);
    VAR_15->history_pos = 0;
    VAR_15->history_size = 0;
}
