
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
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (int ,char*,int) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,int) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_5, device_t VAR_6, u_int32_t VAR_7)
{
 u_int32_t VAR_8, VAR_9;
 u_int32_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_8 = FUNC_15(VAR_5, FUNC_13(VAR_5) + VAR_3, 4);
 VAR_9 = FUNC_15(VAR_6, FUNC_13(VAR_6) + VAR_3, 4);


 VAR_11 = FUNC_4(VAR_7);
 if (FUNC_4(VAR_8) < VAR_11)
  VAR_11 = FUNC_4(VAR_8);
 if (FUNC_4(VAR_9) < VAR_11)
  VAR_11 = FUNC_4(VAR_9);





 VAR_15 = FUNC_0(VAR_7);
 if (FUNC_0(VAR_8) > VAR_11)
  VAR_11 = FUNC_0(VAR_8);
 if (FUNC_0(VAR_9) > VAR_11)
  VAR_11 = FUNC_0(VAR_9);


 VAR_16 = FUNC_1(VAR_8);
 if (FUNC_1(VAR_9) < VAR_16)
  VAR_16 = FUNC_1(VAR_9);


 VAR_12 = 1;


 VAR_13 = (FUNC_2(VAR_8)
        & FUNC_2(VAR_9)
        & FUNC_2(VAR_7));


 VAR_14 = (FUNC_3(VAR_8)
  & FUNC_3(VAR_9)
  & FUNC_3(VAR_7));
 if (VAR_14 & VAR_2)
  VAR_14 = VAR_2;
 else
  VAR_14 = VAR_1;
 if (VAR_4)
  FUNC_14(VAR_5, "Setting AGP v3 mode %d\n", VAR_14 * 4);

 FUNC_16(VAR_5, FUNC_13(VAR_5) + VAR_0, 0, 4);


 VAR_10 = 0;
 VAR_10 = FUNC_11(0, VAR_11);
 VAR_10 = FUNC_6(VAR_10, VAR_15);
 VAR_10 = FUNC_7(VAR_10, VAR_16);
 VAR_10 = FUNC_12(VAR_10, VAR_12);
 VAR_10 = FUNC_8(VAR_10, VAR_13);
 VAR_10 = FUNC_10(VAR_10, VAR_14);
 VAR_10 = FUNC_9(VAR_10, 1);
 VAR_10 = FUNC_5(VAR_10, 1);
 FUNC_16(VAR_5, FUNC_13(VAR_5) + VAR_0, VAR_10, 4);
 FUNC_16(VAR_6, FUNC_13(VAR_6) + VAR_0, VAR_10, 4);

 return 0;
}
