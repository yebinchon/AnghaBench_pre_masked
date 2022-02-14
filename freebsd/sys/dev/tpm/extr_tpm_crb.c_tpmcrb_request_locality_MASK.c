
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {int dummy; } ;


 int FUNC_0 (struct tpm_sc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tpm_sc*,int ,int,int,int ) ;

__attribute__((used)) static bool
FUNC_2(struct tpm_sc *VAR_6, int VAR_7)
{
 uint32_t VAR_8;


 if (VAR_7 != 0)
  return (0);

 VAR_8 = VAR_4 | VAR_3;

 FUNC_0(VAR_6, VAR_0, VAR_1);
 if (!FUNC_1(VAR_6, VAR_2, VAR_8, VAR_8, VAR_5))
  return (0);

 return (1);
}
