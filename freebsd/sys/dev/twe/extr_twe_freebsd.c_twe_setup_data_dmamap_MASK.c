
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct twe_softc {int twe_state; int twe_buffer_dmat; int twe_immediate_map; int twe_immediate_dmat; } ;
struct twe_request {int tr_flags; struct twe_softc* tr_sc; int tr_dmamap; int tr_length; int tr_data; int tr_realdata; int tr_dataphys; } ;
struct TYPE_14__ {int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_13__ {int * sgl; } ;
struct TYPE_12__ {int * sgl; } ;
struct TYPE_11__ {int * sgl; } ;
struct TYPE_10__ {int size; int opcode; int sgl_offset; } ;
struct TYPE_15__ {TYPE_4__ ata; TYPE_3__ io; TYPE_2__ param; TYPE_1__ generic; } ;
typedef TYPE_6__ TWE_Command ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_0 (struct twe_request*) ;
 int VAR_9 ;
 int VAR_10 ;





 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,TYPE_5__*,int,int ) ;
 int FUNC_6 (struct twe_request*) ;
 scalar_t__ FUNC_7 (struct twe_request*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_13, bus_dma_segment_t *VAR_14, int VAR_15, int VAR_16)
{
    struct twe_request *VAR_17 = (struct twe_request *)VAR_13;
    struct twe_softc *VAR_18 = VAR_17->tr_sc;
    TWE_Command *VAR_19 = FUNC_0(VAR_17);

    FUNC_3(4);

    if (VAR_17->tr_flags & VAR_8)
 FUNC_4("already mapped command");

    VAR_17->tr_flags |= VAR_8;

    if (VAR_17->tr_flags & VAR_7)
 VAR_18->twe_state &= ~VAR_12;

    VAR_17->tr_dataphys = VAR_14[0].ds_addr;


    VAR_19->generic.size += 2 * VAR_15;






    switch(VAR_19->generic.opcode) {
    case 131:
    case 129:
 VAR_19->generic.sgl_offset = 2;
 FUNC_5(&VAR_19->param.sgl[0], VAR_14, VAR_15, VAR_10);
 break;
    case 130:
    case 128:
 VAR_19->generic.sgl_offset = 3;
 FUNC_5(&VAR_19->io.sgl[0], VAR_14, VAR_15, VAR_10);
 break;
    case 132:
 VAR_19->generic.sgl_offset = 5;
 FUNC_5(&VAR_19->ata.sgl[0], VAR_14, VAR_15, VAR_9);
 break;
    default:






 switch (VAR_19->generic.sgl_offset) {
 case 2:
     FUNC_5(&VAR_19->param.sgl[0], VAR_14, VAR_15, VAR_10);
     break;
 case 3:
     FUNC_5(&VAR_19->io.sgl[0], VAR_14, VAR_15, VAR_10);
     break;
 case 5:
     FUNC_5(&VAR_19->ata.sgl[0], VAR_14, VAR_15, VAR_9);
     break;
 }
    }

    if (VAR_17->tr_flags & VAR_4) {
 if (VAR_17->tr_flags & VAR_6) {
     FUNC_2(VAR_18->twe_immediate_dmat, VAR_18->twe_immediate_map,
       VAR_0);
 } else {
     FUNC_2(VAR_18->twe_buffer_dmat, VAR_17->tr_dmamap,
       VAR_0);
 }
    }

    if (VAR_17->tr_flags & VAR_5) {




 if (VAR_17->tr_flags & VAR_3)
     FUNC_1(VAR_17->tr_realdata, VAR_17->tr_data, VAR_17->tr_length);

 if (VAR_17->tr_flags & VAR_6) {
     FUNC_2(VAR_18->twe_immediate_dmat, VAR_18->twe_immediate_map,
       VAR_1);
 } else {
     FUNC_2(VAR_18->twe_buffer_dmat, VAR_17->tr_dmamap,
       VAR_1);
 }
    }

    if (FUNC_7(VAR_17) == VAR_2) {
 VAR_17->tr_sc->twe_state |= VAR_11;
 FUNC_6(VAR_17);
    }
}
