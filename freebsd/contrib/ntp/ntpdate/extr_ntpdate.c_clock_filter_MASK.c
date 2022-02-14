
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_fp ;
struct server {scalar_t__* filter_delay; scalar_t__ delay; scalar_t__ dispersion; scalar_t__* filter_soffset; int offset; scalar_t__ soffset; int * filter_offset; } ;
typedef scalar_t__ s_fp ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(
 register struct server *VAR_3
 )
{
 register int VAR_4, VAR_5;
 int VAR_6[VAR_0];

 FUNC_0((0 < VAR_2) && (VAR_2 <= VAR_0));




 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_6[VAR_4] = VAR_4;

 for (VAR_4 = 0; VAR_4 < (VAR_2-1); VAR_4++) {
  for (VAR_5 = VAR_4+1; VAR_5 < VAR_2; VAR_5++) {
   if (VAR_3->filter_delay[VAR_6[VAR_5]] == 0)
    continue;
   if (VAR_3->filter_delay[VAR_6[VAR_4]] == 0
    || (VAR_3->filter_delay[VAR_6[VAR_4]]
    > VAR_3->filter_delay[VAR_6[VAR_5]])) {
    register int VAR_7;

    VAR_7 = VAR_6[VAR_4];
    VAR_6[VAR_4] = VAR_6[VAR_5];
    VAR_6[VAR_5] = VAR_7;
   }
  }
 }






 if (VAR_3->filter_delay[VAR_6[0]] == 0) {
  VAR_3->delay = 0;
  FUNC_2(&VAR_3->offset);
  VAR_3->soffset = 0;
  VAR_3->dispersion = VAR_1;
 } else {
  register s_fp VAR_8;

  VAR_3->delay = VAR_3->filter_delay[VAR_6[0]];
  VAR_3->offset = VAR_3->filter_offset[VAR_6[0]];
  VAR_3->soffset = FUNC_1(&VAR_3->offset);
  VAR_3->dispersion = 0;
  for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
   if (VAR_3->filter_delay[VAR_6[VAR_4]] == 0)
    VAR_8 = VAR_1;
   else {
    VAR_8 = VAR_3->filter_soffset[VAR_6[VAR_4]]
     - VAR_3->filter_soffset[VAR_6[0]];
    if (VAR_8 < 0)
     VAR_8 = -VAR_8;
    if (VAR_8 > VAR_1)
     VAR_8 = VAR_1;
   }



   VAR_3->dispersion += (u_fp)(VAR_8) >> VAR_4;
  }
 }



}
