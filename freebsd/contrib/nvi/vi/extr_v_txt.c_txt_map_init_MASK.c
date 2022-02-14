
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sv_tm_soff; int sv_t_maxrows; int sv_t_minrows; int sv_t_rows; scalar_t__ sv_tm_coff; scalar_t__ sv_tm_lno; } ;
typedef TYPE_1__ VI_PRIVATE ;
struct TYPE_14__ {int t_maxrows; int t_minrows; int t_rows; } ;
struct TYPE_13__ {int soff; scalar_t__ coff; scalar_t__ lno; } ;
typedef TYPE_2__ SMAP ;
typedef TYPE_3__ SCR ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(SCR *VAR_2)
{
 SMAP *VAR_3;
 VI_PRIVATE *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (!FUNC_0(VAR_2)) {
  VAR_4->sv_tm_lno = VAR_1->lno;
  VAR_4->sv_tm_soff = VAR_1->soff;
  VAR_4->sv_tm_coff = VAR_1->coff;
  VAR_4->sv_t_maxrows = VAR_2->t_maxrows;
  VAR_4->sv_t_minrows = VAR_2->t_minrows;
  VAR_4->sv_t_rows = VAR_2->t_rows;





  if (FUNC_1(VAR_2))
   for (VAR_3 =
       VAR_0 + (VAR_2->t_maxrows - 1); VAR_1 < VAR_3; ++VAR_1) {
    VAR_1[1].lno = VAR_1[0].lno + 1;
    VAR_1[1].coff = VAR_0->coff;
    VAR_1[1].soff = 1;
   }


  VAR_1[1].lno = VAR_1[0].lno + 1;
  VAR_1[1].soff = 1;
  VAR_1[1].coff = 0;
  FUNC_2(&VAR_1[1]);
  ++VAR_1;


  VAR_2->t_rows = VAR_2->t_minrows = ++VAR_2->t_maxrows;
 }
 return (0);
}
