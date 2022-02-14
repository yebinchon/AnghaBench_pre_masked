
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tpm_sc {scalar_t__ interrupts; int mem_res; int intr_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_sc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct tpm_sc*,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_8 ;
 int FUNC_4 (struct tpm_sc*,int ,char*,int) ;

__attribute__((used)) static bool
FUNC_5(struct tpm_sc *VAR_9, int VAR_10)
{
 uint8_t VAR_11;
 int VAR_12;


 if (VAR_10 != 0)
  return (0);

 VAR_11 = VAR_3 | VAR_5;
 VAR_12 = VAR_7;
 VAR_9->intr_type = VAR_6;

 FUNC_1(VAR_9, VAR_2, VAR_4);
 FUNC_2(VAR_9->mem_res, VAR_2, 1, VAR_0);
 if(VAR_9->interrupts) {
  FUNC_4(VAR_9, VAR_1, "TPMLOCREQUEST with INTR", VAR_12 / VAR_8);
  return ((FUNC_0(VAR_9, VAR_2) & VAR_11) == VAR_11);
 } else {
  while(VAR_12 > 0) {
   if ((FUNC_0(VAR_9, VAR_2) & VAR_11) == VAR_11)
    return (1);

   FUNC_3("TPMLOCREQUEST POLLING", 1);
   VAR_12 -= VAR_8;
  }
 }

 return (0);
}
