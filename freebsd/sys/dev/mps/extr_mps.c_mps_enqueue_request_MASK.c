
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mps_softc {int mps_flags; scalar_t__ io_cmds_active; scalar_t__ io_cmds_highwater; int mps_mtx; } ;
struct TYPE_7__ {int High; int Low; } ;
struct TYPE_6__ {int SMID; } ;
struct TYPE_8__ {TYPE_2__ Words; TYPE_1__ Default; } ;
struct mps_command {scalar_t__ cm_state; TYPE_3__ cm_desc; int cm_ccb; } ;
struct TYPE_9__ {int high; int low; } ;
struct TYPE_10__ {TYPE_4__ u; int word; } ;
typedef TYPE_5__ reply_descriptor ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mps_softc*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mps_softc*,int ,char*,int ,struct mps_command*,int ) ;
 int FUNC_4 (struct mps_softc*,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct mps_softc *VAR_8, struct mps_command *VAR_9)
{
 reply_descriptor VAR_10;
 FUNC_1(VAR_8);
 FUNC_3(VAR_8, VAR_7, "SMID %u cm %p ccb %p\n",
     VAR_9->cm_desc.Default.SMID, VAR_9, VAR_9->cm_ccb);

 if (VAR_8->mps_flags & VAR_5 && !(VAR_8->mps_flags & VAR_6))
  FUNC_5(&VAR_8->mps_mtx, VAR_0);

 if (++VAR_8->io_cmds_active > VAR_8->io_cmds_highwater)
  VAR_8->io_cmds_highwater++;
 VAR_10.u.low = VAR_9->cm_desc.Words.Low;
 VAR_10.u.high = VAR_9->cm_desc.Words.High;
 VAR_10.word = FUNC_2(VAR_10.word);

 FUNC_0(VAR_9->cm_state == VAR_3, ("command not busy\n"));
 VAR_9->cm_state = VAR_4;


 FUNC_4(VAR_8, VAR_2,
     VAR_10.u.low);
 FUNC_4(VAR_8, VAR_1,
     VAR_10.u.high);
}
