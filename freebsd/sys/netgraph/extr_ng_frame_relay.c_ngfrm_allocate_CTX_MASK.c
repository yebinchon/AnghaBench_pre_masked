
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ctxinfo {int flags; int dlci; } ;
typedef TYPE_1__* sc_p ;
struct TYPE_3__ {int* ALT; struct ctxinfo* channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ctxinfo*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(sc_p VAR_5, int VAR_6)
{
 u_int VAR_7 = -1;
 volatile struct ctxinfo *VAR_8 = ((void*)0);


 if (VAR_6 > 1023)
  return (-1);


 if (VAR_5->ALT[VAR_6]) {
  if ((VAR_7 = VAR_5->ALT[VAR_6] & VAR_2) < VAR_4) {
   VAR_8 = VAR_5->channel + VAR_7;
  } else {
   VAR_7 = -1;
   VAR_5->ALT[VAR_6] = 0;
  }
 }





 if (VAR_8 == ((void*)0)) {
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {



   if ((VAR_5->channel[VAR_7].flags & VAR_0) == 0) {
    FUNC_0(VAR_5->channel + VAR_7,
          sizeof(struct ctxinfo));
    VAR_8 = VAR_5->channel + VAR_7;
    VAR_5->ALT[VAR_6] = VAR_7 | VAR_1;
    VAR_5->channel[VAR_7].dlci = VAR_6;
    VAR_5->channel[VAR_7].flags = VAR_0;
    break;
   }
  }
 }





 if (!VAR_8) {
  FUNC_1(VAR_3, "No CTX available for dlci %d\n", VAR_6);
  return (-1);
 }
 return (VAR_7);
}
