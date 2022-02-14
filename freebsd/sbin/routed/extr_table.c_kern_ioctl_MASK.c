
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct khash {int k_state; int k_metric; int k_mask; int k_gate; int k_dst; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct khash *VAR_2,
    int VAR_3,
    int VAR_4)

{
 switch (VAR_3) {
 case 128:
  VAR_2->k_state &= ~VAR_1;
  if (VAR_2->k_state & VAR_0)
   return;
  VAR_2->k_state |= VAR_0;
  break;
 case 130:
  VAR_2->k_state &= ~VAR_0;
  break;
 case 129:
  if (VAR_2->k_state & VAR_0) {
   VAR_3 = 130;
   VAR_2->k_state &= ~VAR_0;
  }
  break;
 }

 FUNC_0(VAR_3, VAR_2->k_dst, VAR_2->k_gate, VAR_2->k_mask, VAR_2->k_metric, VAR_4);
}
