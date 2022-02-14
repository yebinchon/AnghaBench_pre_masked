
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {int intr_type; scalar_t__ interrupts; } ;
typedef int int32_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int FUNC_0 (struct tpm_sc*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct tpm_sc*,int ,char*,int) ;

__attribute__((used)) static bool
FUNC_3(struct tpm_sc *VAR_2, bus_size_t VAR_3, uint32_t VAR_4, uint32_t VAR_5,
    int32_t VAR_6)
{


 if ((FUNC_0(VAR_2, VAR_3) & VAR_4) == VAR_5)
  return (1);


 if(VAR_2->interrupts && VAR_2->intr_type != -1) {
  FUNC_2(VAR_2, VAR_0, "TPM WITH INTERRUPTS", VAR_6 / VAR_1);

  VAR_2->intr_type = -1;
  return ((FUNC_0(VAR_2, VAR_3) & VAR_4) == VAR_5);
 }


 while (VAR_6 > 0) {
  if ((FUNC_0(VAR_2, VAR_3) & VAR_4) == VAR_5)
   return (1);

  FUNC_1("TPM POLLING", 1);
  VAR_6 -= VAR_1;
 }
 return (0);
}
