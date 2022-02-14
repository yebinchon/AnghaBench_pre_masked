
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_6__ {scalar_t__ height; } ;
struct TYPE_8__ {int status; int xsize; int vtb; int scr; TYPE_2__* sc; TYPE_1__ curs_attr; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_7__ {int * adp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int,int ,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static void
FUNC_6(scr_stat *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 video_adapter_t *VAR_8;
 int VAR_9;

 if (VAR_3->curs_attr.height <= 0)
  return;

 VAR_8 = VAR_3->sc->adp;
 if (VAR_5) {
  VAR_3->status |= VAR_1;
  if (VAR_6) {
   VAR_3->status |= VAR_2;
   FUNC_5(VAR_8, VAR_4%VAR_3->xsize,
       VAR_4/VAR_3->xsize);
  } else {
   if (VAR_3->status & VAR_2)
    FUNC_5(VAR_8, -1, -1);
   VAR_3->status &= ~VAR_2;
  }
 } else {
  VAR_3->status &= ~VAR_1;
  if (VAR_6) {
   VAR_3->status |= VAR_2;
   FUNC_0(VAR_3, VAR_4,
        FUNC_2(&VAR_3->vtb, VAR_4),
        FUNC_1(&VAR_3->vtb, VAR_4),
        VAR_7);
  } else {
   VAR_9 = FUNC_1(&VAR_3->vtb, VAR_4);
   if (VAR_7)
    VAR_9 = FUNC_4(VAR_9, VAR_0);
   if (VAR_3->status & VAR_2)
    FUNC_3(&VAR_3->scr, VAR_4,
         FUNC_2(&VAR_3->vtb, VAR_4),
         VAR_9);
   VAR_3->status &= ~VAR_2;
  }
 }
}
