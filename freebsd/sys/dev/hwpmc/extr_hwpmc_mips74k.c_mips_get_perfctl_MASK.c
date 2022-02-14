
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
 int FUNC_0 (int ,int ,int,char*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

uint32_t
FUNC_1(int VAR_11, int VAR_12, uint32_t VAR_13, uint32_t VAR_14)
{
 uint32_t VAR_15;

 VAR_15 = VAR_13;

 VAR_15 <<= VAR_5;

 if (VAR_14 & VAR_9)
  VAR_15 |= (VAR_6 |
      VAR_4);
 if (VAR_14 & VAR_10)
  VAR_15 |= VAR_7;
 if ((VAR_14 & (VAR_10 | VAR_9)) == 0)
  VAR_15 |= VAR_2;
 if (VAR_14 & VAR_8)
  VAR_15 |= VAR_3;

 FUNC_0(VAR_1,VAR_0,2,"mips74k-get_perfctl ri=%d -> config=0x%x", VAR_12, VAR_15);

 return (VAR_15);
}
