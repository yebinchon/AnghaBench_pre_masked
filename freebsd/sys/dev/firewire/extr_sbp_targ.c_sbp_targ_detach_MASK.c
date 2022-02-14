
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xferlist; } ;
struct TYPE_3__ {int fc; int * post_busreset; } ;
struct sbp_targ_softc {int mtx; TYPE_2__ fwb; TYPE_1__ fd; struct sbp_targ_lstate* black_hole; struct sbp_targ_lstate** lstate; int sim; int path; } ;
struct sbp_targ_lstate {int path; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sbp_targ_softc*) ;
 int FUNC_1 (struct sbp_targ_softc*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sbp_targ_lstate*,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 struct sbp_targ_softc *VAR_4;
 struct sbp_targ_lstate *VAR_5;
 int VAR_6;

 VAR_4 = (struct sbp_targ_softc *)FUNC_4(VAR_3);
 VAR_4->fd.post_busreset = ((void*)0);

 FUNC_0(VAR_4);
 FUNC_10(VAR_4->path);
 FUNC_9(FUNC_3(VAR_4->sim));
 FUNC_2(VAR_4->sim, VAR_2);
 FUNC_1(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_4->lstate[VAR_6];
  if (VAR_5 != ((void*)0)) {
   FUNC_10(VAR_5->path);
   FUNC_5(VAR_5, VAR_1);
  }
 }
 if (VAR_4->black_hole != ((void*)0)) {
  FUNC_10(VAR_4->black_hole->path);
  FUNC_5(VAR_4->black_hole, VAR_1);
 }

 FUNC_6(VAR_4->fd.fc, &VAR_4->fwb);
 FUNC_7(&VAR_4->fwb.xferlist);

 FUNC_8(&VAR_4->mtx);

 return 0;
}
