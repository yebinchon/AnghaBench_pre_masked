
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
typedef int Boolean ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_6, void *VAR_7,
        struct wpabuf *VAR_8)
{
 const u8 *VAR_9;
 size_t VAR_10;

 VAR_9 = FUNC_0(VAR_2, VAR_1, VAR_8, &VAR_10);
 if (VAR_9 == ((void*)0) || VAR_10 < 1) {
  FUNC_1(VAR_4, "EAP-MD5: Invalid frame");
  return VAR_5;
 }
 if (*VAR_9 != VAR_0 || 1 + VAR_0 > VAR_10) {
  FUNC_1(VAR_4, "EAP-MD5: Invalid response "
      "(response_len=%d payload_len=%lu",
      *VAR_9, (unsigned long) VAR_10);
  return VAR_5;
 }

 return VAR_3;
}
