
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct pass_softc {TYPE_1__ read_select; } ;
struct cam_periph {struct pass_softc* softc; } ;


 int FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct cam_periph *VAR_2;
 struct pass_softc *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_2->softc;

 FUNC_1(&VAR_3->read_select.si_note, 0);
 FUNC_2(&VAR_3->read_select.si_note);




 FUNC_0(VAR_2);
}
