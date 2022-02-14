
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ic_opmode; } ;
struct bwi_softc {int sc_calib_ch; int sc_txpwrcb_type; TYPE_1__* sc_cur_regwin; TYPE_2__ sc_ic; } ;
struct bwi_mac {int dummy; } ;
struct TYPE_3__ {scalar_t__ rw_type; } ;


 int FUNC_0 (struct bwi_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct bwi_mac*,int ) ;
 int FUNC_3 (int *,int,void (*) (void*),struct bwi_softc*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct bwi_softc *VAR_5 = VAR_4;
 struct bwi_mac *VAR_6;

 FUNC_0(VAR_5);

 FUNC_1(VAR_5->sc_ic.ic_opmode != VAR_2,
     ("opmode %d", VAR_5->sc_ic.ic_opmode));

 FUNC_1(VAR_5->sc_cur_regwin->rw_type == VAR_0,
     ("current regwin type %d", VAR_5->sc_cur_regwin->rw_type));
 VAR_6 = (struct bwi_mac *)VAR_5->sc_cur_regwin;

 FUNC_2(VAR_6, VAR_5->sc_txpwrcb_type);
 VAR_5->sc_txpwrcb_type = VAR_1;


 FUNC_3(&VAR_5->sc_calib_ch, VAR_3 * 15, FUNC_4, VAR_5);
}
