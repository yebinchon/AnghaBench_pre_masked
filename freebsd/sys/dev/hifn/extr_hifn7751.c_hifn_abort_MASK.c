
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct hifn_softc {int sc_resk; int sc_resu; int sc_dmat; struct hifn_command** sc_hifn_commands; struct hifn_dma* sc_dma; } ;
struct hifn_dma {int ** result_bufs; TYPE_1__* resr; } ;
struct hifn_command {int base_masks; scalar_t__ src_map; scalar_t__ dst_map; scalar_t__ src_m; scalar_t__ dst_m; struct cryptop* crp; } ;
struct cryptop {scalar_t__ crp_etype; scalar_t__ crp_buf; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int hst_opackets; } ;
struct TYPE_3__ {int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct cryptop*) ;
 int FUNC_5 (struct hifn_command*,int ) ;
 int FUNC_6 (struct hifn_softc*,struct hifn_command*,int *) ;
 int FUNC_7 (struct hifn_softc*) ;
 int FUNC_8 (struct hifn_softc*) ;
 int FUNC_9 (struct hifn_softc*,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct hifn_softc *VAR_9)
{
 struct hifn_dma *VAR_10 = VAR_9->sc_dma;
 struct hifn_command *VAR_11;
 struct cryptop *VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = VAR_9->sc_resk; VAR_14 = VAR_9->sc_resu;
 while (VAR_14 != 0) {
  VAR_11 = VAR_9->sc_hifn_commands[VAR_13];
  FUNC_0(VAR_11 != ((void*)0), ("hifn_abort: null command slot %u", VAR_13));
  VAR_9->sc_hifn_commands[VAR_13] = ((void*)0);
  VAR_12 = VAR_11->crp;

  if ((VAR_10->resr[VAR_13].l & FUNC_10(VAR_6)) == 0) {

   u_int8_t *VAR_15;

   if (VAR_11->base_masks & VAR_4) {
    VAR_15 = VAR_10->result_bufs[VAR_13];
    VAR_15 += 12;
   } else
    VAR_15 = ((void*)0);
   VAR_8.hst_opackets++;
   FUNC_6(VAR_9, VAR_11, VAR_15);
  } else {
   if (VAR_11->src_map == VAR_11->dst_map) {
    FUNC_2(VAR_9->sc_dmat, VAR_11->src_map,
        VAR_0|VAR_1);
   } else {
    FUNC_2(VAR_9->sc_dmat, VAR_11->src_map,
        VAR_1);
    FUNC_2(VAR_9->sc_dmat, VAR_11->dst_map,
        VAR_0);
   }

   if (VAR_11->src_m != VAR_11->dst_m) {
    FUNC_11(VAR_11->src_m);
    VAR_12->crp_buf = (caddr_t)VAR_11->dst_m;
   }


   if (VAR_11->src_map != VAR_11->dst_map) {




    VAR_12->crp_etype = VAR_3;
    FUNC_3(VAR_9->sc_dmat, VAR_11->dst_map);
    FUNC_1(VAR_9->sc_dmat, VAR_11->dst_map);
   } else
    VAR_12->crp_etype = VAR_3;

   FUNC_3(VAR_9->sc_dmat, VAR_11->src_map);
   FUNC_1(VAR_9->sc_dmat, VAR_11->src_map);

   FUNC_5(VAR_11, VAR_7);
   if (VAR_12->crp_etype != VAR_2)
    FUNC_4(VAR_12);
  }

  if (++VAR_13 == VAR_5)
   VAR_13 = 0;
  VAR_14--;
 }
 VAR_9->sc_resk = VAR_13; VAR_9->sc_resu = VAR_14;

 FUNC_9(VAR_9, 1);
 FUNC_7(VAR_9);
 FUNC_8(VAR_9);
}
