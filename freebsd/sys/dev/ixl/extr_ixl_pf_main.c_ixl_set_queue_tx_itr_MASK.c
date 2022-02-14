
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tx_ring {int bytes; int itr; int latency; scalar_t__ packets; int me; } ;
struct ixl_vsi {int tx_itr_setting; struct i40e_hw* hw; scalar_t__ back; } ;
struct ixl_tx_queue {struct tx_ring txr; struct ixl_vsi* vsi; } ;
struct ixl_pf {int tx_itr; scalar_t__ dynamic_tx_itr; } ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (int ,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

void
FUNC_3(struct ixl_tx_queue *VAR_6)
{
 struct ixl_vsi *VAR_7 = VAR_6->vsi;
 struct ixl_pf *VAR_8 = (struct ixl_pf *)VAR_7->back;
 struct i40e_hw *VAR_9 = VAR_7->hw;
 struct tx_ring *VAR_10 = &VAR_6->txr;
 u16 VAR_11;
 u16 VAR_12 = 0;
 int VAR_13;



 if (VAR_10->bytes == 0)
  return;

 if (VAR_8->dynamic_tx_itr) {
  VAR_13 = VAR_10->bytes/VAR_10->itr;
  VAR_11 = VAR_10->itr;

  switch (VAR_10->latency) {
  case 128:
   if (VAR_13 > 10) {
    VAR_12 = 130;
    VAR_11 = VAR_1;
   }
   break;
  case 130:
   if (VAR_13 > 20) {
    VAR_12 = 129;
    VAR_11 = VAR_2;
   } else if (VAR_13 <= 10) {
    VAR_12 = 128;
    VAR_11 = VAR_0;
   }
   break;
  case 129:
   if (VAR_13 <= 20) {
    VAR_12 = 130;
    VAR_11 = VAR_1;
   }
   break;
  }

  VAR_10->latency = VAR_12;

  if (VAR_11 != VAR_10->itr) {

   VAR_11 = (10 * VAR_11 * VAR_10->itr) /
       ((9 * VAR_11) + VAR_10->itr);
   VAR_10->itr = FUNC_1(VAR_11, VAR_4);
   FUNC_2(VAR_9, FUNC_0(VAR_5,
       VAR_10->me), VAR_10->itr);
  }

 } else {
  if (VAR_7->tx_itr_setting & VAR_3)
   VAR_7->tx_itr_setting = VAR_8->tx_itr;

  if (VAR_10->itr != VAR_7->tx_itr_setting) {
   VAR_10->itr = VAR_7->tx_itr_setting;
   FUNC_2(VAR_9, FUNC_0(VAR_5,
       VAR_10->me), VAR_10->itr);
  }
 }
 VAR_10->bytes = 0;
 VAR_10->packets = 0;
 return;
}
