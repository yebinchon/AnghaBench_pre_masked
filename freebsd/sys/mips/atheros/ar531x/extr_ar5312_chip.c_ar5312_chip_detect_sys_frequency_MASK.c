
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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int const,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_2(void)
{
 uint32_t VAR_11;
 uint32_t VAR_12;


 const uint32_t VAR_13 = FUNC_0(VAR_4 + VAR_5);
 if(VAR_7 == VAR_6) {
  VAR_11 = FUNC_1(VAR_13, VAR_1);
  VAR_12 = FUNC_1(VAR_13, VAR_0);
 } else {
  VAR_11 = FUNC_1(VAR_13, VAR_3);
  VAR_12 = FUNC_1(VAR_13, VAR_2);
 }

 const uint32_t VAR_14 = (0x5421 >> (VAR_11 * 4)) & 15;

 const uint32_t VAR_15 = (40000000 / VAR_14) * VAR_12;

 VAR_9 = VAR_15;
 VAR_8 = VAR_15 / 4;
 VAR_10 = 0;
}
