
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubsec_softc {int sc_qchip2; int sc_nqueue2; int sc_queue2; } ;
struct TYPE_2__ {int dma_paddr; } ;
struct ubsec_q2 {TYPE_1__ q_mcr; TYPE_1__ q_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ubsec_softc*,int ) ;
 int FUNC_1 (int *) ;
 struct ubsec_q2* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ubsec_q2*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ubsec_softc*,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_7(struct ubsec_softc *VAR_6)
{
 struct ubsec_q2 *VAR_7;

 while (!FUNC_1(&VAR_6->sc_queue2)) {
  if (FUNC_0(VAR_6, VAR_1) & VAR_2)
   break;
  VAR_7 = FUNC_2(&VAR_6->sc_queue2);

  FUNC_6(&VAR_7->q_mcr,
      VAR_3 | VAR_4);
  FUNC_6(&VAR_7->q_ctx, VAR_4);

  FUNC_5(VAR_6, VAR_0, VAR_7->q_mcr.dma_paddr);
  FUNC_4(&VAR_6->sc_queue2, VAR_5);
  --VAR_6->sc_nqueue2;
  FUNC_3(&VAR_6->sc_qchip2, VAR_7, VAR_5);
 }
 return (0);
}
