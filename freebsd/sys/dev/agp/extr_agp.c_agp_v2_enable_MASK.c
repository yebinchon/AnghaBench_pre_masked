
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int ,char*,int) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_6, device_t VAR_7, u_int32_t VAR_8)
{
 u_int32_t VAR_9, VAR_10;
 u_int32_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_9 = FUNC_11(VAR_6, FUNC_9(VAR_6) + VAR_4, 4);
 VAR_10 = FUNC_11(VAR_7, FUNC_9(VAR_7) + VAR_4, 4);


 VAR_12 = FUNC_2(VAR_8);
 if (FUNC_2(VAR_9) < VAR_12)
  VAR_12 = FUNC_2(VAR_9);
 if (FUNC_2(VAR_10) < VAR_12)
  VAR_12 = FUNC_2(VAR_10);


 VAR_13 = (FUNC_3(VAR_9)
        & FUNC_3(VAR_10)
        & FUNC_3(VAR_8));


 VAR_14 = (FUNC_0(VAR_9)
        & FUNC_0(VAR_10)
        & FUNC_0(VAR_8));


 VAR_15 = (FUNC_1(VAR_9)
  & FUNC_1(VAR_10)
  & FUNC_1(VAR_8));
 if (VAR_15 & VAR_3)
  VAR_15 = VAR_3;
 else if (VAR_15 & VAR_2)
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_1;
 if (VAR_5)
  FUNC_10(VAR_6, "Setting AGP v2 mode %d\n", VAR_15);


 VAR_11 = 0;
 VAR_11 = FUNC_7(0, VAR_12);
 VAR_11 = FUNC_8(VAR_11, VAR_13);
 VAR_11 = FUNC_5(VAR_11, VAR_14);
 VAR_11 = FUNC_6(VAR_11, VAR_15);
 VAR_11 = FUNC_4(VAR_11, 1);
 FUNC_12(VAR_6, FUNC_9(VAR_6) + VAR_0, VAR_11, 4);
 FUNC_12(VAR_7, FUNC_9(VAR_7) + VAR_0, VAR_11, 4);

 return 0;
}
