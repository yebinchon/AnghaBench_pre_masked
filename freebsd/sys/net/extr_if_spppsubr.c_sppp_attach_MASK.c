
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ifq_maxlen; int ifq_mtx; } ;
struct TYPE_5__ {int ifq_maxlen; int ifq_mtx; } ;
struct sppp {int pp_comp; int if_start; int ifstart_callout; int confflags; int pp_last_sent; int pp_last_recv; TYPE_3__ pp_fastq; TYPE_2__ pp_cpq; int pp_down; int pp_up; int pp_phase; int * pp_rseq; int * pp_seq; scalar_t__ pp_alivecnt; scalar_t__ pp_loopcnt; int pp_flags; int keepalive_callout; int mtx; } ;
struct slcompress {int dummy; } ;
struct TYPE_4__ {int ifq_maxlen; } ;
struct ifnet {int if_flags; int if_start; TYPE_1__ if_snd; int if_output; int if_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sppp* FUNC_0 (struct ifnet*) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,void*) ;
 int VAR_12 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *,char*,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct sppp*) ;
 int VAR_13 ;
 int FUNC_9 (struct sppp*) ;
 int FUNC_10 (struct sppp*) ;
 int VAR_14 ;
 int FUNC_11 (struct sppp*) ;
 int VAR_15 ;
 int FUNC_12 (struct sppp*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_13(struct ifnet *VAR_19)
{
 struct sppp *VAR_20 = FUNC_0(VAR_19);


 FUNC_5(&VAR_20->mtx, "sppp", VAR_5, VAR_4 | VAR_6);


  FUNC_2(&VAR_20->keepalive_callout, 1);
 FUNC_3(&VAR_20->keepalive_callout, VAR_12 * 10, VAR_14,
       (void *)VAR_20);

 VAR_19->if_mtu = VAR_11;
 VAR_19->if_flags = VAR_3 | VAR_2;
 VAR_19->if_output = VAR_15;



  VAR_19->if_snd.ifq_maxlen = 32;
  VAR_20->pp_fastq.ifq_maxlen = 32;
  VAR_20->pp_cpq.ifq_maxlen = 20;
 VAR_20->pp_loopcnt = 0;
 VAR_20->pp_alivecnt = 0;
 FUNC_1(&VAR_20->pp_seq[0], sizeof(VAR_20->pp_seq));
 FUNC_1(&VAR_20->pp_rseq[0], sizeof(VAR_20->pp_rseq));
 VAR_20->pp_phase = VAR_9;
 VAR_20->pp_up = VAR_17;
 VAR_20->pp_down = VAR_16;
 if(!FUNC_6(&VAR_20->pp_cpq.ifq_mtx))
  FUNC_5(&VAR_20->pp_cpq.ifq_mtx, "sppp_cpq", ((void*)0), VAR_4);
 if(!FUNC_6(&VAR_20->pp_fastq.ifq_mtx))
  FUNC_5(&VAR_20->pp_fastq.ifq_mtx, "sppp_fastq", ((void*)0), VAR_4);
 VAR_20->pp_last_recv = VAR_20->pp_last_sent = VAR_18;
 VAR_20->confflags = 0;






  FUNC_2(&VAR_20->ifstart_callout, 1);
 VAR_20->if_start = VAR_19->if_start;
 VAR_19->if_start = VAR_13;
 VAR_20->pp_comp = FUNC_4(sizeof(struct slcompress), VAR_7, VAR_8);
 FUNC_7(VAR_20->pp_comp, -1);
 FUNC_11(VAR_20);
 FUNC_9(VAR_20);
 FUNC_10(VAR_20);
 FUNC_12(VAR_20);
 FUNC_8(VAR_20);
}
