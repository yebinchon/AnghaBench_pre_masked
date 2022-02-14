
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
struct safe_softc {int sc_srcdmat; int sc_dstdmat; int sc_dev; int sc_ringalloc; } ;
struct safe_session {int ses_mlen; scalar_t__ ses_iv; } ;
struct TYPE_9__ {void** sa_saved_indigest; } ;
struct TYPE_8__ {int sa_cmd1; int sa_cmd0; } ;
struct TYPE_7__ {int d_csr; } ;
struct TYPE_6__ {scalar_t__ mapsize; } ;
struct safe_ringentry {scalar_t__ re_src_m; scalar_t__ re_dst_m; int re_flags; TYPE_4__ re_sastate; int * re_src_map; int * re_dst_map; TYPE_3__ re_sa; TYPE_2__ re_desc; TYPE_1__ re_dst; scalar_t__ re_crp; } ;
struct cryptop {int crp_flags; scalar_t__ crp_buf; struct cryptodesc* crp_desc; int crp_etype; int crp_session; } ;
struct cryptodesc {scalar_t__ crd_alg; int crd_inject; struct cryptodesc* crd_next; scalar_t__ crd_len; scalar_t__ crd_skip; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_10__ {int st_peoperr; int st_obytes; int st_opackets; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_6 (struct cryptop*) ;
 struct safe_session* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,int) ;
 TYPE_5__ VAR_13 ;

__attribute__((used)) static void
FUNC_11(struct safe_softc *VAR_14, struct safe_ringentry *VAR_15)
{
 struct cryptop *VAR_16 = (struct cryptop *)VAR_15->re_crp;
 struct safe_session *VAR_17;
 struct cryptodesc *VAR_18;

 VAR_17 = FUNC_7(VAR_16->crp_session);

 VAR_13.st_opackets++;
 VAR_13.st_obytes += VAR_15->re_dst.mapsize;

 FUNC_10(&VAR_14->sc_ringalloc,
  VAR_0|VAR_1);
 if (VAR_15->re_desc.d_csr & VAR_10) {
  FUNC_8(VAR_14->sc_dev, "csr 0x%x cmd0 0x%x cmd1 0x%x\n",
   VAR_15->re_desc.d_csr,
   VAR_15->re_sa.sa_cmd0, VAR_15->re_sa.sa_cmd1);
  VAR_13.st_peoperr++;
  VAR_16->crp_etype = VAR_9;
 }
 if (VAR_15->re_dst_map != ((void*)0) && VAR_15->re_dst_map != VAR_15->re_src_map) {
  FUNC_2(VAR_14->sc_dstdmat, VAR_15->re_dst_map,
      VAR_0);
  FUNC_3(VAR_14->sc_dstdmat, VAR_15->re_dst_map);
  FUNC_1(VAR_14->sc_dstdmat, VAR_15->re_dst_map);
 }
 FUNC_2(VAR_14->sc_srcdmat, VAR_15->re_src_map, VAR_1);
 FUNC_3(VAR_14->sc_srcdmat, VAR_15->re_src_map);
 FUNC_1(VAR_14->sc_srcdmat, VAR_15->re_src_map);





 if ((VAR_16->crp_flags & VAR_5) && VAR_15->re_src_m != VAR_15->re_dst_m) {
  FUNC_9(VAR_15->re_src_m);
  VAR_16->crp_buf = (caddr_t)VAR_15->re_dst_m;
 }

 if (VAR_15->re_flags & VAR_12) {

  for (VAR_18 = VAR_16->crp_desc; VAR_18; VAR_18 = VAR_18->crd_next) {
   int VAR_19;

   if (VAR_18->crd_alg == VAR_4 ||
       VAR_18->crd_alg == VAR_2) {
    VAR_19 = 2*sizeof(u_int32_t);
   } else if (VAR_18->crd_alg == VAR_3) {
    VAR_19 = 4*sizeof(u_int32_t);
   } else
    continue;
   FUNC_5(VAR_16->crp_flags, VAR_16->crp_buf,
       VAR_18->crd_skip + VAR_18->crd_len - VAR_19, VAR_19,
       (caddr_t)VAR_17->ses_iv);
   break;
  }
 }

 if (VAR_15->re_flags & VAR_11) {

  for (VAR_18 = VAR_16->crp_desc; VAR_18; VAR_18 = VAR_18->crd_next) {
   if (!(VAR_18->crd_alg == VAR_6 ||
       VAR_18->crd_alg == VAR_8 ||
       VAR_18->crd_alg == VAR_7))
    continue;
   if (VAR_18->crd_alg == VAR_8) {




    VAR_15->re_sastate.sa_saved_indigest[0] =
        FUNC_0(VAR_15->re_sastate.sa_saved_indigest[0]);
    VAR_15->re_sastate.sa_saved_indigest[1] =
        FUNC_0(VAR_15->re_sastate.sa_saved_indigest[1]);
    VAR_15->re_sastate.sa_saved_indigest[2] =
        FUNC_0(VAR_15->re_sastate.sa_saved_indigest[2]);
   }
   FUNC_4(VAR_16->crp_flags, VAR_16->crp_buf,
       VAR_18->crd_inject, VAR_17->ses_mlen,
       (caddr_t)VAR_15->re_sastate.sa_saved_indigest);
   break;
  }
 }
 FUNC_6(VAR_16);
}
