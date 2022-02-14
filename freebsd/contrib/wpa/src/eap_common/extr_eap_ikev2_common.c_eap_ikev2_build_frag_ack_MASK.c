
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

struct wpabuf * FUNC_2(u8 VAR_4, u8 VAR_5)
{
 struct wpabuf *VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_0, 0, VAR_5, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_3, "EAP-IKEV2: Failed to allocate memory "
      "for fragment ack");
  return ((void*)0);
 }

 FUNC_1(VAR_2, "EAP-IKEV2: Send fragment ack");

 return VAR_6;
}
