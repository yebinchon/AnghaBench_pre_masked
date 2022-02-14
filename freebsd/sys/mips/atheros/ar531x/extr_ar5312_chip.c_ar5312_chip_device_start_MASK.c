
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16;

 VAR_11 = FUNC_0(VAR_4 + VAR_5);
 VAR_12 = FUNC_0(VAR_4 + VAR_6);

 VAR_13 = FUNC_2(VAR_12, VAR_2);
 VAR_14 = FUNC_2(VAR_12, VAR_3);

 VAR_15 = VAR_13 ? (1 << (VAR_13 + 1)) : 0;
 VAR_16 = VAR_14 ? (1 << (VAR_14 + 1)) : 0;

 VAR_15 <<= 20;
 VAR_16 <<= 20;

 FUNC_3("SDRMCTL %x %x %x %x\n", VAR_11, VAR_12, VAR_15, VAR_16);

 FUNC_0(VAR_9 + VAR_8);
 FUNC_0(VAR_9 + VAR_7);

 FUNC_1(VAR_9 + VAR_10, 0);

 FUNC_1(VAR_9+VAR_10,
  FUNC_0(VAR_9+VAR_10) |
  VAR_0 | VAR_1);

}
