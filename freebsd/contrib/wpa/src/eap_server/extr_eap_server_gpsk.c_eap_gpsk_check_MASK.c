
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_gpsk_data {scalar_t__ state; } ;
typedef int Boolean ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_10, void *VAR_11,
         struct wpabuf *VAR_12)
{
 struct eap_gpsk_data *VAR_13 = VAR_11;
 const u8 *VAR_14;
 size_t VAR_15;

 VAR_14 = FUNC_0(VAR_3, VAR_2, VAR_12, &VAR_15);
 if (VAR_14 == ((void*)0) || VAR_15 < 1) {
  FUNC_1(VAR_8, "EAP-GPSK: Invalid frame");
  return VAR_9;
 }

 FUNC_1(VAR_7, "EAP-GPSK: Received frame: opcode=%d", *VAR_14);

 if (VAR_13->state == VAR_5 && *VAR_14 == VAR_0)
  return VAR_4;

 if (VAR_13->state == VAR_6 && *VAR_14 == VAR_1)
  return VAR_4;

 FUNC_1(VAR_8, "EAP-GPSK: Unexpected opcode=%d in state=%d",
     *VAR_14, VAR_13->state);

 return VAR_9;
}
