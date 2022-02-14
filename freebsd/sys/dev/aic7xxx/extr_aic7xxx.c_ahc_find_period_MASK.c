
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahc_syncrate {size_t sxfr_u2; size_t period; size_t sxfr; int * rate; } ;
struct ahc_softc {int features; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct ahc_syncrate* VAR_3 ;

u_int
FUNC_0(struct ahc_softc *VAR_4, u_int VAR_5, u_int VAR_6)
{
 struct ahc_syncrate *VAR_7;

 if ((VAR_4->features & VAR_0) != 0)
  VAR_5 &= VAR_2;
 else
  VAR_5 &= VAR_1;

 VAR_7 = &VAR_3[VAR_6];
 while (VAR_7->rate != ((void*)0)) {

  if ((VAR_4->features & VAR_0) != 0) {
   if (VAR_7->sxfr_u2 == 0)
    break;
   else if (VAR_5 == (VAR_7->sxfr_u2 & VAR_2))
    return (VAR_7->period);
  } else if (VAR_5 == (VAR_7->sxfr & VAR_1)) {
    return (VAR_7->period);
  }
  VAR_7++;
 }
 return (0);
}
