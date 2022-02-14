
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ysize; int * history; int history_pos; TYPE_1__* sc; int xsize; } ;
typedef TYPE_2__ scr_stat ;
typedef int sc_vtb_t ;
struct TYPE_4__ {int * scr_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(scr_stat *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{






 sc_vtb_t *VAR_12;
 sc_vtb_t *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_9 <= 0)
  VAR_9 = VAR_4;


 VAR_9 = FUNC_2(VAR_9, VAR_8->ysize);


 VAR_12 = VAR_13 = VAR_8->history;
 VAR_8->history = ((void*)0);


 VAR_16 = 0;
 if (VAR_13) {
  VAR_14 = FUNC_7(VAR_12);
  VAR_15 = FUNC_2(VAR_4, VAR_10);
  if (VAR_14 > VAR_15)
   VAR_16 = VAR_14 - VAR_15;
 }


 VAR_15 = FUNC_2(VAR_4, VAR_8->ysize);
 if (VAR_9 > VAR_15) {
  if (VAR_9 - VAR_15 > VAR_7 + VAR_16) {

   VAR_8->history = VAR_13;
   return VAR_0;
  }
 }


 VAR_12 = (sc_vtb_t *)FUNC_3(sizeof(*VAR_12),
         VAR_1,
         (VAR_11) ? VAR_3 : VAR_2);
 if (VAR_12 != ((void*)0)) {
  if (VAR_9 > VAR_15)
   VAR_7 -= VAR_9 - VAR_15;

  FUNC_6(VAR_12, VAR_6, VAR_8->xsize, VAR_9,
       ((void*)0), VAR_11);

  FUNC_4(VAR_12, VAR_8->sc->scr_map[0x20],
        VAR_5 << 8);
  if (VAR_13 != ((void*)0))
   FUNC_0(VAR_13, VAR_12);
  VAR_8->history_pos = FUNC_8(VAR_12);
 } else {
  VAR_8->history_pos = 0;
 }


 if (VAR_13 != ((void*)0)) {
  VAR_7 += VAR_16;
  FUNC_5(VAR_13);
  FUNC_1(VAR_13, VAR_1);
 }

 VAR_8->history = VAR_12;

 return 0;
}
