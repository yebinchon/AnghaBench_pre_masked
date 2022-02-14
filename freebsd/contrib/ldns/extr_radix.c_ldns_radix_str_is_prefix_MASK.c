
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ radix_strlen_t ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(uint8_t* VAR_0, radix_strlen_t VAR_1,
 uint8_t* VAR_2, radix_strlen_t VAR_3)
{
 if (VAR_1 == 0) {
  return 1;
 }
 if (VAR_1 > VAR_3) {
  return 0;
 }
 return (FUNC_0(VAR_0, VAR_2, VAR_1) == 0);
}
