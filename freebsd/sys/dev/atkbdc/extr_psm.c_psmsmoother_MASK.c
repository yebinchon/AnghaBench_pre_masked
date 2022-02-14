
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ min_pressure; int max_width; int max_pressure; int margin_top; int margin_right; int margin_bottom; int margin_left; int na_top; int na_right; int na_bottom; int na_left; int window_min; int window_max; int multiplicator; int weight_current; int weight_previous; int weight_len_squared; int div_min; int div_max; int div_len; int vscroll_hor_area; int vscroll_ver_area; int two_finger_scroll; int max_x; int max_y; int natural_scroll; int vscroll_div_min; int vscroll_div_max; int weight_previous_na; int div_max_na; } ;
struct TYPE_13__ {scalar_t__ window_min; int in_vscroll; } ;
struct psm_softc {TYPE_2__ syninfo; TYPE_5__ gesture; TYPE_3__* smoother; } ;
struct TYPE_11__ {int active; int start_x; int start_y; int queue_cursor; scalar_t__ queue_len; int avg_dx; int avg_dy; int squelch_x; int squelch_y; int is_fuzzy; TYPE_1__* queue; } ;
typedef TYPE_3__ smoother_t ;
struct TYPE_12__ {int button; } ;
typedef TYPE_4__ mousestatus_t ;
typedef TYPE_5__ gesture_t ;
struct TYPE_14__ {scalar_t__ p; int flags; int x; int y; int w; } ;
typedef TYPE_6__ finger_t ;
struct TYPE_9__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(struct psm_softc *VAR_7, finger_t *VAR_8, int VAR_9,
    mousestatus_t *VAR_10, int *VAR_11, int *VAR_12)
{
 smoother_t *VAR_13 = &VAR_7->smoother[VAR_9];
 gesture_t *VAR_14 = &(VAR_7->gesture);





 if (VAR_8->p >= VAR_7->syninfo.min_pressure) {
  int VAR_15, VAR_16;
  int VAR_17, VAR_18, VAR_19;
  int VAR_20, VAR_21, VAR_22, VAR_23;
  int VAR_24, VAR_25;
  int VAR_26, VAR_27, VAR_28, VAR_29;
  int VAR_30, VAR_31, VAR_32, VAR_33;
  int VAR_34, VAR_35;
  int VAR_36;
  int VAR_37, VAR_38, VAR_39;
  int VAR_40, VAR_41, VAR_42;
  int VAR_43, VAR_44;
  int VAR_45;
  int VAR_46, VAR_47;
  int VAR_48, VAR_49, VAR_50;
  int VAR_51, VAR_52, VAR_53, VAR_54;
  int VAR_55;
  int VAR_56;



  VAR_24 = VAR_7->syninfo.max_width;
  VAR_25 = VAR_7->syninfo.max_pressure;
  VAR_26 = VAR_7->syninfo.margin_top;
  VAR_27 = VAR_7->syninfo.margin_right;
  VAR_28 = VAR_7->syninfo.margin_bottom;
  VAR_29 = VAR_7->syninfo.margin_left;
  VAR_30 = VAR_7->syninfo.na_top;
  VAR_31 = VAR_7->syninfo.na_right;
  VAR_32 = VAR_7->syninfo.na_bottom;
  VAR_33 = VAR_7->syninfo.na_left;
  VAR_34 = VAR_7->syninfo.window_min;
  VAR_35 = VAR_7->syninfo.window_max;
  VAR_36 = VAR_7->syninfo.multiplicator;
  VAR_37 = VAR_7->syninfo.weight_current;
  VAR_38 = VAR_7->syninfo.weight_previous;
  VAR_39 = VAR_7->syninfo.weight_len_squared;
  VAR_40 = VAR_7->syninfo.div_min;
  VAR_41 = VAR_7->syninfo.div_max;
  VAR_42 = VAR_7->syninfo.div_len;
  VAR_43 = VAR_7->syninfo.vscroll_hor_area;
  VAR_44 = VAR_7->syninfo.vscroll_ver_area;
  VAR_45 = VAR_7->syninfo.two_finger_scroll;
  VAR_46 = VAR_7->syninfo.max_x;
  VAR_47 = VAR_7->syninfo.max_y;
  VAR_56 = VAR_7->syninfo.natural_scroll;

  VAR_55 = (VAR_8->flags & VAR_5) != 0;


  VAR_15 = VAR_8->x;
  VAR_16 = VAR_8->y;





  if (VAR_15 <= VAR_29)
   VAR_15 = VAR_29;
  else if (VAR_15 >= VAR_46 - VAR_27)
   VAR_15 = VAR_46 - VAR_27;
  if (VAR_16 <= VAR_28)
   VAR_16 = VAR_28;
  else if (VAR_16 >= VAR_47 - VAR_26)
   VAR_16 = VAR_47 - VAR_26;


  if (VAR_13->active == 0) {
   FUNC_1(3, (VAR_0, "smoother%d: ---\n", VAR_9));


   VAR_13->start_x = VAR_15;
   VAR_13->start_y = VAR_16;
   VAR_20 = VAR_21 = 0;


   VAR_13->queue_cursor = VAR_6;
   VAR_13->queue_len = 0;


   VAR_13->avg_dx = 0;
   VAR_13->avg_dy = 0;


   VAR_13->squelch_x = 0;
   VAR_13->squelch_y = 0;


   VAR_13->active = 1;
  } else {

   VAR_17 = VAR_13->queue_cursor;
   VAR_20 = VAR_15 - VAR_13->queue[VAR_17].x;
   VAR_21 = VAR_16 - VAR_13->queue[VAR_17].y;
  }

  FUNC_1(3, (VAR_0, "smoother%d: ipacket: [%d, %d], %d, %d\n",
      VAR_9, VAR_15, VAR_16, VAR_8->p, VAR_8->w));


  VAR_17 = FUNC_0(VAR_13->queue_cursor - 1);
  VAR_13->queue[VAR_17].x = VAR_15;
  VAR_13->queue[VAR_17].y = VAR_16;
  VAR_13->queue_cursor = VAR_17;
  if (VAR_13->queue_len < VAR_6)
   VAR_13->queue_len++;
  FUNC_1(5, (VAR_0,
      "smoother%d: cursor[%d]: x=%d, y=%d, dx=%d, dy=%d\n",
      VAR_9, VAR_17, VAR_15, VAR_16, VAR_20, VAR_21));


  if (VAR_13->queue_len < VAR_14->window_min)
   return;

  VAR_49 = VAR_50 = VAR_38;
  VAR_51 = VAR_52 = VAR_41;

  if (VAR_14->in_vscroll) {

   VAR_40 = VAR_7->syninfo.vscroll_div_min;
   VAR_51 = VAR_52 = VAR_7->syninfo.vscroll_div_max;
  } else {






   if (VAR_15 <= VAR_33 || VAR_15 >= VAR_46 - VAR_31) {
    VAR_49 = VAR_7->syninfo.weight_previous_na;
    VAR_51 = VAR_7->syninfo.div_max_na;
   }

   if (VAR_16 <= VAR_32 || VAR_16 >= VAR_47 - VAR_30) {
    VAR_50 = VAR_7->syninfo.weight_previous_na;
    VAR_52 = VAR_7->syninfo.div_max_na;
   }
  }







  VAR_19 = FUNC_4(VAR_13->queue_len, VAR_35);
  VAR_18 = FUNC_0(VAR_17 + VAR_19 - 1);
  VAR_22 = FUNC_2(VAR_15 - VAR_13->queue[VAR_18].x) + 1;
  VAR_23 = FUNC_2(VAR_16 - VAR_13->queue[VAR_18].y) + 1;
  VAR_48 = (VAR_22 * VAR_22) + (VAR_23 * VAR_23);
  VAR_49 = FUNC_4(VAR_49,
      VAR_39 * VAR_49 / VAR_48);
  VAR_50 = FUNC_4(VAR_50,
      VAR_39 * VAR_50 / VAR_48);

  VAR_48 = (VAR_22 + VAR_23) / 2;
  VAR_53 = VAR_42 * VAR_51 / VAR_48;
  VAR_53 = FUNC_4(VAR_51, VAR_53);
  VAR_53 = FUNC_3(VAR_40, VAR_53);
  VAR_54 = VAR_42 * VAR_52 / VAR_48;
  VAR_54 = FUNC_4(VAR_52, VAR_54);
  VAR_54 = FUNC_3(VAR_40, VAR_54);

  FUNC_1(3, (VAR_0,
      "smoother%d: peer=%d, len=%d, weight=%d/%d, div=%d/%d\n",
      VAR_9, VAR_18, VAR_48, VAR_49, VAR_50,
      VAR_53, VAR_54));


  VAR_13->avg_dx =
      (VAR_37 * VAR_20 * VAR_36 +
       VAR_49 * VAR_13->avg_dx) /
      (VAR_37 + VAR_49);

  VAR_13->avg_dy =
      (VAR_37 * VAR_21 * VAR_36 +
       VAR_50 * VAR_13->avg_dy) /
      (VAR_37 + VAR_50);

  FUNC_1(5, (VAR_0,
      "smoother%d: avg_dx~=%d, avg_dy~=%d\n", VAR_9,
      VAR_13->avg_dx / VAR_36,
      VAR_13->avg_dy / VAR_36));


  VAR_13->squelch_x += VAR_13->avg_dx;
  VAR_22 = VAR_13->squelch_x / (VAR_53 * VAR_36);
  VAR_13->squelch_x = VAR_13->squelch_x %
      (VAR_53 * VAR_36);

  VAR_13->squelch_y += VAR_13->avg_dy;
  VAR_23 = VAR_13->squelch_y / (VAR_54 * VAR_36);
  VAR_13->squelch_y = VAR_13->squelch_y %
      (VAR_54 * VAR_36);

  switch(VAR_14->in_vscroll) {
  case 0:

   if (VAR_55 == VAR_13->is_fuzzy) {
    *VAR_11 += VAR_22;
    *VAR_12 += VAR_23;
   }

   FUNC_1(3, (VAR_0, "smoother%d: [%d, %d] -> [%d, %d]\n",
       VAR_9, VAR_20, VAR_21, VAR_22, VAR_23));
   break;
  case 1:
   if (VAR_23 != 0) {
    if (VAR_45 && VAR_56)
     VAR_10->button |= (VAR_23 > 0) ?
         VAR_2 : VAR_1;
    else
     VAR_10->button |= (VAR_23 > 0) ?
         VAR_1 : VAR_2;
   }
   break;
  case 2:
   if (VAR_22 != 0) {
    if (VAR_45 && VAR_56)
     VAR_10->button |= (VAR_22 > 0) ?
         VAR_3 : VAR_4;
    else
     VAR_10->button |= (VAR_22 > 0) ?
         VAR_4 : VAR_3;
   }
   break;
  }

  VAR_13->is_fuzzy = VAR_55;

 } else {





  VAR_13->active = 0;
 }
}
