
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = FUNC_1(1, 1);
 VAR_1 &= ~(0xff);
 VAR_1 |= VAR_0;
 FUNC_2(1, 1, VAR_1);

 FUNC_0();
}
