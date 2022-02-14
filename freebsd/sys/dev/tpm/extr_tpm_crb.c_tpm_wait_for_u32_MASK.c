
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int bus_size_t ;


 int FUNC_0 (struct tpm_sc*,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_2(struct tpm_sc *VAR_1, bus_size_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
    int32_t VAR_5)
{


 if ((FUNC_0(VAR_1, VAR_2) & VAR_3) == VAR_4)
  return (1);

 while (VAR_5 > 0) {
  if ((FUNC_0(VAR_1, VAR_2) & VAR_3) == VAR_4)
   return (1);

  FUNC_1("TPM in polling mode", 1);
  VAR_5 -= VAR_0;
 }
 return (0);
}
