
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {int intr_type; } ;


 int FUNC_0 (struct tpm_sc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tpm_sc*,int ,int) ;
 int FUNC_2 (struct tpm_sc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct tpm_sc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = (struct tpm_sc *)VAR_1;
 VAR_3 = FUNC_0(VAR_2, VAR_0);

 FUNC_1(VAR_2, VAR_0, VAR_3);
 if (VAR_2->intr_type != -1 && VAR_2->intr_type & VAR_3)
  FUNC_2(VAR_2);
}
