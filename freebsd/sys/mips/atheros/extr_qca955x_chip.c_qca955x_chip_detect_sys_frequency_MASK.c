
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 unsigned long VAR_33 ;
 unsigned long VAR_34 ;
 unsigned long VAR_35 ;
 unsigned long VAR_36 ;
 unsigned long VAR_37 ;
 unsigned long VAR_38 ;
 unsigned long VAR_39 ;

__attribute__((used)) static void
FUNC_1(void)
{
 unsigned long VAR_40;
 unsigned long VAR_41;
 unsigned long VAR_42;
 unsigned long VAR_43;
 uint32_t VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
 uint32_t VAR_51, VAR_52;
 uint32_t VAR_53;

 VAR_53 = FUNC_0(VAR_32);
 if (VAR_53 & VAR_0)
  VAR_40 = 40 * 1000 * 1000;
 else
  VAR_40 = 25 * 1000 * 1000;

 VAR_44 = FUNC_0(VAR_22);
 VAR_45 = (VAR_44 >> VAR_19) &
    VAR_18;
 VAR_46 = (VAR_44 >> VAR_21) &
    VAR_20;
 VAR_47 = (VAR_44 >> VAR_17) &
        VAR_16;
 VAR_48 = (VAR_44 >> VAR_15) &
        VAR_14;

 VAR_51 = VAR_47 * VAR_40 / VAR_46;
 VAR_51 += VAR_48 * VAR_40 / (VAR_46 * (1 << 6));
 VAR_51 /= (1 << VAR_45);

 VAR_44 = FUNC_0(VAR_31);
 VAR_45 = (VAR_44 >> VAR_28) &
    VAR_27;
 VAR_46 = (VAR_44 >> VAR_30) &
    VAR_29;
 VAR_47 = (VAR_44 >> VAR_26) &
        VAR_25;
 VAR_48 = (VAR_44 >> VAR_24) &
        VAR_23;

 VAR_52 = VAR_47 * VAR_40 / VAR_46;
 VAR_52 += VAR_48 * VAR_40 / (VAR_46 * (1 << 10));
 VAR_52 /= (1 << VAR_45);

 VAR_49 = FUNC_0(VAR_13);

 VAR_50 = (VAR_49 >> VAR_8) &
    VAR_7;

 if (VAR_49 & VAR_6)
  VAR_41 = VAR_40;
 else if (VAR_49 & VAR_5)
  VAR_41 = VAR_52 / (VAR_50 + 1);
 else
  VAR_41 = VAR_51 / (VAR_50 + 1);

 VAR_50 = (VAR_49 >> VAR_12) &
    VAR_11;

 if (VAR_49 & VAR_10)
  VAR_42 = VAR_40;
 else if (VAR_49 & VAR_9)
  VAR_42 = VAR_51 / (VAR_50 + 1);
 else
  VAR_42 = VAR_52 / (VAR_50 + 1);

 VAR_50 = (VAR_49 >> VAR_4) &
    VAR_3;

 if (VAR_49 & VAR_2)
  VAR_43 = VAR_40;
 else if (VAR_49 & VAR_1)
  VAR_43 = VAR_52 / (VAR_50 + 1);
 else
  VAR_43 = VAR_51 / (VAR_50 + 1);

 VAR_35 = VAR_42;
 VAR_34 = VAR_41;
 VAR_33 = VAR_43;

 VAR_39 = VAR_40;
 VAR_38 = VAR_40;
 VAR_36 = VAR_40;
 VAR_37 = VAR_40;
}
