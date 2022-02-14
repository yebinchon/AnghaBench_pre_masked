
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath_hal*,int ,char*,int) ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_9, int16_t VAR_10[])
{
 int16_t VAR_11;

 VAR_11 = FUNC_1(FUNC_2(VAR_9, VAR_4), VAR_3);
 if (VAR_11 & 0x100)
  VAR_11 = 0 - ((VAR_11 ^ 0x1ff) + 1);
 FUNC_0(VAR_9, VAR_8,
     "NF calibrated [ctl] [chain 0] is %d\n", VAR_11);
 VAR_10[0] = VAR_11;

 VAR_11 = FUNC_1(FUNC_2(VAR_9, VAR_5), VAR_1);
 if (VAR_11 & 0x100)
  VAR_11 = 0 - ((VAR_11 ^ 0x1ff) + 1);
 FUNC_0(VAR_9, VAR_8,
     "NF calibrated [ctl] [chain 1] is %d\n", VAR_11);
 VAR_10[1] = VAR_11;

 VAR_11 = FUNC_1(FUNC_2(VAR_9, VAR_7), VAR_2);
 if (VAR_11 & 0x100)
  VAR_11 = 0 - ((VAR_11 ^ 0x1ff) + 1);
 FUNC_0(VAR_9, VAR_8,
     "NF calibrated [ext] [chain 0] is %d\n", VAR_11);
 VAR_10[3] = VAR_11;

 VAR_11 = FUNC_1(FUNC_2(VAR_9, VAR_6), VAR_0);
 if (VAR_11 & 0x100)
  VAR_11 = 0 - ((VAR_11 ^ 0x1ff) + 1);
 FUNC_0(VAR_9, VAR_8,
     "NF calibrated [ext] [chain 1] is %d\n", VAR_11);
 VAR_10[4] = VAR_11;


        VAR_10[2] = 0;
        VAR_10[5] = 0;

}
