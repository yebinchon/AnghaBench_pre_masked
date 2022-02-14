
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;

uint64_t
FUNC_1(void)
{
 uint64_t VAR_17;
 uint64_t VAR_18, VAR_19, VAR_20;
 uint16_t VAR_21[VAR_16/sizeof(uint16_t)];
 uint8_t *VAR_22 = (uint8_t *)&VAR_21;
 uint8_t VAR_23, VAR_24, VAR_25;

 FUNC_0(VAR_21);

 VAR_20 = VAR_22[VAR_14];
 VAR_20 &= VAR_15;

 VAR_23 = VAR_22[VAR_0];
 VAR_23 &= VAR_5;
 VAR_24 = VAR_22[VAR_1];
 VAR_25 = VAR_22[VAR_2];
 VAR_25 &= VAR_6;
 VAR_18 = (VAR_23 >> VAR_13) |
     (VAR_24 << VAR_3) |
     (VAR_25 << VAR_4);

 VAR_23 = VAR_22[VAR_7];
 VAR_23 &= VAR_10;
 VAR_24 = VAR_22[VAR_8];
 VAR_24 &= VAR_11;
 VAR_19 = (VAR_23 >> VAR_12) |
     (VAR_24 << VAR_9);

 VAR_17 = (VAR_18 + 1) * (1 << (VAR_19 + 2)) *
     (1 << VAR_20);
 return (VAR_17);
}
