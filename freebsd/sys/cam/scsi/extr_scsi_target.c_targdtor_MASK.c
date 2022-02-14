
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct targ_softc {int * path; int * periph; int abort_queue; int user_ccb_queue; } ;
struct targ_cmd_descr {int dummy; } ;
typedef struct targ_cmd_descr ccb_hdr ;
struct cam_periph {int * softc; } ;
struct TYPE_2__ {int tqe; } ;


 int VAR_0 ;
 struct targ_cmd_descr* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct targ_cmd_descr*,int ) ;
 int FUNC_2 (struct targ_cmd_descr*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (struct targ_softc*,union ccb*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct cam_periph *VAR_3)
{
 struct targ_softc *VAR_4;
 struct ccb_hdr *VAR_5;
 struct targ_cmd_descr *VAR_6;

 VAR_4 = (struct targ_softc *)VAR_3->softc;






 while ((VAR_5 = FUNC_0(&VAR_4->user_ccb_queue)) != ((void*)0)) {
  FUNC_1(&VAR_4->user_ccb_queue, VAR_5, VAR_1.tqe);
  FUNC_3(VAR_4, (union ccb *)VAR_5);
 }
 while ((VAR_6 = FUNC_0(&VAR_4->abort_queue)) != ((void*)0)) {
  FUNC_1(&VAR_4->abort_queue, VAR_6, VAR_2);
  FUNC_2(VAR_6, VAR_0);
 }

 VAR_4->periph = ((void*)0);
 VAR_4->path = ((void*)0);
 VAR_3->softc = ((void*)0);
}
