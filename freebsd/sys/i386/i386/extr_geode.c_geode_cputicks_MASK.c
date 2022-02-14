
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static uint64_t
FUNC_1(void)
{
 unsigned VAR_1;
 static unsigned VAR_2;
 static uint64_t VAR_3;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < VAR_2)
  VAR_3 += (1LL << 32);
 VAR_2 = VAR_1;
 return (VAR_3 | VAR_1);
}
