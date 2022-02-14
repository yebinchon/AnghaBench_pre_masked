
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_6__ {scalar_t__ height; } ;
struct TYPE_7__ {int status; int xsize; TYPE_2__ curs_attr; TYPE_1__* sc; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_5__ {int * adp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void
FUNC_1(scr_stat *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 video_adapter_t *VAR_8;

 VAR_8 = VAR_3->sc->adp;
 if (VAR_3->curs_attr.height <= 0)

  return;

 if (VAR_6) {
  if (!VAR_5) {
   VAR_3->status |= VAR_1;
   FUNC_0(VAR_8, VAR_4%VAR_3->xsize, VAR_4/VAR_3->xsize);
  } else if (++VAR_2 & 4) {
   VAR_2 = 0;
   VAR_3->status ^= VAR_1;
   if(VAR_3->status & VAR_1)
    FUNC_0(VAR_8, VAR_4%VAR_3->xsize,
        VAR_4/VAR_3->xsize);
   else
    FUNC_0(VAR_8, -1, -1);
  }
 } else {
  if (VAR_3->status & VAR_1)
   FUNC_0(VAR_8, VAR_4%VAR_3->xsize, VAR_4/VAR_3->xsize);
  VAR_3->status &= ~VAR_1;
 }
 if (VAR_5)
  VAR_3->status |= VAR_0;
 else
  VAR_3->status &= ~VAR_0;
}
