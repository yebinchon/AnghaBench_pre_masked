
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_aka_data {int eap_method; } ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_4, void *VAR_5,
        struct wpabuf *VAR_6)
{
 struct eap_aka_data *VAR_7 = VAR_5;
 const u8 *VAR_8;
 size_t VAR_9;

 VAR_8 = FUNC_0(VAR_0, VAR_7->eap_method, VAR_6,
          &VAR_9);
 if (VAR_8 == ((void*)0) || VAR_9 < 3) {
  FUNC_1(VAR_2, "EAP-AKA: Invalid frame");
  return VAR_3;
 }

 return VAR_1;
}
