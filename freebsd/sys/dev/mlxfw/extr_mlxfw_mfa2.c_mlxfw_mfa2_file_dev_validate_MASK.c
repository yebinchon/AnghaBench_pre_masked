
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxfw_mfa2_tlv_psid {int psid; } ;
struct mlxfw_mfa2_tlv_multi {int dummy; } ;
struct mlxfw_mfa2_tlv_component_ptr {int component_index; } ;
struct mlxfw_mfa2_tlv {int len; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct mlxfw_mfa2_tlv_component_ptr* FUNC_1 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;
 int FUNC_2 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*,int ,scalar_t__*) ;
 struct mlxfw_mfa2_tlv* FUNC_3 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*,int ,scalar_t__) ;
 struct mlxfw_mfa2_tlv_multi* FUNC_4 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;
 int FUNC_5 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*) ;
 struct mlxfw_mfa2_tlv_psid* FUNC_6 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*,int ,int,int,int ,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_10(const struct mlxfw_mfa2_file *VAR_3,
        const struct mlxfw_mfa2_tlv *VAR_4,
        u16 VAR_5)
{
 const struct mlxfw_mfa2_tlv_component_ptr *VAR_6;
 const struct mlxfw_mfa2_tlv_multi *VAR_7;
 const struct mlxfw_mfa2_tlv_psid *VAR_8;
 const struct mlxfw_mfa2_tlv *VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 int VAR_12;

 FUNC_7("Device %d\n", VAR_5);

 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_7) {
  FUNC_8("Device %d is not a valid TLV error\n", VAR_5);
  return 0;
 }

 if (!FUNC_5(VAR_3, VAR_7))
  return 0;


 VAR_9 = FUNC_3(VAR_3, VAR_7,
           VAR_2, 0);
 if (!VAR_9) {
  FUNC_8("Device %d does not have PSID\n", VAR_5);
  return 0;
 }

 VAR_8 = FUNC_6(VAR_3, VAR_9);
 if (!VAR_8) {
  FUNC_8("Device %d PSID TLV is not valid\n", VAR_5);
  return 0;
 }

 FUNC_9("  -- Device PSID ", VAR_0, 16, 16,
        VAR_8->psid, FUNC_0(VAR_9->len), 1);


 VAR_12 = FUNC_2(VAR_3, VAR_7,
            VAR_1,
            &VAR_10);
 if (VAR_12)
  return 0;

 if (VAR_10 == 0) {
  FUNC_8("Device %d has no components\n", VAR_5);
  return 0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_9 = FUNC_3(VAR_3, VAR_7,
            VAR_1,
            VAR_11);
  if (!VAR_9)
   return 0;

  VAR_6 = FUNC_1(VAR_3, VAR_9);
  if (!VAR_6) {
   FUNC_8("Device %d COMPONENT_PTR TLV is not valid\n",
          VAR_5);
   return 0;
  }

  FUNC_7("  -- Component index %d\n",
    FUNC_0(VAR_6->component_index));
 }
 return 1;
}
