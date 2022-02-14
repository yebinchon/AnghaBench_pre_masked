
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_short ;
typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ,void*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 char* VAR_20 ;
 int VAR_21 ;
 void** VAR_22 ;
 int* VAR_23 ;
 char* VAR_24 ;
 char* VAR_25 ;
 void* VAR_26 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int VAR_27 ;
 char* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_8 (int,int) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_9 (int *,char*,int *,int ) ;
 char* VAR_33 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (int) ;
 int VAR_34 ;

int
FUNC_13(void)
{
 u_int64_t *VAR_35, *VAR_36, *VAR_37;
 u_int32_t VAR_38;
 int VAR_39, VAR_40, VAR_41, VAR_42;
 u_char VAR_43;

 FUNC_9(&VAR_17, "ap boot", ((void*)0), VAR_5);


 FUNC_4(VAR_32, (void *)FUNC_2(VAR_21), VAR_19);


 VAR_35 = (uint64_t *)FUNC_2(VAR_31);
 VAR_36 = VAR_35 + (VAR_8) / sizeof(u_int64_t);
 VAR_37 = VAR_36 + (VAR_8) / sizeof(u_int64_t);


 for (VAR_42 = 0; VAR_42 < 512; VAR_42++) {

  VAR_35[VAR_42] = (u_int64_t)(uintptr_t)(VAR_31 + VAR_8);
  VAR_35[VAR_42] |= VAR_12 | VAR_10 | VAR_11;


  VAR_36[VAR_42] = (u_int64_t)(uintptr_t)(VAR_31 + (2 * VAR_8));
  VAR_36[VAR_42] |= VAR_12 | VAR_10 | VAR_11;


  VAR_37[VAR_42] = VAR_42 * (2 * 1024 * 1024);
  VAR_37[VAR_42] |= VAR_12 | VAR_10 | VAR_9 | VAR_11;
 }


 VAR_38 = *((u_int32_t *) VAR_13);
 FUNC_10(VAR_3, VAR_0);
 VAR_43 = FUNC_5(VAR_2);


 *((volatile u_short *) VAR_13) = VAR_15;
 *((volatile u_short *) VAR_14) = (VAR_21 >> 4);
 FUNC_10(VAR_3, VAR_0);
 FUNC_10(VAR_2, VAR_1);
 VAR_41 = 0;
 for (VAR_40 = 1; VAR_40 < VAR_30; VAR_40++) {
  VAR_39 = VAR_23[VAR_40];





  VAR_22[VAR_40] = (void *)FUNC_6(VAR_27 * VAR_8,
      VAR_6 | VAR_7);
  VAR_25 = (char *)FUNC_6(VAR_8, VAR_6 |
      VAR_7);
  VAR_28 = (char *)FUNC_6(VAR_8, VAR_6 | VAR_7);
  VAR_33 = (char *)FUNC_7(
      FUNC_1(VAR_41), VAR_8, VAR_6 | VAR_7);
  VAR_24 = (char *)FUNC_7(
      FUNC_1(VAR_41), VAR_8, VAR_6 | VAR_7);
  VAR_26 = (void *)FUNC_7(FUNC_1(VAR_41),
      VAR_4, VAR_6 | VAR_7);

  VAR_20 = (char *)VAR_22[VAR_40] +
      VAR_27 * VAR_8 - 8;
  VAR_18 = VAR_40;


  if (!FUNC_12(VAR_39)) {

   *(u_int32_t *) VAR_13 = VAR_38;
   FUNC_11("AP #%d (PHY# %d) failed!", VAR_40, VAR_39);
  }

  FUNC_0(VAR_40, &VAR_16);
 }


 *(u_int32_t *) VAR_13 = VAR_38;

 FUNC_10(VAR_3, VAR_0);
 FUNC_10(VAR_2, VAR_43);


 return (VAR_29);
}
