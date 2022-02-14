
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahc_syncrate {int sxfr_u2; size_t period; int * rate; } ;
struct ahc_softc {int features; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct ahc_syncrate* VAR_5 ;

struct ahc_syncrate *
FUNC_0(struct ahc_softc *VAR_6, u_int *VAR_7,
    u_int *VAR_8, u_int VAR_9)
{
 struct ahc_syncrate *VAR_10;

 if ((VAR_6->features & VAR_0) == 0)
  *VAR_8 &= ~VAR_3;


 if ((*VAR_8 & VAR_3) == 0
  && VAR_9 < VAR_1)
  VAR_9 = VAR_1;

 for (VAR_10 = &VAR_5[VAR_9];
      VAR_10->rate != ((void*)0);
      VAR_10++) {





  if ((VAR_6->features & VAR_2) != 0
   && (VAR_10->sxfr_u2 == 0))
   break;

  if (*VAR_7 <= VAR_10->period) {
   if (VAR_10 == &VAR_5[VAR_9])
    *VAR_7 = VAR_10->period;





    if ((VAR_10->sxfr_u2 & VAR_4) != 0)
    *VAR_8 &= ~VAR_3;
   break;
  }
 }

 if ((*VAR_7 == 0)
  || (VAR_10->rate == ((void*)0))
  || ((VAR_6->features & VAR_2) != 0
   && (VAR_10->sxfr_u2 == 0))) {

  *VAR_7 = 0;
  VAR_10 = ((void*)0);
  *VAR_8 &= ~VAR_3;
 }
 return (VAR_10);
}
