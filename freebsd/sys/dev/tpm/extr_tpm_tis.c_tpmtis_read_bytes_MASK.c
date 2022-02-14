
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct tpm_sc {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (struct tpm_sc*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tpm_sc*) ;

__attribute__((used)) static bool
FUNC_3(struct tpm_sc *VAR_1, size_t VAR_2, uint8_t *VAR_3)
{
 uint16_t VAR_4;

 while (VAR_2 > 0) {
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4 == 0)
   return (0);

  VAR_4 = FUNC_0(VAR_4, VAR_2);
  VAR_2 -= VAR_4;

  while (VAR_4-- > 0)
   *VAR_3++ = FUNC_1(VAR_1, VAR_0);
 }

 return (1);
}
