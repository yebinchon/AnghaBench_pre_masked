
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_5(uint64_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = VAR_2 - VAR_1;
 uint64_t VAR_4 = 0;
 uint32_t VAR_5;


 if ((VAR_1 % FUNC_0(*VAR_0)) != 0) {
  VAR_5 = FUNC_1(VAR_2, FUNC_4(VAR_1, FUNC_0(*VAR_0)));
  VAR_4 += FUNC_2(FUNC_3(*VAR_0, VAR_1, VAR_5));
  VAR_3 -= (VAR_5 - VAR_1);
  VAR_0++;
 }

 while (VAR_3 > 0) {
  VAR_5 = FUNC_1(VAR_3, FUNC_0(*VAR_0));
  VAR_4 += FUNC_2(FUNC_3(*VAR_0, 0, VAR_5));
  VAR_3 -= VAR_5;
  VAR_0++;
 }

 return (VAR_4);
}
