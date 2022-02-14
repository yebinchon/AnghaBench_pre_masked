
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ixgbe_hw_stats {int * qbrc; int * qprc; int * qbtc; int * qptc; } ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ out_overflow_discards; scalar_t__ in_overflow_discards; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 size_t VAR_4 ;

s32 FUNC_6(struct ixgbe_hw *VAR_5,
     struct ixgbe_hw_stats *VAR_6,
     u8 VAR_7)
{
 int VAR_8;

 FUNC_0("dcb_get_tc_stats");

 if (VAR_7 > VAR_0)
  return VAR_1;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

  VAR_6->qptc[VAR_8] += FUNC_5(VAR_5, FUNC_4(VAR_8));

  VAR_6->qbtc[VAR_8] += FUNC_5(VAR_5, FUNC_2(VAR_8));

  VAR_6->qprc[VAR_8] += FUNC_5(VAR_5, FUNC_3(VAR_8));

  VAR_6->qbrc[VAR_8] += FUNC_5(VAR_5, FUNC_1(VAR_8));
 }

 return VAR_2;
}
