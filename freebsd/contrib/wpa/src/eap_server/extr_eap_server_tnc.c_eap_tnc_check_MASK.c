
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {scalar_t__ state; } ;
struct eap_sm {int dummy; } ;
typedef int Boolean ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_10, void *VAR_11,
        struct wpabuf *VAR_12)
{
 struct eap_tnc_data *VAR_13 = VAR_11;
 const u8 *VAR_14;
 size_t VAR_15;

 VAR_14 = FUNC_0(VAR_4, VAR_3, VAR_12,
          &VAR_15);
 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_7, "EAP-TNC: Invalid frame");
  return VAR_8;
 }

 if (VAR_15 == 0 && VAR_13->state != VAR_9) {
  FUNC_1(VAR_7, "EAP-TNC: Invalid frame (empty)");
  return VAR_8;
 }

 if (VAR_15 == 0)
  return VAR_5;

 if ((*VAR_14 & VAR_2) != VAR_1) {
  FUNC_1(VAR_6, "EAP-TNC: Unsupported version %d",
      *VAR_14 & VAR_2);
  return VAR_8;
 }

 if (*VAR_14 & VAR_0) {
  FUNC_1(VAR_6, "EAP-TNC: Peer used Start flag");
  return VAR_8;
 }

 return VAR_5;
}
