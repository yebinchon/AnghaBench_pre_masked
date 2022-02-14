
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_softc {int cm_aen_abort; int cm_map_abort; int mfi_io_lock; int mfi_dev; int * mfi_map_sync_cm; int * mfi_aen_cm; } ;
struct TYPE_4__ {int flags; } ;
struct mfi_dcmd_frame {TYPE_2__ header; } ;
struct mfi_command {int * cm_data; int cm_flags; TYPE_1__* cm_frame; } ;
struct TYPE_3__ {struct mfi_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mfi_softc*,int **) ;
 int FUNC_2 (struct mfi_softc*,struct mfi_command**,int ,int *,int ) ;
 int FUNC_3 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_4 (struct mfi_command*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct mfi_softc *VAR_3)
{
 struct mfi_dcmd_frame *VAR_4;
 struct mfi_command *VAR_5;
 int VAR_6;


 if (VAR_3->mfi_aen_cm != ((void*)0)) {
  VAR_3->cm_aen_abort = 1;
  FUNC_1(VAR_3, &VAR_3->mfi_aen_cm);
 }

 if (VAR_3->mfi_map_sync_cm != ((void*)0)) {
  VAR_3->cm_map_abort = 1;
  FUNC_1(VAR_3, &VAR_3->mfi_map_sync_cm);
 }

 FUNC_5(&VAR_3->mfi_io_lock);
 VAR_6 = FUNC_2(VAR_3, &VAR_5, VAR_1, ((void*)0), 0);
 if (VAR_6) {
  FUNC_6(&VAR_3->mfi_io_lock);
  return (VAR_6);
 }

 VAR_4 = &VAR_5->cm_frame->dcmd;
 VAR_4->header.flags = VAR_2;
 VAR_5->cm_flags = VAR_0;
 VAR_5->cm_data = ((void*)0);

 if ((VAR_6 = FUNC_3(VAR_3, VAR_5)) != 0)
  FUNC_0(VAR_3->mfi_dev, "Failed to shutdown controller\n");

 FUNC_4(VAR_5);
 FUNC_6(&VAR_3->mfi_io_lock);
 return (VAR_6);
}
