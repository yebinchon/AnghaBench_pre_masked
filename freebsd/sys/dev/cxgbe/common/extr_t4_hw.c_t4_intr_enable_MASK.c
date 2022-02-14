
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ) ;
 int VAR_26 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ,int,int) ;
 int FUNC_3 (struct adapter*,int ,int ) ;

void FUNC_4(struct adapter *VAR_27)
{
 u32 VAR_28 = 0;

 if (FUNC_1(VAR_27) <= VAR_4)
  VAR_28 = VAR_16 | VAR_17 | VAR_5;
 else
  VAR_28 = VAR_20 | VAR_21 | VAR_22;
 VAR_28 |= VAR_12 | VAR_19 |
     VAR_13 | VAR_15 |
     VAR_24 | VAR_14 |
     VAR_11 | VAR_10 | VAR_9 |
     VAR_8 | VAR_18 | VAR_6 |
     VAR_7;
 FUNC_2(VAR_27, VAR_3, VAR_28, VAR_28);
 FUNC_3(VAR_27, FUNC_0(VAR_2), VAR_26);
 FUNC_2(VAR_27, VAR_0, VAR_25 | VAR_23, 0);
 FUNC_2(VAR_27, VAR_1, 0, 1 << VAR_27->pf);
}
