
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_flags; int mfi_dev; struct mfi_command* (* mfi_cam_start ) (struct ccb_hdr*) ;int mfi_cam_ccbq; } ;
struct mfi_command {int dummy; } ;
struct ccb_hdr {int dummy; } ;


 int VAR_0 ;
 struct ccb_hdr* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 struct mfi_command* FUNC_2 (struct mfi_softc*) ;
 struct mfi_command* FUNC_3 (struct mfi_softc*) ;
 scalar_t__ FUNC_4 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_5 (struct mfi_command*) ;
 struct mfi_command* FUNC_6 (struct ccb_hdr*) ;

void
FUNC_7(struct mfi_softc *VAR_1)
{
 struct mfi_command *VAR_2;
 struct ccb_hdr *VAR_3;

 for (;;) {

  if (VAR_1->mfi_flags & VAR_0)
   break;


  VAR_2 = FUNC_3(VAR_1);

  if (VAR_2 == ((void*)0)) {
   if ((VAR_3 = FUNC_0(&VAR_1->mfi_cam_ccbq)) != ((void*)0))
    VAR_2 = VAR_1->mfi_cam_start(VAR_3);
  }


  if (VAR_2 == ((void*)0))
   VAR_2 = FUNC_2(VAR_1);


  if (VAR_2 == ((void*)0))
   break;


  if (FUNC_4(VAR_1, VAR_2) != 0) {
   FUNC_1(VAR_1->mfi_dev, "Failed to startio\n");
   FUNC_5(VAR_2);
   break;
  }
 }
}
