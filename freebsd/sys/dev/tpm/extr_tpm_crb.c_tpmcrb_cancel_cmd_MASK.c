
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_sc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tpm_sc*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tpm_sc*,int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct tpm_sc *VAR_4)
{
 uint32_t VAR_5 = ~0;

 FUNC_0(VAR_4, VAR_0, VAR_1);
 if (!FUNC_2(VAR_4, VAR_2,
      VAR_5, ~VAR_5, VAR_3)) {
  FUNC_1(VAR_4->dev,
      "Device failed to cancel command\n");
  return (0);
 }

 FUNC_0(VAR_4, VAR_0, !VAR_1);
 return (1);
}
