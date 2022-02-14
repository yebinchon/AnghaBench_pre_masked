
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct uio {int dummy; } ;
struct mbuf {int dummy; } ;
struct cesa_tdma_desc {int dummy; } ;
struct cesa_softc {int sc_data_dtag; } ;
struct cesa_request {int cr_dmap_loaded; TYPE_4__* cr_crp; int cr_dmap; scalar_t__ cr_mac; TYPE_3__* cr_enc; TYPE_2__* cr_cs; TYPE_1__* cr_csd; } ;
struct cesa_chain_info {int cci_config; int cci_error; scalar_t__ cci_mac; TYPE_3__* cci_enc; struct cesa_request* cci_cr; struct cesa_softc* cci_sc; } ;
struct TYPE_8__ {int crp_flags; int crp_ilen; scalar_t__ crp_buf; } ;
struct TYPE_7__ {scalar_t__ crd_alg; int crd_flags; } ;
struct TYPE_6__ {int cs_config; int cs_hiv_out; int cs_hiv_in; int cs_klen; int cs_key; int cs_aes_dkey; } ;
struct TYPE_5__ {int csd_hiv_out; int csd_hiv_in; int csd_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cesa_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,scalar_t__,int ,int ,struct cesa_chain_info*,int ) ;
 int FUNC_2 (int ,int ,struct mbuf*,int ,struct cesa_chain_info*,int ) ;
 int FUNC_3 (int ,int ,struct uio*,int ,struct cesa_chain_info*,int ) ;
 int FUNC_4 (struct cesa_request*,struct cesa_tdma_desc*) ;
 int VAR_12 ;
 int VAR_13 ;
 struct cesa_tdma_desc* FUNC_5 (struct cesa_softc*,struct cesa_request*) ;
 struct cesa_tdma_desc* FUNC_6 (struct cesa_softc*,struct cesa_request*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_8(struct cesa_softc *VAR_15, struct cesa_request *VAR_16)
{
 struct cesa_chain_info VAR_17;
 struct cesa_tdma_desc *VAR_18;
 uint32_t VAR_19;
 int VAR_20;

 VAR_20 = 0;
 FUNC_0(VAR_15, VAR_14);


 if (VAR_16->cr_enc) {
  if (VAR_16->cr_enc->crd_alg == VAR_8 &&
      (VAR_16->cr_enc->crd_flags & VAR_7) == 0)
   FUNC_7(VAR_16->cr_csd->csd_key, VAR_16->cr_cs->cs_aes_dkey,
       VAR_16->cr_cs->cs_klen);
  else
   FUNC_7(VAR_16->cr_csd->csd_key, VAR_16->cr_cs->cs_key,
       VAR_16->cr_cs->cs_klen);
 }

 if (VAR_16->cr_mac) {
  FUNC_7(VAR_16->cr_csd->csd_hiv_in, VAR_16->cr_cs->cs_hiv_in,
      VAR_6);
  FUNC_7(VAR_16->cr_csd->csd_hiv_out, VAR_16->cr_cs->cs_hiv_out,
      VAR_6);
 }

 VAR_18 = FUNC_5(VAR_15, VAR_16);
 if (!VAR_18)
  return (VAR_11);

 FUNC_4(VAR_16, VAR_18);


 VAR_19 = VAR_16->cr_cs->cs_config;

 if (VAR_16->cr_enc && (VAR_16->cr_enc->crd_flags & VAR_7) == 0)
  VAR_19 |= VAR_1;
 if (VAR_16->cr_enc && !VAR_16->cr_mac)
  VAR_19 |= VAR_2;
 if (!VAR_16->cr_enc && VAR_16->cr_mac)
  VAR_19 |= VAR_4;
 if (VAR_16->cr_enc && VAR_16->cr_mac)
  VAR_19 |= (VAR_19 & VAR_1) ? VAR_5 :
      VAR_3;


 VAR_17.cci_sc = VAR_15;
 VAR_17.cci_cr = VAR_16;
 VAR_17.cci_enc = VAR_16->cr_enc;
 VAR_17.cci_mac = VAR_16->cr_mac;
 VAR_17.cci_config = VAR_19;
 VAR_17.cci_error = 0;

 if (VAR_16->cr_crp->crp_flags & VAR_10)
  VAR_20 = FUNC_3(VAR_15->sc_data_dtag,
      VAR_16->cr_dmap, (struct uio *)VAR_16->cr_crp->crp_buf,
      VAR_13, &VAR_17, VAR_0);
 else if (VAR_16->cr_crp->crp_flags & VAR_9)
  VAR_20 = FUNC_2(VAR_15->sc_data_dtag,
      VAR_16->cr_dmap, (struct mbuf *)VAR_16->cr_crp->crp_buf,
      VAR_13, &VAR_17, VAR_0);
 else
  VAR_20 = FUNC_1(VAR_15->sc_data_dtag,
      VAR_16->cr_dmap, VAR_16->cr_crp->crp_buf,
      VAR_16->cr_crp->crp_ilen, VAR_12, &VAR_17,
      VAR_0);

 if (!VAR_20)
  VAR_16->cr_dmap_loaded = 1;

 if (VAR_17.cci_error)
  VAR_20 = VAR_17.cci_error;

 if (VAR_20)
  return (VAR_20);


 VAR_18 = FUNC_6(VAR_15, VAR_16);
 if (!VAR_18)
  return (VAR_11);

 FUNC_4(VAR_16, VAR_18);

 return (0);
}
