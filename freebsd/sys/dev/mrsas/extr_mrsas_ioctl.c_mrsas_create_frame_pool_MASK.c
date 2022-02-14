
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mrsas_softc {int mrsas_dev; struct mrsas_mfi_cmd** mfi_cmd_list; int mficmd_frame_tag; int mrsas_parent_tag; } ;
struct mrsas_mfi_cmd {TYPE_2__* frame; int index; } ;
struct TYPE_4__ {scalar_t__ pad_0; int context; } ;
struct TYPE_5__ {TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 TYPE_2__* FUNC_3 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;

__attribute__((used)) static int
FUNC_4(struct mrsas_softc *VAR_6)
{
 int VAR_7;
 struct mrsas_mfi_cmd *VAR_8;

 if (FUNC_0(VAR_6->mrsas_parent_tag,
     1, 0,
     VAR_2,
     VAR_1,
     ((void*)0), ((void*)0),
     VAR_5,
     1,
     VAR_5,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_6->mficmd_frame_tag)) {
  FUNC_1(VAR_6->mrsas_dev, "Cannot create MFI frame tag\n");
  return (VAR_3);
 }
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_8 = VAR_6->mfi_cmd_list[VAR_7];
  VAR_8->frame = FUNC_3(VAR_6, VAR_8);
  if (VAR_8->frame == ((void*)0)) {
   FUNC_1(VAR_6->mrsas_dev, "Cannot alloc MFI frame memory\n");
   return (VAR_3);
  }
  FUNC_2(VAR_8->frame, 0, VAR_5);
  VAR_8->frame->io.context = VAR_8->index;
  VAR_8->frame->io.pad_0 = 0;
 }

 return (0);
}
