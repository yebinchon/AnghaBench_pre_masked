
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{
 uint32_t VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;







 VAR_6 = FUNC_0(VAR_2 + VAR_3);
 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_8 = FUNC_1(VAR_6, VAR_1);

 VAR_5 = (VAR_7 ? (1 << (VAR_7 + 1)) : 0) +
     (VAR_8 ? (1 << (VAR_8 + 1)) : 0);
 VAR_5 <<= 20;

 VAR_4 = VAR_5;
}
