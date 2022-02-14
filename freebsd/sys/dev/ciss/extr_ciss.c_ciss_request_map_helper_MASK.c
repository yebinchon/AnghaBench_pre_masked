
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ciss_softc {scalar_t__ ciss_perf; int ciss_buffer_dmat; } ;
struct ciss_request {int cr_flags; int cr_ccphys; int cr_sg_tag; int cr_datamap; struct ciss_command* cr_cc; struct ciss_softc* cr_sc; } ;
struct TYPE_6__ {int sg_in_list; int sg_total; } ;
struct ciss_command {TYPE_2__ header; TYPE_1__* sg; } ;
struct TYPE_7__ {int ds_len; int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_5__ {scalar_t__ extension; int length; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ciss_softc*,struct ciss_request*) ;
 int FUNC_1 (struct ciss_softc*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_13, bus_dma_segment_t *VAR_14, int VAR_15, int VAR_16)
{
    struct ciss_command *VAR_17;
    struct ciss_request *VAR_18;
    struct ciss_softc *VAR_19;
    int VAR_20;

    FUNC_3(2);

    VAR_18 = (struct ciss_request *)VAR_13;
    VAR_19 = VAR_18->cr_sc;
    VAR_17 = VAR_18->cr_cc;

    for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
 VAR_17->sg[VAR_20].address = VAR_14[VAR_20].ds_addr;
 VAR_17->sg[VAR_20].length = VAR_14[VAR_20].ds_len;
 VAR_17->sg[VAR_20].extension = 0;
    }

    VAR_17->header.sg_in_list = VAR_15;
    VAR_17->header.sg_total = VAR_15;

    if (VAR_18->cr_flags & VAR_3)
 FUNC_2(VAR_19->ciss_buffer_dmat, VAR_18->cr_datamap, VAR_0);
    if (VAR_18->cr_flags & VAR_4)
 FUNC_2(VAR_19->ciss_buffer_dmat, VAR_18->cr_datamap, VAR_1);

    if (VAR_15 == 0)
 VAR_18->cr_sg_tag = VAR_12;
    else if (VAR_15 == 1)
 VAR_18->cr_sg_tag = VAR_5;
    else if (VAR_15 == 2)
 VAR_18->cr_sg_tag = VAR_7;
    else if (VAR_15 <= 4)
 VAR_18->cr_sg_tag = VAR_9;
    else if (VAR_15 <= 8)
 VAR_18->cr_sg_tag = VAR_10;
    else if (VAR_15 <= 16)
 VAR_18->cr_sg_tag = VAR_6;
    else if (VAR_15 <= 32)
 VAR_18->cr_sg_tag = VAR_8;
    else
 VAR_18->cr_sg_tag = VAR_11;




    VAR_18->cr_flags |= VAR_2;
    if (VAR_19->ciss_perf)
 FUNC_0(VAR_19, VAR_18);
    else
 FUNC_1(VAR_19, VAR_18->cr_ccphys);
}
