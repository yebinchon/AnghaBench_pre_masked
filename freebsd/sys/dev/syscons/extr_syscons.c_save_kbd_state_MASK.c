
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
typedef int caddr_t ;
struct TYPE_4__ {int kbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(scr_stat *VAR_4)
{
    int VAR_5;
    int VAR_6;

    VAR_6 = FUNC_0(VAR_4->sc->kbd, VAR_2, (caddr_t)&VAR_5);
    if (VAR_6 == VAR_1)
 VAR_6 = VAR_0;
    if (VAR_6 == 0) {
 VAR_4->status &= ~VAR_3;
 VAR_4->status |= VAR_5;
    }
    return VAR_6;
}
