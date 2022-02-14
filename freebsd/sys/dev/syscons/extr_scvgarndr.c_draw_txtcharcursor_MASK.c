
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_6__ {int flags; int base; scalar_t__ height; } ;
struct TYPE_7__ {int font_size; int scr; TYPE_1__ curs_attr; TYPE_3__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_8__ {unsigned char* font_8; unsigned char* font_16; unsigned char* font_14; int cursor_char; int adp; } ;
typedef TYPE_3__ sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int,int,unsigned char*,int,int) ;

__attribute__((used)) static void
FUNC_6(scr_stat *VAR_2, int VAR_3, u_short VAR_4, u_short VAR_5, int VAR_6)
{
 sc_softc_t *VAR_7;

 VAR_7 = VAR_2->sc;


 if (VAR_2->curs_attr.flags & VAR_0) {
  unsigned char *VAR_8;
  int VAR_9;
  int VAR_10;

  if (VAR_2->font_size < 14) {
   VAR_8 = VAR_7->font_8;
   VAR_9 = 8;
  } else if (VAR_2->font_size >= 16) {
   VAR_8 = VAR_7->font_16;
   VAR_9 = 16;
  } else {
   VAR_8 = VAR_7->font_14;
   VAR_9 = 14;
  }
  if (VAR_2->curs_attr.base >= VAR_9)
   return;
  if (VAR_6)
   VAR_5 = FUNC_4(VAR_5, VAR_1);






  FUNC_0(VAR_8 + VAR_4*VAR_9, VAR_8 + VAR_7->cursor_char*VAR_9, VAR_9);
  VAR_8 = VAR_8 + VAR_7->cursor_char*VAR_9;
  for (VAR_10 = FUNC_1(VAR_9 - VAR_2->curs_attr.base - VAR_2->curs_attr.height, 0);
   VAR_10 < VAR_9 - VAR_2->curs_attr.base; ++VAR_10) {
   VAR_8[VAR_10] ^= 0xff;
  }

  FUNC_5(VAR_7->adp, 0, VAR_9, 8, VAR_8, VAR_7->cursor_char, 1);
  FUNC_2(&VAR_2->scr, VAR_3, VAR_7->cursor_char, VAR_5);
 } else

 {
  if (VAR_6)
   VAR_5 = FUNC_4(VAR_5, VAR_1);
  VAR_5 = FUNC_3(VAR_2, VAR_5, VAR_1);
  FUNC_2(&VAR_2->scr, VAR_3, VAR_4, VAR_5);
 }
}
