
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sc; TYPE_1__* rndr; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_5__ {int (* draw_border ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

void
FUNC_3(scr_stat *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0->sc);
    (*VAR_0->rndr->draw_border)(VAR_0, VAR_1);
    FUNC_1(VAR_0->sc);
}
