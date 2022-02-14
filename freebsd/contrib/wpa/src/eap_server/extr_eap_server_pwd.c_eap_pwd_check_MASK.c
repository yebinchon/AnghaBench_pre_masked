
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {int state; } ;
typedef int Boolean ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_3(struct eap_sm *VAR_12, void *VAR_13,
        struct wpabuf *VAR_14)
{
 struct eap_pwd_data *VAR_15 = VAR_13;
 const u8 *VAR_16;
 size_t VAR_17;

 VAR_16 = FUNC_1(VAR_4, VAR_3, VAR_14, &VAR_17);
 if (VAR_16 == ((void*)0) || VAR_17 < 1) {
  FUNC_2(VAR_7, "EAP-pwd: Invalid frame");
  return VAR_11;
 }

 FUNC_2(VAR_6, "EAP-pwd: Received frame: exch = %d, len = %d",
     FUNC_0(*VAR_16), (int) VAR_17);

 if (VAR_15->state == VAR_10 &&
     ((FUNC_0(*VAR_16)) == VAR_2))
  return VAR_5;

 if (VAR_15->state == VAR_8 &&
     ((FUNC_0(*VAR_16)) == VAR_0))
  return VAR_5;

 if (VAR_15->state == VAR_9 &&
     ((FUNC_0(*VAR_16)) == VAR_1))
  return VAR_5;

 FUNC_2(VAR_7, "EAP-pwd: Unexpected opcode=%d in state=%d",
     *VAR_16, VAR_15->state);

 return VAR_11;
}
