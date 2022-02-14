
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mfi_softc {int mfi_max_io; int mfi_max_sge; int mfi_io_lock; int disableOnlineCtrlReset; int mfi_buffer_dmat; int mfi_dev; } ;
struct TYPE_5__ {int disableOnlineCtrlReset; } ;
struct TYPE_6__ {TYPE_2__ OnOffProperties; } ;
struct TYPE_4__ {int max; } ;
struct mfi_ctrl_info {int max_strips_per_io; int max_request_size; TYPE_3__ properties; TYPE_1__ stripe_sz_ops; } ;
struct mfi_command {int cm_flags; int cm_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mfi_ctrl_info*,int ) ;
 int FUNC_4 (struct mfi_softc*,struct mfi_command**,int ,void**,int) ;
 int FUNC_5 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_6 (struct mfi_command*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct mfi_softc *VAR_7)
{
 struct mfi_command *VAR_8 = ((void*)0);
 struct mfi_ctrl_info *VAR_9 = ((void*)0);
 uint32_t VAR_10, VAR_11;
 int VAR_12;

 FUNC_8(&VAR_7->mfi_io_lock);
 VAR_12 = FUNC_4(VAR_7, &VAR_8, VAR_3,
     (void **)&VAR_9, sizeof(*VAR_9));
 if (VAR_12)
  goto out;
 VAR_8->cm_flags = VAR_1 | VAR_2;

 if ((VAR_12 = FUNC_5(VAR_7, VAR_8)) != 0) {
  FUNC_2(VAR_7->mfi_dev, "Failed to get controller info\n");
  VAR_7->mfi_max_io = (VAR_7->mfi_max_sge - 1) * VAR_6 /
      VAR_4;
  VAR_12 = 0;
  goto out;
 }

 FUNC_0(VAR_7->mfi_buffer_dmat, VAR_8->cm_dmamap,
     VAR_0);
 FUNC_1(VAR_7->mfi_buffer_dmat, VAR_8->cm_dmamap);

 VAR_10 = (1 << VAR_9->stripe_sz_ops.max) * VAR_9->max_strips_per_io;
 VAR_11 = VAR_9->max_request_size;
 VAR_7->mfi_max_io = FUNC_7(VAR_10, VAR_11);
 VAR_7->disableOnlineCtrlReset =
     VAR_9->properties.OnOffProperties.disableOnlineCtrlReset;

out:
 if (VAR_9)
  FUNC_3(VAR_9, VAR_5);
 if (VAR_8)
  FUNC_6(VAR_8);
 FUNC_9(&VAR_7->mfi_io_lock);
 return (VAR_12);
}
