
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;
 int* VAR_7 ;
 int* VAR_8 ;

uint32_t
FUNC_3(uint32_t VAR_9, uint16_t VAR_10,
    int VAR_11, int VAR_12, int VAR_13)
{
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_1(VAR_10 & VAR_5, ("not mcs %d", VAR_10));
 FUNC_1((VAR_10 &~ VAR_5) < 31, ("bad mcs 0x%x", VAR_10));

 if (VAR_12)
  VAR_14 = VAR_8[VAR_10 & 0x1f];
 else
  VAR_14 = VAR_7[VAR_10 & 0x1f];
 VAR_15 = VAR_6 + (VAR_9 << 3);
 VAR_16 = FUNC_2(VAR_15, VAR_14);
 if (VAR_13)
  VAR_17 = ((VAR_16 * 18) + 4) / 5;
 else
  VAR_17 = VAR_16 * 4;
 return VAR_17 + VAR_2 + VAR_0 +
     VAR_1 + VAR_3 + VAR_4 + FUNC_0(VAR_11);
}
