
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tc_cnt; } ;
struct xgbe_prv_data {TYPE_1__ hw_feat; } ;


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
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,unsigned int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_10)
{
 unsigned int VAR_11;


 FUNC_0(VAR_10, VAR_2, VAR_0, VAR_1);


 for (VAR_11 = 0; VAR_11 < VAR_10->hw_feat.tc_cnt; VAR_11++) {
  FUNC_1(VAR_10, VAR_11, VAR_4, VAR_9,
           VAR_6);
  FUNC_1(VAR_10, VAR_11, VAR_5, VAR_7, 1);
 }


 FUNC_0(VAR_10, VAR_2, VAR_8, VAR_3);
}
