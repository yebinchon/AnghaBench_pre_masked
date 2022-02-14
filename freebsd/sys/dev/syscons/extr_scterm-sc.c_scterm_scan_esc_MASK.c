
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_30__ {int bg; int fg; } ;
struct TYPE_29__ {int fg; int bg; } ;
struct TYPE_31__ {int esc; int saved_xpos; int saved_ypos; int last_param; int num_param; int* param; int attr_mask; void* cur_attr; TYPE_2__ rev_color; TYPE_1__ std_color; TYPE_1__ cur_color; TYPE_2__ dflt_rev_color; TYPE_1__ dflt_std_color; } ;
typedef TYPE_3__ term_stat ;
typedef int tcattrs ;
struct TYPE_32__ {int xpos; int ypos; int xsize; int border; int bell_pitch; int bell_duration; int font_size; int cursor_pos; int vtb; TYPE_5__* sc; } ;
typedef TYPE_4__ scr_stat ;
struct TYPE_33__ {TYPE_4__* cur_scp; int * scr_map; } ;
typedef TYPE_5__ sc_softc_t ;
typedef int cattrs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int const,int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int,int ,void*) ;
 int FUNC_9 (TYPE_4__*,int,int ,void*) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (TYPE_4__*,int,int ,void*) ;
 int FUNC_12 (TYPE_4__*,int,int,int ,void*,int ) ;
 int FUNC_13 (TYPE_4__*,int,int ) ;
 int FUNC_14 (TYPE_4__*,int,int ,void*) ;
 int FUNC_15 (TYPE_4__*,int,int,int ,void*,int ) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (TYPE_4__*,int) ;
 int FUNC_18 (TYPE_4__*,int) ;
 int FUNC_19 (TYPE_4__*,int,int ) ;
 int FUNC_20 (TYPE_4__*,int,int ,void*,int ,int ) ;
 int FUNC_21 (int *,int ,int,int ,void*) ;
 int FUNC_22 () ;
 int FUNC_23 (int) ;

__attribute__((used)) static void
FUNC_24(scr_stat *VAR_9, term_stat *VAR_10, u_char VAR_11)
{
 static u_char VAR_12[16] = {
  143, 130, 138, 141,
  142, 131, 140, 134,
  139, 132, 135, 128,
  137, 133, 136, 129
 };
 static int VAR_13[] = {
  0,
  148,
  147,
  147 | 148,
  144,
  146,
 };
 static int VAR_14[] = {
  144 | 145,
  146 | 145,
  148 | 145,
 };
 sc_softc_t *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;

 VAR_19 = VAR_20 = 0;
 VAR_15 = VAR_9->sc;
 if (VAR_10->esc == 1) {
  switch (VAR_11) {

  case '7':
   VAR_10->saved_xpos = VAR_9->xpos;
   VAR_10->saved_ypos = VAR_9->ypos;
   break;

  case '8':
   if (VAR_10->saved_xpos >= 0 && VAR_10->saved_ypos >= 0)
    FUNC_4(VAR_9, VAR_10->saved_xpos,
            VAR_10->saved_ypos);
   break;

  case '[':
   VAR_10->esc = 2;
   VAR_10->last_param = -1;
   for (VAR_19 = VAR_10->num_param; VAR_19 < VAR_4; VAR_19++)
    VAR_10->param[VAR_19] = 1;
   VAR_10->num_param = 0;
   return;

  case 'M':
   FUNC_20(VAR_9, 1, VAR_15->scr_map[0x20],
       VAR_10->cur_attr, 0, 0);
   break;





  case 'c':
   VAR_10->attr_mask = VAR_5;
   VAR_10->cur_color = VAR_10->std_color
           = VAR_10->dflt_std_color;
   VAR_10->rev_color = VAR_10->dflt_rev_color;
   VAR_10->cur_attr = FUNC_1(VAR_10);
   FUNC_2(VAR_9,
       144 | 145, -1, -1);
   FUNC_3(VAR_9);
   break;

  case '(':
   VAR_10->esc = 5;
   return;
  }
 } else if (VAR_10->esc == 2) {
  if (VAR_11 >= '0' && VAR_11 <= '9') {
   if (VAR_10->num_param < VAR_4) {
    if (VAR_10->last_param != VAR_10->num_param) {
     VAR_10->last_param = VAR_10->num_param;
     VAR_10->param[VAR_10->num_param] = 0;
    } else {
     VAR_10->param[VAR_10->num_param] *= 10;
    }
    VAR_10->param[VAR_10->num_param] += VAR_11 - '0';
    return;
   }
  }
  VAR_10->num_param = VAR_10->last_param + 1;
  switch (VAR_11) {

  case ';':
   if (VAR_10->num_param < VAR_4)
    return;
   break;

  case '=':
   VAR_10->esc = 3;
   VAR_10->last_param = -1;
   for (VAR_19 = VAR_10->num_param; VAR_19 < VAR_4; VAR_19++)
    VAR_10->param[VAR_19] = 1;
   VAR_10->num_param = 0;
   return;

  case 'A':
   FUNC_19(VAR_9, VAR_10->param[0], 0);
   break;

  case 'B':
   FUNC_13(VAR_9, VAR_10->param[0], 0);
   break;

  case 'C':
   FUNC_17(VAR_9, VAR_10->param[0]);
   break;

  case 'D':
   FUNC_16(VAR_9, VAR_10->param[0]);
   break;

  case 'E':
   VAR_20 = VAR_10->param[0];
   if (VAR_20 < 1)
    VAR_20 = 1;
   FUNC_4(VAR_9, 0, VAR_9->ypos + VAR_20);
   break;

  case 'F':
   VAR_20 = VAR_10->param[0];
   if (VAR_20 < 1)
    VAR_20 = 1;
   FUNC_4(VAR_9, 0, VAR_9->ypos - VAR_20);
   break;

  case 'f':
  case 'H':
   if (VAR_10->num_param == 0)
    FUNC_4(VAR_9, 0, 0);
   else if (VAR_10->num_param == 2)
    FUNC_4(VAR_9, VAR_10->param[1] - 1,
            VAR_10->param[0] - 1);
   break;

  case 'J':
   if (VAR_10->num_param == 0)
    VAR_20 = 0;
   else
    VAR_20 = VAR_10->param[0];
   FUNC_9(VAR_9, VAR_20, VAR_15->scr_map[0x20],
     VAR_10->cur_attr);
   break;

  case 'K':
   if (VAR_10->num_param == 0)
    VAR_20 = 0;
   else
    VAR_20 = VAR_10->param[0];
   FUNC_8(VAR_9, VAR_20, VAR_15->scr_map[0x20],
     VAR_10->cur_attr);
   break;

  case 'L':
   FUNC_15(VAR_9, VAR_9->ypos, VAR_10->param[0],
      VAR_15->scr_map[0x20], VAR_10->cur_attr, 0);
   break;

  case 'M':
   FUNC_12(VAR_9, VAR_9->ypos, VAR_10->param[0],
      VAR_15->scr_map[0x20], VAR_10->cur_attr, 0);
   break;

  case 'P':
   FUNC_11(VAR_9, VAR_10->param[0],
      VAR_15->scr_map[0x20], VAR_10->cur_attr);
   break;

  case '@':
   FUNC_14(VAR_9, VAR_10->param[0],
      VAR_15->scr_map[0x20], VAR_10->cur_attr);
   break;

  case 'S':
   FUNC_12(VAR_9, 0, VAR_10->param[0],
      VAR_15->scr_map[0x20], VAR_10->cur_attr, 0);
   break;

  case 'T':
   FUNC_15(VAR_9, 0, VAR_10->param[0],
      VAR_15->scr_map[0x20], VAR_10->cur_attr, 0);
   break;

  case 'X':
   VAR_20 = VAR_10->param[0];
   if (VAR_20 < 1)
    VAR_20 = 1;
   if (VAR_20 > VAR_9->xsize - VAR_9->xpos)
    VAR_20 = VAR_9->xsize - VAR_9->xpos;
   FUNC_21(&VAR_9->vtb, VAR_9->cursor_pos, VAR_20,
         VAR_15->scr_map[0x20], VAR_10->cur_attr);
   FUNC_0(VAR_9, VAR_9->cursor_pos);
   FUNC_0(VAR_9, VAR_9->cursor_pos + VAR_20 - 1);
   break;

  case 'Z':
   FUNC_7(VAR_9, VAR_10->param[0]);
   break;

  case '`':
   FUNC_10(VAR_9, VAR_10->param[0]);
   break;

  case 'a':
   FUNC_17(VAR_9, VAR_10->param[0]);
   break;

  case 'd':
   FUNC_18(VAR_9, VAR_10->param[0]);
   break;

  case 'e':
   FUNC_13(VAR_9, VAR_10->param[0], 0);
   break;

  case 'm':
   if (VAR_10->num_param == 0) {
    VAR_10->attr_mask = VAR_5;
    VAR_10->cur_color = VAR_10->std_color;
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   }
   for (VAR_19 = 0; VAR_19 < VAR_10->num_param; VAR_19++) {
    switch (VAR_20 = VAR_10->param[VAR_19]) {
    case 0:
     VAR_10->attr_mask = VAR_5;
     VAR_10->cur_color = VAR_10->std_color;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 1:
     VAR_10->attr_mask |= VAR_2;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 4:
     VAR_10->attr_mask |= VAR_7;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 5:
     VAR_10->attr_mask |= VAR_1;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 7:
     VAR_10->attr_mask |= VAR_6;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 22:
     VAR_10->attr_mask &= ~VAR_2;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 24:
     VAR_10->attr_mask &= ~VAR_7;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 25:
     VAR_10->attr_mask &= ~VAR_1;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 27:
     VAR_10->attr_mask &= ~VAR_6;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 30: case 31:
    case 32: case 33: case 34:
    case 35: case 36: case 37:
     VAR_10->attr_mask |= VAR_3;
     VAR_10->cur_color.fg = VAR_12[VAR_20 - 30];
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 39:
     VAR_10->attr_mask &= ~(VAR_3|VAR_2);
     VAR_10->cur_color.fg = VAR_10->std_color.fg;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    case 40: case 41:
    case 42: case 43: case 44:
    case 45: case 46: case 47:
     VAR_10->attr_mask |= VAR_0;
     VAR_10->cur_color.bg = VAR_12[VAR_20 - 40];
     VAR_10->cur_attr = FUNC_1(VAR_10);
         break;
    case 49:
     VAR_10->attr_mask &= ~VAR_0;
     VAR_10->cur_color.bg = VAR_10->std_color.bg;
     VAR_10->cur_attr = FUNC_1(VAR_10);
     break;
    }
   }
   break;

  case 's':
   VAR_10->saved_xpos = VAR_9->xpos;
   VAR_10->saved_ypos = VAR_9->ypos;
   break;

  case 'u':
   if (VAR_10->saved_xpos >= 0 && VAR_10->saved_ypos >= 0)
    FUNC_4(VAR_9, VAR_10->saved_xpos,
            VAR_10->saved_ypos);
   break;

  case 'x':
   if (VAR_10->num_param == 0)
    VAR_20 = 0;
   else
    VAR_20 = VAR_10->param[0];
   switch (VAR_20) {
   case 0:
    VAR_10->attr_mask = VAR_5;
    VAR_10->cur_color = VAR_10->std_color
            = VAR_10->dflt_std_color;
    VAR_10->rev_color = VAR_10->dflt_rev_color;
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   case 1:
    VAR_10->attr_mask &= ~VAR_0;
    VAR_10->cur_color.bg = VAR_10->std_color.bg
        = VAR_12[VAR_10->param[1] & 0x0f];
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   case 2:
    VAR_10->attr_mask &= ~VAR_3;
    VAR_10->cur_color.fg = VAR_10->std_color.fg
        = VAR_12[VAR_10->param[1] & 0x0f];
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   case 3:
    VAR_10->attr_mask &= ~(VAR_3 | VAR_0);
    VAR_10->cur_color.fg = VAR_10->std_color.fg
        = VAR_10->param[1] & 0x0f;
    VAR_10->cur_color.bg = VAR_10->std_color.bg
        = (VAR_10->param[1] >> 4) & 0x0f;
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   case 5:
    VAR_10->rev_color.bg = VAR_12[VAR_10->param[1] & 0x0f];
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   case 6:
    VAR_10->rev_color.fg = VAR_12[VAR_10->param[1] & 0x0f];
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   case 7:
    VAR_10->rev_color.fg = VAR_10->param[1] & 0x0f;
    VAR_10->rev_color.bg = (VAR_10->param[1] >> 4) & 0x0f;
    VAR_10->cur_attr = FUNC_1(VAR_10);
    break;
   }
   break;

  case 'z':
   if (VAR_10->num_param == 1)
    FUNC_6(VAR_15, VAR_10->param[0]);
   break;
  }
 } else if (VAR_10->esc == 3) {
  if (VAR_11 >= '0' && VAR_11 <= '9') {
   if (VAR_10->num_param < VAR_4) {
    if (VAR_10->last_param != VAR_10->num_param) {
     VAR_10->last_param = VAR_10->num_param;
     VAR_10->param[VAR_10->num_param] = 0;
    } else {
     VAR_10->param[VAR_10->num_param] *= 10;
    }
    VAR_10->param[VAR_10->num_param] += VAR_11 - '0';
    return;
   }
  }
  VAR_10->num_param = VAR_10->last_param + 1;
  switch (VAR_11) {

  case ';':
   if (VAR_10->num_param < VAR_4)
    return;
   break;

  case 'A':
   if (VAR_10->num_param == 1) {
    VAR_9->border=VAR_10->param[0] & 0xff;
    if (VAR_9 == VAR_15->cur_scp)
     FUNC_5(VAR_9, VAR_9->border);
   }
   break;

  case 'B':
   if (VAR_10->num_param == 2) {
    VAR_9->bell_pitch = VAR_10->param[0];
    VAR_9->bell_duration =
        (VAR_10->param[1] * VAR_8 + 99) / 100;
   }
   break;

  case 'C':
   VAR_19 = FUNC_22();
   VAR_20 = VAR_10->num_param;
   VAR_16 = VAR_10->param[0];
   VAR_17 = VAR_10->param[1];
   VAR_18 = VAR_10->param[2];
   switch (VAR_20) {
   case 1:
    if (VAR_16 < sizeof(VAR_13)/sizeof(VAR_13[0]))
     VAR_16 = VAR_13[VAR_16];
    else
     VAR_16 = VAR_13[VAR_16 & 0x3];
    FUNC_2(VAR_9, VAR_16, -1, -1);
    break;
   case 2:
    VAR_18 = 0;
    VAR_16 &= 0x1f;
    VAR_17 &= 0x1f;

   case 3:
    if (VAR_18 == 0)
     FUNC_2(VAR_9, -1,
         VAR_9->font_size - VAR_17 - 1,
         VAR_17 - VAR_16 + 1);
    else if (VAR_18 == 1)
     FUNC_2(VAR_9, -1,
         VAR_16, VAR_17 - VAR_16 + 1);
    break;
   }
   FUNC_23(VAR_19);
   break;

  case 'F':
   if (VAR_10->num_param == 1) {
    VAR_10->attr_mask &= ~VAR_3;
    VAR_10->cur_color.fg = VAR_10->std_color.fg
        = VAR_10->param[0] & 0x0f;
    VAR_10->cur_attr = FUNC_1(VAR_10);
   }
   break;

  case 'G':
   if (VAR_10->num_param == 1) {
    VAR_10->attr_mask &= ~VAR_0;
    VAR_10->cur_color.bg = VAR_10->std_color.bg
        = VAR_10->param[0] & 0x0f;
    VAR_10->cur_attr = FUNC_1(VAR_10);
   }
   break;

  case 'H':
   if (VAR_10->num_param == 1) {
    VAR_10->rev_color.fg = VAR_10->param[0] & 0x0f;
    VAR_10->cur_attr = FUNC_1(VAR_10);
   }
   break;

  case 'I':
   if (VAR_10->num_param == 1) {
    VAR_10->rev_color.bg = VAR_10->param[0] & 0x0f;
    VAR_10->cur_attr = FUNC_1(VAR_10);
   }
   break;

  case 'S':
   VAR_19 = FUNC_22();
   VAR_20 = VAR_10->num_param;
   VAR_16 = VAR_10->param[0];
   switch (VAR_20) {
   case 0:
    VAR_16 = 0;

   case 1:
    if (VAR_16 < sizeof(VAR_14)/sizeof(VAR_14[0]))
     FUNC_2(VAR_9,
         VAR_14[VAR_16], -1, -1);
    break;
   }
   FUNC_23(VAR_19);
   break;
  }




 } else if (VAR_10->esc == 5) {
  switch (VAR_11) {
  case 'B':
   break;

  default:
   break;
  }
 }
 VAR_10->esc = 0;
}
