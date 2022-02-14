
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_sc {scalar_t__ interrupts; } ;


 int FUNC_0 (struct tpm_sc*,int ,int ) ;
 int FUNC_1 (struct tpm_sc*,int ,int ) ;
 int FUNC_2 (struct tpm_sc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct tpm_sc *VAR_3)
{





 if(VAR_3->interrupts)
  FUNC_0(VAR_3, VAR_2, FUNC_2(VAR_3, VAR_2));

 FUNC_1(VAR_3, VAR_0, VAR_1);
}
