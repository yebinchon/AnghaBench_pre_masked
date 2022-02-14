
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cesa_softc {int sc_dev; } ;
struct cesa_sa_desc {TYPE_1__* csd_cshd; } ;
struct cesa_request {int cr_sdesc; } ;
struct TYPE_2__ {scalar_t__ cshd_mac_dlen; scalar_t__ cshd_mac_src; void* cshd_mac_iv_out; void* cshd_mac_iv_in; void* cshd_mac_dst; scalar_t__ cshd_enc_dlen; scalar_t__ cshd_enc_dst; scalar_t__ cshd_enc_src; void* cshd_enc_iv_buf; void* cshd_enc_iv; void* cshd_enc_key; } ;


 int FUNC_0 (struct cesa_softc*,struct cesa_sa_desc*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct cesa_sa_desc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static struct cesa_sa_desc *
FUNC_4(struct cesa_softc *VAR_7, struct cesa_request *VAR_8)
{
 struct cesa_sa_desc *VAR_9;

 FUNC_0(VAR_7, VAR_9, VAR_6);
 if (!VAR_9) {
  FUNC_3(VAR_7->sc_dev, "SA descriptors pool exhaused. "
      "Consider increasing CESA_SA_DESCRIPTORS.\n");
  return (((void*)0));
 }

 FUNC_2(&VAR_8->cr_sdesc, VAR_9, VAR_5);


 VAR_9->csd_cshd->cshd_enc_key = FUNC_1(VAR_4);
 VAR_9->csd_cshd->cshd_enc_iv = FUNC_1(VAR_3);
 VAR_9->csd_cshd->cshd_enc_iv_buf = FUNC_1(VAR_3);
 VAR_9->csd_cshd->cshd_enc_src = 0;
 VAR_9->csd_cshd->cshd_enc_dst = 0;
 VAR_9->csd_cshd->cshd_enc_dlen = 0;
 VAR_9->csd_cshd->cshd_mac_dst = FUNC_1(VAR_0);
 VAR_9->csd_cshd->cshd_mac_iv_in = FUNC_1(VAR_1);
 VAR_9->csd_cshd->cshd_mac_iv_out = FUNC_1(VAR_2);
 VAR_9->csd_cshd->cshd_mac_src = 0;
 VAR_9->csd_cshd->cshd_mac_dlen = 0;

 return (VAR_9);
}
