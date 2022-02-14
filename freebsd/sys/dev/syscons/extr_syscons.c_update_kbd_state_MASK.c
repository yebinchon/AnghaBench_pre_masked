
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
typedef int caddr_t ;
struct TYPE_4__ {int kbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(scr_stat *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    int VAR_9;

    if (VAR_7 != VAR_4) {
 VAR_9 = FUNC_0(VAR_5->sc->kbd, VAR_2, (caddr_t)&VAR_8);
 if (VAR_9 == VAR_1)
     VAR_9 = VAR_0;
 if (VAR_9)
     return VAR_9;
 VAR_8 &= ~VAR_7;
 VAR_8 |= VAR_6 & VAR_7;
    } else {
 VAR_8 = VAR_6 & VAR_4;
    }
    VAR_9 = FUNC_0(VAR_5->sc->kbd, VAR_3, (caddr_t)&VAR_8);
    if (VAR_9 == VAR_1)
 VAR_9 = VAR_0;
    return VAR_9;
}
