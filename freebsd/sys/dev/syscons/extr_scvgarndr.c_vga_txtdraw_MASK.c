
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_3__ {int xsize; int ysize; int scr; int vtb; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void
FUNC_6(scr_stat *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 vm_offset_t VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2 + VAR_3 > VAR_1->xsize*VAR_1->ysize)
  VAR_3 = VAR_1->xsize*VAR_1->ysize - VAR_2;

 if (VAR_4) {
  for (VAR_5 = FUNC_3(&VAR_1->scr, VAR_2); VAR_3-- > 0; ++VAR_2) {
   VAR_6 = FUNC_2(&VAR_1->vtb, VAR_2);
   VAR_7 = FUNC_1(&VAR_1->vtb, VAR_2);
   VAR_7 = FUNC_5(VAR_7, VAR_0);
   VAR_5 = FUNC_4(&VAR_1->scr, VAR_5, VAR_6, VAR_7);
  }
 } else {
  FUNC_0(&VAR_1->vtb, VAR_2, &VAR_1->scr, VAR_2, VAR_3);
 }
}
