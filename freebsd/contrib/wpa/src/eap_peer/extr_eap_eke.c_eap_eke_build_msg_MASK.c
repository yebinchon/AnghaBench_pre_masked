
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_eke_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_3(struct eap_eke_data *VAR_4, int VAR_5,
      size_t VAR_6, u8 VAR_7)
{
 struct wpabuf *VAR_8;
 size_t VAR_9;

 VAR_9 = 1 + VAR_6;

 VAR_8 = FUNC_0(VAR_2, VAR_1, VAR_9,
       VAR_0, VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_3, "EAP-EKE: Failed to allocate memory");
  return ((void*)0);
 }

 FUNC_2(VAR_8, VAR_7);

 return VAR_8;
}
