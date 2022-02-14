
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

void
FUNC_5(void)
{
 uint64_t VAR_1;

 VAR_1 = FUNC_3(FUNC_0(FUNC_2(VAR_0)));
 FUNC_1(VAR_1 == 1, ("unexpected IPIs: %#jx", (uintmax_t)VAR_1));
 FUNC_4(FUNC_0(FUNC_2(VAR_0)), VAR_1);
}
