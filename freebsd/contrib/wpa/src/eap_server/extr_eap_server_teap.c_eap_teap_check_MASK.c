
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_5, void *VAR_6,
         struct wpabuf *VAR_7)
{
 const u8 *VAR_8;
 size_t VAR_9;

 VAR_8 = FUNC_0(VAR_1, VAR_0, VAR_7, &VAR_9);
 if (!VAR_8 || VAR_9 < 1) {
  FUNC_1(VAR_3, "EAP-TEAP: Invalid frame");
  return VAR_4;
 }

 return VAR_2;
}
