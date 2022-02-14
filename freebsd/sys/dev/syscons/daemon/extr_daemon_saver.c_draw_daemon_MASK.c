
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * scr_map; TYPE_1__* cur_scp; } ;
typedef TYPE_2__ sc_softc_t ;
struct TYPE_4__ {int xsize; int scr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int** VAR_8 ;
 char** VAR_9 ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(sc_softc_t *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15,
     int VAR_16, int VAR_17)
{
 int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21;

 for (VAR_19 = VAR_15; VAR_19 < VAR_17; VAR_19++) {
  if (VAR_13 < 0)
   VAR_20 = VAR_14;
  else
   VAR_20 = VAR_1 - VAR_16;
  if (VAR_20 >= FUNC_2(VAR_9[VAR_19]))
   continue;
  for (VAR_18 = VAR_14; (VAR_18 < VAR_16) && (VAR_9[VAR_19][VAR_20] != '\0'); VAR_18++, VAR_20++) {
   switch (VAR_8[VAR_19][VAR_20]) {
   case 'R': VAR_21 = VAR_5 | VAR_0; break;
   case 'Y': VAR_21 = VAR_7 | VAR_0; break;
   case 'B': VAR_21 = VAR_3 | VAR_0; break;
   case 'W': VAR_21 = VAR_4 | VAR_0; break;
   case 'C': VAR_21 = VAR_2 | VAR_0; break;
   default: VAR_21 = VAR_6 | VAR_0; break;
   }
   if (VAR_13 < 0) {
    FUNC_1(&VAR_10->cur_scp->scr,
         (VAR_12 + VAR_19)*VAR_10->cur_scp->xsize
       + VAR_11 + VAR_18,
         VAR_10->scr_map[VAR_9[VAR_19][VAR_20]],
         FUNC_0(VAR_21));
   } else {
    FUNC_1(&VAR_10->cur_scp->scr,
         (VAR_12 + VAR_19)*VAR_10->cur_scp->xsize
      + VAR_11 + VAR_1
      - VAR_20 - 1,
         VAR_10->scr_map[FUNC_3(VAR_9[VAR_19][VAR_20])],
         FUNC_0(VAR_21));
   }
  }
 }
}
