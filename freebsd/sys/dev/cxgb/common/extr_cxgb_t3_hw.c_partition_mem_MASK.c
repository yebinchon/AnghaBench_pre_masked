
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tp_params {int chan_rx_size; int chan_tx_size; unsigned int tx_pg_size; unsigned int tx_num_pgs; unsigned int rx_pg_size; unsigned int rx_num_pgs; int ntimer_qs; unsigned int cm_size; } ;
struct TYPE_8__ {unsigned int nservers; unsigned int nfilters; unsigned int nroutes; } ;
struct TYPE_9__ {scalar_t__ rev; TYPE_1__ mc5; } ;
struct TYPE_10__ {TYPE_2__ params; int mc5; } ;
typedef TYPE_3__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_3__*,unsigned int,int,int ) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(adapter_t *VAR_20, const struct tp_params *VAR_21)
{
 unsigned int VAR_22, VAR_23, VAR_24 = FUNC_4(&VAR_20->mc5);
 unsigned int VAR_25 = 0, VAR_26 = 22;

 if (VAR_20->params.rev > 0) {
  if (VAR_24 <= 16 * 1024) {
   VAR_25 = 1;
   VAR_26 = 16;
  } else if (VAR_24 <= 64 * 1024) {
   VAR_25 = 2;
   VAR_26 = 18;
  } else if (VAR_24 <= 256 * 1024) {
   VAR_25 = 3;
   VAR_26 = 20;
  }
 }

 FUNC_6(VAR_20, VAR_8,
       VAR_21->chan_rx_size | (VAR_21->chan_tx_size >> 16));

 FUNC_6(VAR_20, VAR_9, 0);
 FUNC_6(VAR_20, VAR_11, VAR_21->tx_pg_size);
 FUNC_6(VAR_20, VAR_10, VAR_21->tx_num_pgs);
 FUNC_5(VAR_20, VAR_4, FUNC_1(VAR_12),
    FUNC_1(FUNC_2(VAR_21->tx_pg_size) - 12));

 FUNC_6(VAR_20, VAR_5, 0);
 FUNC_6(VAR_20, VAR_7, VAR_21->rx_pg_size);
 FUNC_6(VAR_20, VAR_6, VAR_21->rx_num_pgs);

 VAR_23 = VAR_21->rx_num_pgs + VAR_21->tx_num_pgs;

 VAR_23 += 48;
 VAR_23 -= VAR_23 % 24;
 FUNC_6(VAR_20, VAR_2, VAR_23);

 VAR_22 = VAR_24 * VAR_15;
 FUNC_3(VAR_20, VAR_22, (64 << 10) * 64, VAR_14);
 FUNC_3(VAR_20, VAR_22, (64 << 10) * 64, VAR_13);
 FUNC_6(VAR_20, VAR_3, FUNC_0(VAR_25) | VAR_22);
 VAR_22 += ((VAR_21->ntimer_qs - 1) << VAR_26) + (1 << 22);
 FUNC_3(VAR_20, VAR_22, VAR_23 * 64, VAR_16);
 FUNC_3(VAR_20, VAR_22, 64 * (VAR_23 / 24), VAR_17);
 FUNC_3(VAR_20, VAR_22, 64 * (VAR_21->rx_num_pgs / 24), VAR_18);
 FUNC_3(VAR_20, VAR_22, 64 * (VAR_21->tx_num_pgs / 24), VAR_19);

 VAR_22 = (VAR_22 + 4095) & ~0xfff;
 FUNC_6(VAR_20, VAR_1, VAR_22);
 FUNC_6(VAR_20, VAR_0, VAR_21->cm_size - VAR_22);

 VAR_24 = (VAR_21->cm_size - VAR_22 - (3 << 20)) / 3072 - 32;
 VAR_22 = FUNC_4(&VAR_20->mc5) - VAR_20->params.mc5.nservers -
     VAR_20->params.mc5.nfilters - VAR_20->params.mc5.nroutes;
 if (VAR_24 < VAR_22)
  VAR_20->params.mc5.nservers += VAR_22 - VAR_24;
}
