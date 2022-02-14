
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (int*,int,int ) ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int ) ;
 int VAR_28 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_51 = VAR_27;

 if (VAR_39 < 1) {



  FUNC_0(&VAR_39, VAR_51, VAR_18);

 }

 FUNC_0(&VAR_40, VAR_51, VAR_19);

 if (VAR_37 < 1) {



  FUNC_0(&VAR_37, VAR_51, VAR_16);

 }

 FUNC_0(&VAR_38, VAR_51, VAR_17);
 if (VAR_49 == -1)
  VAR_49 = 0;

 if (VAR_46 == -1)
  VAR_46 = 0;

 if (VAR_30 == -1)
  VAR_30 = 0;







 if (VAR_47 < 0 || VAR_47 >= VAR_23)
  VAR_47 = VAR_24;

 if (VAR_42 < -1 || VAR_42 >= VAR_22)
  VAR_42 = VAR_20;

 if (VAR_45 < 128)
  VAR_45 = 128;

 if (VAR_44 < 128)
  VAR_44 = 128;
 while (VAR_44 & 7)
  VAR_44++;

 VAR_29 &= VAR_9 | VAR_8 | VAR_7;
 if (VAR_41 < 1)
  VAR_41 = 1;
 if (VAR_41 > FUNC_1(VAR_50)) {
  VAR_41 = FUNC_1(VAR_50);
  FUNC_2("cxgbe: number of VIs limited to %d\n", VAR_41);
 }

 if (VAR_28 < 0 || VAR_28 > 2) {
  VAR_28 = 1;

  if (VAR_26 == VAR_0)
   VAR_28 = 0;

 }
}
