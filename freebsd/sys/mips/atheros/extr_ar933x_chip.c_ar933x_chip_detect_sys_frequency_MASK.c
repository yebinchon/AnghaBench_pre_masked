
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


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
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void
FUNC_1(void)
{
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;

 VAR_27 = FUNC_0(VAR_16);
 if (VAR_27 & VAR_0)
  VAR_21 = (40 * 1000 * 1000);
 else
  VAR_21 = (25 * 1000 * 1000);

 VAR_24 = FUNC_0(VAR_8);
 if (VAR_24 & VAR_3) {
  VAR_18 = VAR_21;
  VAR_17 = VAR_21;
  VAR_19 = VAR_21;
 } else {
  VAR_25 = FUNC_0(VAR_15);

  VAR_27 = (VAR_25 >> VAR_14) &
      VAR_13;
  VAR_26 = VAR_21 / VAR_27;

  VAR_27 = (VAR_25 >> VAR_10) &
      VAR_9;
  VAR_26 *= VAR_27;

  VAR_27 = (VAR_25 >> VAR_12) &
      VAR_11;
  if (VAR_27 == 0)
   VAR_27 = 1;

  VAR_26 >>= VAR_27;

  VAR_27 = ((VAR_24 >> VAR_5) &
       VAR_4) + 1;
  VAR_18 = VAR_26 / VAR_27;

  VAR_27 = ((VAR_24 >> VAR_7) &
        VAR_6) + 1;
  VAR_19 = VAR_26 / VAR_27;

  VAR_27 = ((VAR_24 >> VAR_2) &
       VAR_1) + 1;
  VAR_17 = VAR_26 / VAR_27;
 }





 VAR_22 = VAR_21;






 VAR_20 = VAR_21;




 VAR_23 = VAR_17;
}
