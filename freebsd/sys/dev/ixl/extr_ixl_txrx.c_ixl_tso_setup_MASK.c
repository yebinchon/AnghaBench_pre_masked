
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct tx_ring {TYPE_2__* que; int mss_too_small; int * tx_base; } ;
struct i40e_tx_context_desc {int tunneling_params; int type_cmd_tso_mss; } ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef TYPE_4__* if_pkt_info_t ;
struct TYPE_9__ {int ipi_pidx; int ipi_ehdrlen; int ipi_ip_hlen; int ipi_tcp_hlen; scalar_t__ ipi_len; scalar_t__ ipi_tso_segsz; } ;
struct TYPE_8__ {int* isc_ntxd; } ;
struct TYPE_7__ {int tso; TYPE_1__* vsi; } ;
struct TYPE_6__ {TYPE_3__* shared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct tx_ring *VAR_9, if_pkt_info_t VAR_10)
{
 if_softc_ctx_t VAR_11;
 struct i40e_tx_context_desc *VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 u64 VAR_19;

 VAR_17 = VAR_10->ipi_pidx;
 VAR_12 = (struct i40e_tx_context_desc *) &VAR_9->tx_base[VAR_17];
 VAR_18 = VAR_10->ipi_ehdrlen + VAR_10->ipi_ip_hlen + VAR_10->ipi_tcp_hlen;
 VAR_16 = VAR_10->ipi_len - VAR_18;
 VAR_11 = VAR_9->que->vsi->shared;

 VAR_15 = VAR_5;
 VAR_13 = VAR_4;




 if (VAR_10->ipi_tso_segsz < VAR_8) {
  VAR_9->mss_too_small++;
  VAR_10->ipi_tso_segsz = VAR_8;
 }
 VAR_14 = VAR_10->ipi_tso_segsz;


 FUNC_0(VAR_14 <= VAR_7);

 FUNC_0(VAR_10->ipi_ehdrlen != 0);
 FUNC_0(VAR_10->ipi_ip_hlen != 0);

 FUNC_0(VAR_16 != 0);

 FUNC_0(VAR_18 + VAR_14 <= VAR_6);

 VAR_19 = ((u64)VAR_15 << VAR_1) |
     ((u64)VAR_13 << VAR_0) |
     ((u64)VAR_16 << VAR_3) |
     ((u64)VAR_14 << VAR_2);
 VAR_12->type_cmd_tso_mss = FUNC_2(VAR_19);

 VAR_12->tunneling_params = FUNC_1(0);
 VAR_9->que->tso++;

 return ((VAR_17 + 1) & (VAR_11->isc_ntxd[0]-1));
}
