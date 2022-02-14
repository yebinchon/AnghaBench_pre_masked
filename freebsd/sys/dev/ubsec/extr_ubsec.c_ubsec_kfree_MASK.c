
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubsec_softc {int sc_dev; } ;
struct TYPE_4__ {int q_ctx; int q_mcr; } ;
struct TYPE_3__ {int q_ctx; int q_mcr; } ;
struct ubsec_q2_rsapriv {int rpr_msgout; int rpr_msgin; TYPE_2__ rpr_q; int me_epb; int me_C; int me_E; int me_M; TYPE_1__ me_q; } ;
struct ubsec_q2_modexp {int rpr_msgout; int rpr_msgin; TYPE_2__ rpr_q; int me_epb; int me_C; int me_E; int me_M; TYPE_1__ me_q; } ;
struct ubsec_q2 {int q_type; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ubsec_q2_rsapriv*,int ) ;
 int FUNC_2 (struct ubsec_softc*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ubsec_softc *VAR_1, struct ubsec_q2 *VAR_2)
{
 switch (VAR_2->q_type) {
 case 129: {
  struct ubsec_q2_modexp *VAR_3 = (struct ubsec_q2_modexp *)VAR_2;

  FUNC_2(VAR_1, &VAR_3->me_q.q_mcr);
  FUNC_2(VAR_1, &VAR_3->me_q.q_ctx);
  FUNC_2(VAR_1, &VAR_3->me_M);
  FUNC_2(VAR_1, &VAR_3->me_E);
  FUNC_2(VAR_1, &VAR_3->me_C);
  FUNC_2(VAR_1, &VAR_3->me_epb);
  FUNC_1(VAR_3, VAR_0);
  break;
 }
 case 128: {
  struct ubsec_q2_rsapriv *VAR_4 = (struct ubsec_q2_rsapriv *)VAR_2;

  FUNC_2(VAR_1, &VAR_4->rpr_q.q_mcr);
  FUNC_2(VAR_1, &VAR_4->rpr_q.q_ctx);
  FUNC_2(VAR_1, &VAR_4->rpr_msgin);
  FUNC_2(VAR_1, &VAR_4->rpr_msgout);
  FUNC_1(VAR_4, VAR_0);
  break;
 }
 default:
  FUNC_0(VAR_1->sc_dev, "invalid kfree 0x%x\n", VAR_2->q_type);
  break;
 }
}
