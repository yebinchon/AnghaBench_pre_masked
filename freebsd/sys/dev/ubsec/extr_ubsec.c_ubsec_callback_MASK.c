
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubsec_softc {int sc_freeqlock; int sc_freequeue; int sc_dmat; } ;
struct ubsec_session {int ses_mlen; scalar_t__ ses_iv; } ;
struct ubsec_q {scalar_t__ q_src_m; scalar_t__ q_dst_m; int q_flags; int * q_src_map; int * q_dst_map; struct ubsec_dma* q_dma; scalar_t__ q_crp; } ;
struct TYPE_6__ {scalar_t__ dma_size; } ;
struct ubsec_dma {TYPE_1__* d_dma; TYPE_3__ d_alloc; } ;
struct cryptop {int crp_flags; scalar_t__ crp_buf; struct cryptodesc* crp_desc; int crp_session; } ;
struct cryptodesc {scalar_t__ crd_alg; int crd_inject; struct cryptodesc* crd_next; scalar_t__ crd_len; scalar_t__ crd_skip; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int hst_obytes; int hst_opackets; } ;
struct TYPE_4__ {scalar_t__ d_macbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,struct ubsec_q*,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_6 (struct cryptop*) ;
 struct ubsec_session* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 int FUNC_11 (TYPE_3__*,int) ;
 TYPE_2__ VAR_9 ;

__attribute__((used)) static void
FUNC_12(struct ubsec_softc *VAR_10, struct ubsec_q *VAR_11)
{
 struct cryptop *VAR_12 = (struct cryptop *)VAR_11->q_crp;
 struct ubsec_session *VAR_13;
 struct cryptodesc *VAR_14;
 struct ubsec_dma *VAR_15 = VAR_11->q_dma;

 VAR_13 = FUNC_7(VAR_12->crp_session);

 VAR_9.hst_opackets++;
 VAR_9.hst_obytes += VAR_15->d_alloc.dma_size;

 FUNC_11(&VAR_15->d_alloc,
     VAR_0|VAR_1);
 if (VAR_11->q_dst_map != ((void*)0) && VAR_11->q_dst_map != VAR_11->q_src_map) {
  FUNC_2(VAR_10->sc_dmat, VAR_11->q_dst_map,
      VAR_0);
  FUNC_3(VAR_10->sc_dmat, VAR_11->q_dst_map);
  FUNC_1(VAR_10->sc_dmat, VAR_11->q_dst_map);
 }
 FUNC_2(VAR_10->sc_dmat, VAR_11->q_src_map, VAR_1);
 FUNC_3(VAR_10->sc_dmat, VAR_11->q_src_map);
 FUNC_1(VAR_10->sc_dmat, VAR_11->q_src_map);

 if ((VAR_12->crp_flags & VAR_4) && (VAR_11->q_src_m != VAR_11->q_dst_m)) {
  FUNC_8(VAR_11->q_src_m);
  VAR_12->crp_buf = (caddr_t)VAR_11->q_dst_m;
 }


 if (VAR_11->q_flags & VAR_7) {
  for (VAR_14 = VAR_12->crp_desc; VAR_14; VAR_14 = VAR_14->crd_next) {
   if (VAR_14->crd_alg != VAR_3 &&
       VAR_14->crd_alg != VAR_2)
    continue;
   FUNC_5(VAR_12->crp_flags, VAR_12->crp_buf,
       VAR_14->crd_skip + VAR_14->crd_len - 8, 8,
       (caddr_t)VAR_13->ses_iv);
   break;
  }
 }

 for (VAR_14 = VAR_12->crp_desc; VAR_14; VAR_14 = VAR_14->crd_next) {
  if (VAR_14->crd_alg != VAR_5 &&
      VAR_14->crd_alg != VAR_6)
   continue;
  FUNC_4(VAR_12->crp_flags, VAR_12->crp_buf, VAR_14->crd_inject,
      VAR_13->ses_mlen, (caddr_t)VAR_15->d_dma->d_macbuf);
  break;
 }
 FUNC_9(&VAR_10->sc_freeqlock);
 FUNC_0(&VAR_10->sc_freequeue, VAR_11, VAR_8);
 FUNC_10(&VAR_10->sc_freeqlock);
 FUNC_6(VAR_12);
}
