
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; } ;
typedef TYPE_1__ wsp_finger_t ;
struct atp_softc {int sc_n_strokes; int sc_state; } ;
struct TYPE_6__ {int matched; int age; int y; int x; int ctime; int type; } ;
typedef TYPE_2__ atp_stroke_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 TYPE_2__* FUNC_1 (struct atp_softc*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct atp_softc *VAR_3, const wsp_finger_t *VAR_4)
{
 atp_stroke_t *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == ((void*)0))
  return;






 VAR_5->type = VAR_2;
 VAR_5->matched = 1;
 FUNC_2(&VAR_5->ctime);
 VAR_5->age = 1;
 VAR_5->x = VAR_4->x;
 VAR_5->y = VAR_4->y;


 if (VAR_3->sc_n_strokes > 1)
  VAR_3->sc_state &= ~VAR_0;

 FUNC_0(VAR_1, "[%d,%d]\n", VAR_5->x, VAR_5->y);
}
