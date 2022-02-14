
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int si_note; } ;
struct beri_softc {int beri_mtx; TYPE_3__ beri_rsel; } ;
struct TYPE_5__ {int cdes; } ;
typedef TYPE_1__ control_reg_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_1 (struct beri_softc*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (struct beri_softc*,int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct beri_softc *VAR_3;
 control_reg_t VAR_4;

 VAR_3 = VAR_2;

 VAR_4 = FUNC_1(VAR_3, 1);
 if (VAR_4.cdes & VAR_0) {
  VAR_4.cdes &= ~(VAR_0);
  FUNC_5(VAR_3, 1, &VAR_4);
 }

 FUNC_2(&VAR_3->beri_mtx);
 FUNC_4(&VAR_3->beri_rsel, VAR_1 + 1);
 FUNC_0(&VAR_3->beri_rsel.si_note, 0);
 FUNC_3(&VAR_3->beri_mtx);
}
