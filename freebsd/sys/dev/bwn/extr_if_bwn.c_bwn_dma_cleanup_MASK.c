
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_dma_ring {scalar_t__ dr_type; int dr_base; int dr_mac; scalar_t__ dr_tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bwn_dma_ring*,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bwn_dma_ring *VAR_7)
{

 if (VAR_7->dr_tx) {
  FUNC_2(VAR_7->dr_mac, VAR_7->dr_base, VAR_7->dr_type);
  if (VAR_7->dr_type == VAR_0) {
   FUNC_0(VAR_7, VAR_6, 0);
   FUNC_0(VAR_7, VAR_5, 0);
  } else
   FUNC_0(VAR_7, VAR_2, 0);
 } else {
  FUNC_1(VAR_7->dr_mac, VAR_7->dr_base, VAR_7->dr_type);
  if (VAR_7->dr_type == VAR_0) {
   FUNC_0(VAR_7, VAR_4, 0);
   FUNC_0(VAR_7, VAR_3, 0);
  } else
   FUNC_0(VAR_7, VAR_1, 0);
 }
}
