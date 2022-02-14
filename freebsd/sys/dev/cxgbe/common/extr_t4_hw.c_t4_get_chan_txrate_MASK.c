
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct adapter {TYPE_1__* chip_params; } ;
struct TYPE_2__ {int nchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct adapter*,int ) ;
 int FUNC_9 (struct adapter*,int ) ;

void FUNC_10(struct adapter *VAR_2, u64 *VAR_3, u64 *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_9(VAR_2, VAR_1);
 VAR_3[0] = FUNC_8(VAR_2, FUNC_4(VAR_5));
 VAR_3[1] = FUNC_8(VAR_2, FUNC_5(VAR_5));
 if (VAR_2->chip_params->nchan > 2) {
  VAR_3[2] = FUNC_8(VAR_2, FUNC_6(VAR_5));
  VAR_3[3] = FUNC_8(VAR_2, FUNC_7(VAR_5));
 }

 VAR_5 = FUNC_9(VAR_2, VAR_0);
 VAR_4[0] = FUNC_8(VAR_2, FUNC_0(VAR_5));
 VAR_4[1] = FUNC_8(VAR_2, FUNC_1(VAR_5));
 if (VAR_2->chip_params->nchan > 2) {
  VAR_4[2] = FUNC_8(VAR_2, FUNC_2(VAR_5));
  VAR_4[3] = FUNC_8(VAR_2, FUNC_3(VAR_5));
 }
}
