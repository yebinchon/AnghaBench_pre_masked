
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsec_softc {int sc_freequeue; } ;
struct ubsec_q {int q_nstacked_mcrs; scalar_t__ q_crp; int * q_dst_m; int * q_src_m; struct ubsec_q** q_stacked_mcr; } ;
struct cryptop {void* crp_etype; } ;


 void* VAR_0 ;
 int FUNC_0 (int *,struct ubsec_q*,int ) ;
 int FUNC_1 (struct cryptop*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct ubsec_softc *VAR_2, struct ubsec_q *VAR_3)
{
 struct ubsec_q *VAR_4;
 struct cryptop *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->q_nstacked_mcrs;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if(VAR_3->q_stacked_mcr[VAR_7]) {
   VAR_4 = VAR_3->q_stacked_mcr[VAR_7];

   if ((VAR_4->q_dst_m != ((void*)0)) && (VAR_4->q_src_m != VAR_4->q_dst_m))
    FUNC_2(VAR_4->q_dst_m);

   VAR_5 = (struct cryptop *)VAR_4->q_crp;

   FUNC_0(&VAR_2->sc_freequeue, VAR_4, VAR_1);

   VAR_5->crp_etype = VAR_0;
   FUNC_1(VAR_5);
  } else {
   break;
  }
 }




 if ((VAR_3->q_dst_m != ((void*)0)) && (VAR_3->q_src_m != VAR_3->q_dst_m))
  FUNC_2(VAR_3->q_dst_m);

 VAR_5 = (struct cryptop *)VAR_3->q_crp;

 FUNC_0(&VAR_2->sc_freequeue, VAR_3, VAR_1);

 VAR_5->crp_etype = VAR_0;
 FUNC_1(VAR_5);
 return(0);
}
