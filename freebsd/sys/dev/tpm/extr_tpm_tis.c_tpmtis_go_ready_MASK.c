
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {int mem_res; int intr_type; } ;


 int FUNC_0 (struct tpm_sc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tpm_sc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct tpm_sc*,int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_4(struct tpm_sc *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = VAR_3;
 VAR_5->intr_type = VAR_1;

 FUNC_1(VAR_5, VAR_2, VAR_3);
 FUNC_2(VAR_5->mem_res, VAR_2, 4, VAR_0);
 if (!FUNC_3(VAR_5, VAR_2, VAR_6, VAR_6, VAR_4))
  return (0);

 FUNC_0(VAR_5, VAR_2, ~VAR_3);
 return (1);
}
