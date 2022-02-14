
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_char ;
struct TYPE_5__ {int * scr_map; TYPE_1__* cur_scp; } ;
typedef TYPE_2__ sc_softc_t ;
struct TYPE_4__ {int xsize; int scr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(sc_softc_t *VAR_2, int VAR_3, int VAR_4, int VAR_5, u_char *VAR_6, int VAR_7)
{
 int VAR_8;

 for (VAR_8 = VAR_5; VAR_8 < VAR_7; VAR_8++)
  FUNC_1(&VAR_2->cur_scp->scr,
       VAR_4*VAR_2->cur_scp->xsize + VAR_3 + VAR_8,
       VAR_2->scr_map[VAR_6[VAR_8]], FUNC_0(VAR_1 | VAR_0));
}
