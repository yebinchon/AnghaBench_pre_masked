
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (int,int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned int*,unsigned int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(unsigned VAR_36, unsigned VAR_37, unsigned VAR_38,
                                 unsigned *VAR_39,
                                 unsigned *VAR_40) {
  unsigned VAR_41 = 0;
  unsigned VAR_42 = 0;
  unsigned VAR_43, VAR_44;
  if ((VAR_37 >> 15) & 1)
    do { if (VAR_20 < 32) VAR_41 |= 1U << (VAR_20 & 0x1f); else if (VAR_20 < 64) VAR_42 |= 1U << ((VAR_20 - 32) & 0x1f); } while (0);
  if ((VAR_37 >> 23) & 1)
    do { if (VAR_24 < 32) VAR_41 |= 1U << (VAR_24 & 0x1f); else if (VAR_24 < 64) VAR_42 |= 1U << ((VAR_24 - 32) & 0x1f); } while (0);
  if ((VAR_37 >> 25) & 1)
    do { if (VAR_27 < 32) VAR_41 |= 1U << (VAR_27 & 0x1f); else if (VAR_27 < 64) VAR_42 |= 1U << ((VAR_27 - 32) & 0x1f); } while (0);
  if ((VAR_37 >> 26) & 1)
    do { if (VAR_28 < 32) VAR_41 |= 1U << (VAR_28 & 0x1f); else if (VAR_28 < 64) VAR_42 |= 1U << ((VAR_28 - 32) & 0x1f); } while (0);

  if ((VAR_36 >> 0) & 1)
    do { if (VAR_29 < 32) VAR_41 |= 1U << (VAR_29 & 0x1f); else if (VAR_29 < 64) VAR_42 |= 1U << ((VAR_29 - 32) & 0x1f); } while (0);
  if ((VAR_36 >> 1) & 1)
    do { if (VAR_25 < 32) VAR_41 |= 1U << (VAR_25 & 0x1f); else if (VAR_25 < 64) VAR_42 |= 1U << ((VAR_25 - 32) & 0x1f); } while (0);
  if ((VAR_36 >> 9) & 1)
    do { if (VAR_33 < 32) VAR_41 |= 1U << (VAR_33 & 0x1f); else if (VAR_33 < 64) VAR_42 |= 1U << ((VAR_33 - 32) & 0x1f); } while (0);
  if ((VAR_36 >> 12) & 1)
    do { if (VAR_21 < 32) VAR_41 |= 1U << (VAR_21 & 0x1f); else if (VAR_21 < 64) VAR_42 |= 1U << ((VAR_21 - 32) & 0x1f); } while (0);
  if ((VAR_36 >> 19) & 1)
    do { if (VAR_30 < 32) VAR_41 |= 1U << (VAR_30 & 0x1f); else if (VAR_30 < 64) VAR_42 |= 1U << ((VAR_30 - 32) & 0x1f); } while (0);
  if ((VAR_36 >> 20) & 1)
    do { if (VAR_31 < 32) VAR_41 |= 1U << (VAR_31 & 0x1f); else if (VAR_31 < 64) VAR_42 |= 1U << ((VAR_31 - 32) & 0x1f); } while (0);
  if ((VAR_36 >> 23) & 1)
    do { if (VAR_26 < 32) VAR_41 |= 1U << (VAR_26 & 0x1f); else if (VAR_26 < 64) VAR_42 |= 1U << ((VAR_26 - 32) & 0x1f); } while (0);
  if ((VAR_36 >> 25) & 1)
    do { if (VAR_0 < 32) VAR_41 |= 1U << (VAR_0 & 0x1f); else if (VAR_0 < 64) VAR_42 |= 1U << ((VAR_0 - 32) & 0x1f); } while (0);




  const unsigned VAR_45 = (1 << 27) | (1 << 28);
  bool VAR_46 = ((VAR_36 & VAR_45) == VAR_45) && !FUNC_2(&VAR_43, &VAR_37) &&
                ((VAR_43 & 0x6) == 0x6);
  bool VAR_47 = VAR_46 && ((VAR_43 & 0xe0) == 0xe0);

  if (VAR_46)
    do { if (VAR_1 < 32) VAR_41 |= 1U << (VAR_1 & 0x1f); else if (VAR_1 < 64) VAR_42 |= 1U << ((VAR_1 - 32) & 0x1f); } while (0);

  bool VAR_48 =
      VAR_38 >= 0x7 && !FUNC_1(0x7, 0x0, &VAR_43, &VAR_44, &VAR_36, &VAR_37);

  if (VAR_48 && ((VAR_44 >> 3) & 1))
    do { if (VAR_18 < 32) VAR_41 |= 1U << (VAR_18 & 0x1f); else if (VAR_18 < 64) VAR_42 |= 1U << ((VAR_18 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 5) & 1) && VAR_46)
    do { if (VAR_2 < 32) VAR_41 |= 1U << (VAR_2 & 0x1f); else if (VAR_2 < 64) VAR_42 |= 1U << ((VAR_2 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 8) & 1))
    do { if (VAR_19 < 32) VAR_41 |= 1U << (VAR_19 & 0x1f); else if (VAR_19 < 64) VAR_42 |= 1U << ((VAR_19 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 16) & 1) && VAR_47)
    do { if (VAR_10 < 32) VAR_41 |= 1U << (VAR_10 & 0x1f); else if (VAR_10 < 64) VAR_42 |= 1U << ((VAR_10 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 17) & 1) && VAR_47)
    do { if (VAR_8 < 32) VAR_41 |= 1U << (VAR_8 & 0x1f); else if (VAR_8 < 64) VAR_42 |= 1U << ((VAR_8 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 21) & 1) && VAR_47)
    do { if (VAR_11 < 32) VAR_41 |= 1U << (VAR_11 & 0x1f); else if (VAR_11 < 64) VAR_42 |= 1U << ((VAR_11 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 26) & 1) && VAR_47)
    do { if (VAR_12 < 32) VAR_41 |= 1U << (VAR_12 & 0x1f); else if (VAR_12 < 64) VAR_42 |= 1U << ((VAR_12 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 27) & 1) && VAR_47)
    do { if (VAR_9 < 32) VAR_41 |= 1U << (VAR_9 & 0x1f); else if (VAR_9 < 64) VAR_42 |= 1U << ((VAR_9 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 28) & 1) && VAR_47)
    do { if (VAR_7 < 32) VAR_41 |= 1U << (VAR_7 & 0x1f); else if (VAR_7 < 64) VAR_42 |= 1U << ((VAR_7 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 30) & 1) && VAR_47)
    do { if (VAR_6 < 32) VAR_41 |= 1U << (VAR_6 & 0x1f); else if (VAR_6 < 64) VAR_42 |= 1U << ((VAR_6 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_44 >> 31) & 1) && VAR_47)
    do { if (VAR_15 < 32) VAR_41 |= 1U << (VAR_15 & 0x1f); else if (VAR_15 < 64) VAR_42 |= 1U << ((VAR_15 - 32) & 0x1f); } while (0);

  if (VAR_48 && ((VAR_36 >> 1) & 1) && VAR_47)
    do { if (VAR_13 < 32) VAR_41 |= 1U << (VAR_13 & 0x1f); else if (VAR_13 < 64) VAR_42 |= 1U << ((VAR_13 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_36 >> 6) & 1) && VAR_47)
    do { if (VAR_14 < 32) VAR_41 |= 1U << (VAR_14 & 0x1f); else if (VAR_14 < 64) VAR_42 |= 1U << ((VAR_14 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_36 >> 8) & 1))
    do { if (VAR_23 < 32) VAR_41 |= 1U << (VAR_23 & 0x1f); else if (VAR_23 < 64) VAR_42 |= 1U << ((VAR_23 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_36 >> 10) & 1) && VAR_46)
    do { if (VAR_34 < 32) VAR_41 |= 1U << (VAR_34 & 0x1f); else if (VAR_34 < 64) VAR_42 |= 1U << ((VAR_34 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_36 >> 11) & 1) && VAR_47)
    do { if (VAR_16 < 32) VAR_41 |= 1U << (VAR_16 & 0x1f); else if (VAR_16 < 64) VAR_42 |= 1U << ((VAR_16 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_36 >> 12) & 1) && VAR_47)
    do { if (VAR_5 < 32) VAR_41 |= 1U << (VAR_5 & 0x1f); else if (VAR_5 < 64) VAR_42 |= 1U << ((VAR_5 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_36 >> 14) & 1) && VAR_47)
    do { if (VAR_17 < 32) VAR_41 |= 1U << (VAR_17 & 0x1f); else if (VAR_17 < 64) VAR_42 |= 1U << ((VAR_17 - 32) & 0x1f); } while (0);

  if (VAR_48 && ((VAR_37 >> 2) & 1) && VAR_47)
    do { if (VAR_4 < 32) VAR_41 |= 1U << (VAR_4 & 0x1f); else if (VAR_4 < 64) VAR_42 |= 1U << ((VAR_4 - 32) & 0x1f); } while (0);
  if (VAR_48 && ((VAR_37 >> 3) & 1) && VAR_47)
    do { if (VAR_3 < 32) VAR_41 |= 1U << (VAR_3 & 0x1f); else if (VAR_3 < 64) VAR_42 |= 1U << ((VAR_3 - 32) & 0x1f); } while (0);

  unsigned VAR_49;
  FUNC_0(0x80000000, &VAR_49, &VAR_44, &VAR_36, &VAR_37);

  bool VAR_50 = VAR_49 >= 0x80000001 &&
                     !FUNC_0(0x80000001, &VAR_43, &VAR_44, &VAR_36, &VAR_37);
  if (VAR_50 && ((VAR_36 >> 6) & 1))
    do { if (VAR_32 < 32) VAR_41 |= 1U << (VAR_32 & 0x1f); else if (VAR_32 < 64) VAR_42 |= 1U << ((VAR_32 - 32) & 0x1f); } while (0);
  if (VAR_50 && ((VAR_36 >> 11) & 1))
    do { if (VAR_35 < 32) VAR_41 |= 1U << (VAR_35 & 0x1f); else if (VAR_35 < 64) VAR_42 |= 1U << ((VAR_35 - 32) & 0x1f); } while (0);
  if (VAR_50 && ((VAR_36 >> 16) & 1))
    do { if (VAR_22 < 32) VAR_41 |= 1U << (VAR_22 & 0x1f); else if (VAR_22 < 64) VAR_42 |= 1U << ((VAR_22 - 32) & 0x1f); } while (0);

  *VAR_39 = VAR_41;
  *VAR_40 = VAR_42;

}
