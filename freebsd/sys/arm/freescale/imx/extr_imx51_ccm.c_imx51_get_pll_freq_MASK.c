
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {int* pll_freq; } ;


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
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_17 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static uint64_t
FUNC_5(u_int VAR_18)
{
 uint32_t VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23;
 int32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;
 uint64_t VAR_28 = 0;
 u_int VAR_29 = 0;

 FUNC_0(1 <= VAR_18 && VAR_18 <= VAR_16, ("Wrong PLL id"));

 VAR_19 = FUNC_3(VAR_17, VAR_18, VAR_2);

 if (VAR_19 & VAR_10) {
  VAR_20 = FUNC_3(VAR_17, VAR_18, VAR_5);
  VAR_21 = FUNC_3(VAR_17, VAR_18, VAR_3);
  VAR_22 = FUNC_3(VAR_17, VAR_18, VAR_4);
 } else {
  VAR_20 = FUNC_3(VAR_17, VAR_18, VAR_8);
  VAR_21 = FUNC_3(VAR_17, VAR_18, VAR_6);
  VAR_22 = FUNC_3(VAR_17, VAR_18, VAR_7);
 }

 VAR_26 = VAR_20 & VAR_15;
 VAR_23 = FUNC_2(5, (VAR_20 & VAR_13) >> VAR_14);
 VAR_25 = VAR_21;
 if (VAR_22 & 0x04000000)

  VAR_24 = (uint32_t)(0xf8000000 | VAR_22);
 else
  VAR_24 = VAR_22;

 switch (VAR_19 & VAR_12) {
 case 129:


  VAR_29 = 24000000;
  break;
 case 128:
  VAR_27 = FUNC_1(VAR_17, VAR_0);
  if (VAR_27 & VAR_1)

   VAR_29 = 32768 * 1024;
  else

   VAR_29 = 32768 * 512;
  break;
 default:
  VAR_29 = 0;
 }

 if (VAR_19 & VAR_11)
  VAR_29 /= 2;

 VAR_29 *= 4;
 VAR_28 = (int64_t)VAR_29 * VAR_23 + (int64_t)VAR_29 * VAR_24 / (VAR_25 + 1);
 VAR_28 /= VAR_26 + 1;

 if (!(VAR_19 & VAR_9))
  VAR_28 /= 2;
 VAR_17->pll_freq[VAR_18-1] = VAR_28;

 return (VAR_28);
}
