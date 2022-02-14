
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct mac_stats {scalar_t__ rx_pause; void* tx_frames; } ;
struct cmac {unsigned int tx_tcnt; scalar_t__ rx_pause; int toggle_cnt; unsigned int tx_xcnt; scalar_t__ offset; scalar_t__ txen; void* tx_mcnt; scalar_t__ multiport; struct mac_stats stats; int * adapter; } ;
typedef int adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (void*) ;
 unsigned int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct cmac*) ;
 int FUNC_3 (struct cmac*,int) ;
 void* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;

int FUNC_6(struct cmac *VAR_10)
{
 int VAR_11;
 unsigned int VAR_12, VAR_13;
 adapter_t *VAR_14 = VAR_10->adapter;
 struct mac_stats *VAR_15 = &VAR_10->stats;
 u64 VAR_16 = VAR_15->tx_frames;

 if (VAR_10->multiport)
  VAR_16 = FUNC_4(VAR_14, VAR_4);

 VAR_11 = 0;
 VAR_13 = 1;
 VAR_12 = VAR_10->tx_tcnt;
 if (VAR_16 == VAR_10->tx_mcnt && VAR_10->rx_pause == VAR_15->rx_pause) {
  u32 VAR_17, VAR_18, VAR_19;

  VAR_13 = (FUNC_1(FUNC_4(VAR_14,
            VAR_6 +
            VAR_10->offset)));
  VAR_17 = FUNC_4(VAR_14, VAR_0);
  VAR_18 = FUNC_2(VAR_10) ? VAR_17 & VAR_9 : VAR_17 & VAR_8;
  VAR_19 = VAR_17 & VAR_7;
  if (VAR_18 && VAR_19 && (VAR_13 == 0)) {
   FUNC_5(VAR_14, VAR_1,
         VAR_3 + FUNC_2(VAR_10));
   VAR_12 = (FUNC_0(FUNC_4(VAR_14,
          VAR_2)));
  } else
   goto out;

 } else {
  VAR_10->toggle_cnt = 0;
  goto out;
 }

 if ((VAR_12 != VAR_10->tx_tcnt) && (VAR_10->tx_xcnt == 0)) {
  if (VAR_10->toggle_cnt > 4) {
   VAR_11 = 2;
   goto out;
  } else {
   VAR_11 = 1;
   goto out;
  }
 } else {
  VAR_10->toggle_cnt = 0;
  goto out;
 }

out:
 VAR_10->tx_tcnt = VAR_12;
 VAR_10->tx_xcnt = VAR_13;
 VAR_10->tx_mcnt = VAR_15->tx_frames;
 VAR_10->rx_pause = VAR_15->rx_pause;
 if (VAR_11 == 1) {
  FUNC_5(VAR_14, VAR_5 + VAR_10->offset, 0);
  FUNC_4(VAR_14, VAR_5 + VAR_10->offset);
  FUNC_5(VAR_14, VAR_5 + VAR_10->offset, VAR_10->txen);
  FUNC_4(VAR_14, VAR_5 + VAR_10->offset);
  VAR_10->toggle_cnt++;
 } else if (VAR_11 == 2) {
  FUNC_3(VAR_10, -1);
  VAR_10->toggle_cnt = 0;
 }
 return VAR_11;
}
