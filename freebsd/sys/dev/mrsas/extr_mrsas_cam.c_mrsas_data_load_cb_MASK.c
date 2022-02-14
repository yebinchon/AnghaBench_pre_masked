
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mrsas_softc {int max_num_sge; int mrsas_dev; int data_tag; } ;
struct mrsas_mpt_cmd {int error_code; int flags; scalar_t__ pdInterface; int sge_count; TYPE_3__* io_request; int data_dmamap; struct mrsas_softc* sc; TYPE_2__* ccb_ptr; } ;
typedef int bus_dma_segment_t ;
typedef int boolean_t ;
struct TYPE_6__ {int IoFlags; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mrsas_mpt_cmd*,int *,int) ;
 int FUNC_3 (struct mrsas_mpt_cmd*,int *,int) ;
 int FUNC_4 (struct mrsas_mpt_cmd*,int *,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_8, bus_dma_segment_t *VAR_9, int VAR_10, int VAR_11)
{
 struct mrsas_mpt_cmd *VAR_12 = (struct mrsas_mpt_cmd *)VAR_8;
 struct mrsas_softc *VAR_13 = VAR_12->sc;
 boolean_t VAR_14 = 0;

 if (VAR_11) {
  VAR_12->error_code = VAR_11;
  FUNC_1(VAR_13->mrsas_dev, "mrsas_data_load_cb_prp: error=%d\n", VAR_11);
  if (VAR_11 == VAR_3) {
   VAR_12->ccb_ptr->ccb_h.status = VAR_2;
   return;
  }
 }
 if (VAR_12->flags & VAR_5)
  FUNC_0(VAR_12->sc->data_tag, VAR_12->data_dmamap,
      VAR_0);
 if (VAR_12->flags & VAR_6)
  FUNC_0(VAR_12->sc->data_tag, VAR_12->data_dmamap,
      VAR_1);
 if (VAR_10 > VAR_13->max_num_sge) {
  FUNC_1(VAR_13->mrsas_dev, "SGE count is too large or 0.\n");
  return;
 }


 if ((VAR_12->io_request->IoFlags & VAR_4) &&
   (VAR_12->pdInterface == VAR_7))
  VAR_14 = FUNC_4(VAR_12, VAR_9, VAR_10);

 if (VAR_14 == 1)
  FUNC_3(VAR_12, VAR_9, VAR_10);
 else
  FUNC_2(VAR_12, VAR_9, VAR_10);

 VAR_12->sge_count = VAR_10;
}
