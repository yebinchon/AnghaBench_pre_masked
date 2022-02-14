
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int sc_col; TYPE_1__* sc_smap; } ;
typedef TYPE_2__ VI_PRIVATE ;
struct TYPE_10__ {int cols; } ;
struct TYPE_8__ {int coff; int soff; } ;
typedef TYPE_3__ SCR ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;

int
FUNC_2(SCR *VAR_3, size_t *VAR_4)
{
 VI_PRIVATE *VAR_5;

 VAR_5 = FUNC_1(VAR_3);

 *VAR_4 = (FUNC_0(VAR_3, VAR_0) ?
     VAR_5->sc_smap->coff : (VAR_5->sc_smap->soff - 1) * VAR_3->cols) +
     VAR_5->sc_col - (FUNC_0(VAR_3, VAR_1) ? VAR_2 : 0);
 return (0);
}
