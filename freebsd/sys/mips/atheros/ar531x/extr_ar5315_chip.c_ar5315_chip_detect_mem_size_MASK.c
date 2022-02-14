
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,int,int,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(void)
{
 uint32_t VAR_6 = 0;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;




 VAR_7 = FUNC_0(VAR_3 + VAR_4);
 VAR_8 = FUNC_1(VAR_7, VAR_0);
 VAR_8 += 1;
 VAR_9 = FUNC_1(VAR_7, VAR_2);
 VAR_9 += 1;


 VAR_10 = FUNC_1(VAR_7, VAR_1);
 VAR_10 += 1;
 VAR_10 *= 8;


 VAR_6 = (1 << VAR_8) * (1 << VAR_9) * VAR_10;




 VAR_5 = VAR_6;
}
