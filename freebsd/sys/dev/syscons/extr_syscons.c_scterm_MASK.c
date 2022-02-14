
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * ts; TYPE_1__* tsw; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_10__ {int flags; int keyboard; int adapter; int * font_16; int * font_14; int * font_8; int * tty; int * dev; int video_mtx; int adp; int kbd; } ;
typedef TYPE_3__ sc_softc_t ;
struct TYPE_8__ {int (* te_term ) (TYPE_2__*,int **) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int,int) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int **) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(int VAR_3, int VAR_4)
{
    sc_softc_t *VAR_5;
    scr_stat *VAR_6;

    VAR_5 = FUNC_4(VAR_3, VAR_4 & VAR_1);
    if (VAR_5 == ((void*)0))
 return;
    if (VAR_5->keyboard >= 0)
 FUNC_2(VAR_5->kbd, &VAR_5->keyboard);
    if (VAR_5->adapter >= 0)
 FUNC_8(VAR_5->adp, &VAR_5->adapter);


    VAR_6 = FUNC_5(VAR_5->dev[0]);
    if (VAR_6->tsw)
 (*VAR_6->tsw->te_term)(VAR_6, &VAR_6->ts);
    FUNC_3(&VAR_5->video_mtx);


    if (!(VAR_4 & VAR_1)) {
 FUNC_1(VAR_6->ts, VAR_0);

 FUNC_1(VAR_5->dev, VAR_0);





 FUNC_1(VAR_5->font_8, VAR_0);
 FUNC_1(VAR_5->font_14, VAR_0);
 FUNC_1(VAR_5->font_16, VAR_0);


    }
    FUNC_0(VAR_5, sizeof(*VAR_5));
    VAR_5->keyboard = -1;
    VAR_5->adapter = -1;
}
