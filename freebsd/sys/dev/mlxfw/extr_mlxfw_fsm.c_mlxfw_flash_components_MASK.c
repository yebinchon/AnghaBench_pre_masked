
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxfw_mfa2_file {int dummy; } ;
struct mlxfw_mfa2_component {int index; } ;
struct mlxfw_dev {int psid_size; int psid; } ;


 scalar_t__ FUNC_0 (struct mlxfw_mfa2_component*) ;
 int FUNC_1 (struct mlxfw_mfa2_component*) ;
 int FUNC_2 (struct mlxfw_dev*,int,struct mlxfw_mfa2_component*) ;
 int FUNC_3 (struct mlxfw_mfa2_file*,int ,int ,int*) ;
 struct mlxfw_mfa2_component* FUNC_4 (struct mlxfw_mfa2_file*,int ,int ,int) ;
 int FUNC_5 (struct mlxfw_mfa2_component*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct mlxfw_dev *VAR_0, u32 VAR_1,
      struct mlxfw_mfa2_file *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_0->psid,
           VAR_0->psid_size,
           &VAR_3);
 if (VAR_4) {
  FUNC_6("Could not find device PSID in MFA2 file\n");
  return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct mlxfw_mfa2_component *VAR_6;

  VAR_6 = FUNC_4(VAR_2, VAR_0->psid,
           VAR_0->psid_size, VAR_5);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);

  FUNC_7("Flashing component type %d\n", VAR_6->index);
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_6);
  FUNC_5(VAR_6);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
