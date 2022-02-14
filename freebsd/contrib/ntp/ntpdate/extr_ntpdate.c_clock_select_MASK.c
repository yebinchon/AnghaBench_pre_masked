
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
typedef scalar_t__ u_fp ;
struct TYPE_4__ {scalar_t__ l_ui; } ;
struct TYPE_3__ {scalar_t__ l_ui; } ;
struct server {scalar_t__ stratum; scalar_t__ delay; scalar_t__ leap; scalar_t__ trust; int dispersion; int soffset; int precision; int srcadr; TYPE_2__ reftime; TYPE_1__ org; struct server* next_server; } ;
typedef int s_fp ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 struct server* VAR_10 ;

__attribute__((used)) static struct server *
FUNC_3(void)
{
 struct server *VAR_11;
 u_int VAR_12;
 s_fp VAR_13;
 u_int VAR_14;
 u_int VAR_15;
 u_int VAR_16;
 u_int VAR_17;
 int VAR_18;
 s_fp VAR_19;
 struct server *VAR_20[VAR_5];
 u_fp VAR_21[VAR_5];
 struct server *VAR_22;
 VAR_12 = 0;
 for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->next_server) {
  if (VAR_11->stratum == 0) {
   if (VAR_9)
    FUNC_2("%s: Server dropped: no data\n", FUNC_1(&VAR_11->srcadr));
   continue;
  }
  if (VAR_11->stratum > VAR_3) {
   if (VAR_9)
    FUNC_2("%s: Server dropped: strata too high\n", FUNC_1(&VAR_11->srcadr));
   continue;
  }
  if (VAR_11->delay > VAR_8) {
   if (VAR_9)
    FUNC_2("%s: Server dropped: server too far away\n",
     FUNC_1(&VAR_11->srcadr));
   continue;
  }
  if (VAR_11->leap == VAR_1) {
   if (VAR_9)
    FUNC_2("%s: Server dropped: leap not in sync\n", FUNC_1(&VAR_11->srcadr));
   continue;
  }
  if (!FUNC_0(&VAR_11->org, &VAR_11->reftime)) {
   if (VAR_9)
    FUNC_2("%s: Server dropped: server is very broken\n",
           FUNC_1(&VAR_11->srcadr));
   continue;
  }
  if ((VAR_11->org.l_ui - VAR_11->reftime.l_ui)
      >= VAR_4) {
   if (VAR_9)
    FUNC_2("%s: Server dropped: server has gone too long without sync\n",
           FUNC_1(&VAR_11->srcadr));
   continue;
  }
  if (VAR_11->trust != 0) {
   if (VAR_9)
    FUNC_2("%s: Server dropped: Server is untrusted\n",
           FUNC_1(&VAR_11->srcadr));
   continue;
  }





  VAR_13 = VAR_11->dispersion + VAR_11->dispersion;
  for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
   if (VAR_11->stratum <= VAR_20[VAR_15]->stratum)
   break;
  for ( ; VAR_15 < VAR_12; VAR_15++) {
   if (VAR_11->stratum < VAR_20[VAR_15]->stratum)
    break;
   if (VAR_13 < (s_fp) VAR_21[VAR_15])
    break;
  }





  if (VAR_15 >= VAR_6)
   continue;
  for (VAR_16 = VAR_12; VAR_16 > VAR_15; VAR_16--)
   if (VAR_16 < VAR_6) {
    VAR_20[VAR_16] = VAR_20[VAR_16-1];
    VAR_21[VAR_16]
     = VAR_21[VAR_16-1];
   }

  VAR_20[VAR_15] = VAR_11;
  VAR_21[VAR_15] = VAR_13;
  if (VAR_12 < VAR_6)
   VAR_12++;
 }





 VAR_14 = 0;
 for (VAR_15 = 1; VAR_15 < VAR_12; VAR_15++)
  if (VAR_20[VAR_15]->stratum > VAR_20[VAR_15-1]->stratum) {
   VAR_14++;
   if (2 == VAR_14) {
    VAR_12 = VAR_15;
    break;
   }
  }
 if (0 == VAR_12)
  VAR_22 = ((void*)0);
 else if (1 == VAR_12) {
  VAR_22 = VAR_20[0];
 } else {




  for (VAR_15 = 0; VAR_15 < VAR_12-1; VAR_15++)
   for (VAR_16 = VAR_15+1; VAR_16 < VAR_12; VAR_16++) {
    if (VAR_20[VAR_15]->stratum <
        VAR_20[VAR_16]->stratum)

     break;
    if (VAR_20[VAR_15]->delay <
        VAR_20[VAR_16]->delay)
     continue;
    VAR_11 = VAR_20[VAR_15];
    VAR_20[VAR_15] = VAR_20[VAR_16];
    VAR_20[VAR_16] = VAR_11;
   }




  VAR_19 = (VAR_0 >> (-(int)VAR_2))
   + VAR_7;




  while (VAR_12 > 1) {
   for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
    VAR_21[VAR_17] = 0;
    for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
     if (VAR_16 == VAR_17)
      continue;
     VAR_13 = VAR_20[VAR_16]->soffset -
         VAR_20[VAR_17]->soffset;
     if (VAR_13 < 0)
      VAR_13 = -VAR_13;




     for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
      VAR_13 = (VAR_13>>1) + (VAR_13>>2);
     VAR_21[VAR_17] += VAR_13;
    }
   }







   VAR_15 = 0;
   VAR_18 = VAR_20[0]->precision;;
   for (VAR_16 = 1; VAR_16 < VAR_12; VAR_16++) {
    if (VAR_21[VAR_16] >= VAR_21[VAR_15])
     VAR_15 = VAR_16;
    if (VAR_18 > VAR_20[VAR_16]->precision)
     VAR_18 = VAR_20[VAR_16]->precision;
   }







   if ( (s_fp) VAR_21[VAR_15] < (VAR_19
        + (VAR_0 >> (-VAR_18))))
    break;
   for (VAR_16 = VAR_15 + 1; VAR_16 < VAR_12; VAR_16++)
    VAR_20[VAR_16-1] = VAR_20[VAR_16];
   VAR_12--;
  }





  VAR_22 = VAR_20[0];
 }




 return VAR_22;
}
