
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hal*,int ,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_5, int16_t VAR_6[])
{
 int16_t VAR_7;

 VAR_7 = FUNC_1(FUNC_2(VAR_5, VAR_2), VAR_1);
 if (VAR_7 & 0x100)
  VAR_7 = 0 - ((VAR_7 ^ 0x1ff) + 1);
 FUNC_0(VAR_5, VAR_4,
     "NF calibrated [ctl] [chain 0] is %d\n", VAR_7);
 VAR_6[0] = VAR_7;


 VAR_7 = FUNC_1(FUNC_2(VAR_5, VAR_3), VAR_0);
 if (VAR_7 & 0x100)
  VAR_7 = 0 - ((VAR_7 ^ 0x1ff) + 1);
 FUNC_0(VAR_5, VAR_4,
     "NF calibrated [ext] [chain 0] is %d\n", VAR_7);
 VAR_6[3] = VAR_7;


 VAR_6[1] = 0;
 VAR_6[4] = 0;


 VAR_6[2] = 0;
 VAR_6[5] = 0;
}
