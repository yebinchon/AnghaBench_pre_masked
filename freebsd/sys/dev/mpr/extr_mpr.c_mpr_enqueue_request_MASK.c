
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mpr_softc {int mpr_flags; scalar_t__ io_cmds_active; scalar_t__ io_cmds_highwater; scalar_t__ atomic_desc_capable; int mpr_mtx; } ;
struct TYPE_7__ {int High; int Low; } ;
struct TYPE_6__ {int SMID; } ;
struct TYPE_8__ {TYPE_2__ Words; TYPE_1__ Default; } ;
struct mpr_command {scalar_t__ cm_state; TYPE_3__ cm_desc; int cm_ccb; } ;
struct TYPE_9__ {int high; int low; } ;
struct TYPE_10__ {TYPE_4__ u; int word; } ;
typedef TYPE_5__ request_descriptor ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mpr_softc*) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mpr_softc*,int ,char*,int ,struct mpr_command*,int ) ;
 int FUNC_4 (struct mpr_softc*,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct mpr_softc *VAR_9, struct mpr_command *VAR_10)
{
 request_descriptor VAR_11;

 FUNC_1(VAR_9);
 FUNC_3(VAR_9, VAR_8, "SMID %u cm %p ccb %p\n",
     VAR_10->cm_desc.Default.SMID, VAR_10, VAR_10->cm_ccb);

 if (VAR_9->mpr_flags & VAR_6 && !(VAR_9->mpr_flags &
     VAR_7))
  FUNC_5(&VAR_9->mpr_mtx, VAR_0);

 if (++VAR_9->io_cmds_active > VAR_9->io_cmds_highwater)
  VAR_9->io_cmds_highwater++;

 FUNC_0(VAR_10->cm_state == VAR_4, ("command not busy\n"));
 VAR_10->cm_state = VAR_5;

 if (VAR_9->atomic_desc_capable) {
  VAR_11.u.low = VAR_10->cm_desc.Words.Low;
  FUNC_4(VAR_9, VAR_1,
      VAR_11.u.low);
 } else {
  VAR_11.u.low = VAR_10->cm_desc.Words.Low;
  VAR_11.u.high = VAR_10->cm_desc.Words.High;
  VAR_11.word = FUNC_2(VAR_11.word);
  FUNC_4(VAR_9, VAR_3,
      VAR_11.u.low);
  FUNC_4(VAR_9, VAR_2,
      VAR_11.u.high);
 }
}
