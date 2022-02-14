
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_5__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_7__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_3__ term_rect_t ;
typedef size_t term_color_t ;
typedef scalar_t__ term_char_t ;
struct vt_buf {int dummy; } ;
struct vt_window {struct vt_buf vw_buf; } ;
struct vt_device {scalar_t__* vd_drawn; size_t* vd_drawnfg; size_t* vd_drawnbg; struct vga_softc* vd_softc; } ;
struct vga_softc {int dummy; } ;


 int FUNC_0 (struct vga_softc*,scalar_t__,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct vt_buf const*,unsigned int,unsigned int) ;
 int FUNC_4 (struct vt_buf const*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,size_t*,size_t*) ;

__attribute__((used)) static void
FUNC_7(struct vt_device *VAR_2, const struct vt_window *VAR_3,
    const term_rect_t *VAR_4)
{
 struct vga_softc *VAR_5;
 const struct vt_buf *VAR_6;
 unsigned int VAR_7, VAR_8;
 term_char_t VAR_9;
 term_color_t VAR_10, VAR_11;
 uint8_t VAR_12, VAR_13;
 size_t VAR_14;

 VAR_5 = VAR_2->vd_softc;
 VAR_6 = &VAR_3->vw_buf;

 for (VAR_8 = VAR_4->tr_begin.tp_row; VAR_8 < VAR_4->tr_end.tp_row; ++VAR_8) {
  for (VAR_7 = VAR_4->tr_begin.tp_col;
      VAR_7 < VAR_4->tr_end.tp_col;
      ++VAR_7) {




   VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_7);
   FUNC_6(VAR_9, FUNC_4(VAR_6, VAR_8, VAR_7),
       &VAR_10, &VAR_11);

   VAR_14 = VAR_8 * FUNC_1(VAR_0) + VAR_7;
   if (VAR_2->vd_drawn && (VAR_2->vd_drawn[VAR_14] == VAR_9) &&
       VAR_2->vd_drawnfg && (VAR_2->vd_drawnfg[VAR_14] == VAR_10) &&
       VAR_2->vd_drawnbg && (VAR_2->vd_drawnbg[VAR_14] == VAR_11))
    continue;






   VAR_12 = FUNC_5(FUNC_2(VAR_9));


   VAR_13 =
       VAR_1[VAR_11] << 4 |
       VAR_1[VAR_10];

   FUNC_0(VAR_5, (VAR_8 * 80 + VAR_7) * 2 + 0,
       VAR_12 + ((uint16_t)(VAR_13) << 8));

   if (VAR_2->vd_drawn)
    VAR_2->vd_drawn[VAR_14] = VAR_9;
   if (VAR_2->vd_drawnfg)
    VAR_2->vd_drawnfg[VAR_14] = VAR_10;
   if (VAR_2->vd_drawnbg)
    VAR_2->vd_drawnbg[VAR_14] = VAR_11;
  }
 }
}
