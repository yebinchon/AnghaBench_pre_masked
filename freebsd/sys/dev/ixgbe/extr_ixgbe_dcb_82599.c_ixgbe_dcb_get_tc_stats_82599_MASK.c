
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ixgbe_hw_stats {int* qbtc; int* qbrc; int * qprdc; int * qprc; int * qptc; } ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;

s32 FUNC_9(struct ixgbe_hw *VAR_3,
     struct ixgbe_hw_stats *VAR_4,
     u8 VAR_5)
{
 int VAR_6;

 FUNC_0("dcb_get_tc_stats");

 if (VAR_5 > VAR_0)
  return VAR_1;


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

  VAR_4->qptc[VAR_6] += FUNC_8(VAR_3, FUNC_7(VAR_6));

  VAR_4->qbtc[VAR_6] += FUNC_8(VAR_3, FUNC_4(VAR_6));
  VAR_4->qbtc[VAR_6] +=
   (((u64)(FUNC_8(VAR_3, FUNC_3(VAR_6)))) << 32);

  VAR_4->qprc[VAR_6] += FUNC_8(VAR_3, FUNC_5(VAR_6));

  VAR_4->qbrc[VAR_6] += FUNC_8(VAR_3, FUNC_2(VAR_6));
  VAR_4->qbrc[VAR_6] +=
   (((u64)(FUNC_8(VAR_3, FUNC_1(VAR_6)))) << 32);


  VAR_4->qprdc[VAR_6] += FUNC_8(VAR_3, FUNC_6(VAR_6));
 }

 return VAR_2;
}
